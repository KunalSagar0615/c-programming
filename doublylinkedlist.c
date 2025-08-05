#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *pre, *next;
}Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next = newNode->pre =NULL;

    return newNode;
}

void append(Node **r, int data)
{
    Node *newNode = createNode(data);

    if((*r)==NULL)
        (*r)=newNode;
    
    else {
        Node *temp = (*r);
        while(temp->next != NULL)
            temp= temp->next;
        
        temp->next= newNode;
        newNode->pre=temp;
    }
}

void display(Node *head)
{
    if(head== NULL)
    {
    printf("\nDLL is empty \n");
    return;
    }

    while(head!= NULL)
    {
        printf("\t%d",head->data);
        head = head -> next;
    }
}

int count(Node *head)
{
    int cnt=0;
    if(head== NULL)
    {
    printf("\nDLL is empty \n");
    return 0;
    }

    while(head!= NULL)
    {
        cnt ++;
        head = head -> next;
    }  
    return cnt;
}

int search(Node *head,int data)
{
    while(head!=NULL)
        {
            if(head->data==data)
                return 1;
            
            head = head -> next;
        }
    return 0;
}

void InsertFirst(Node **r , int data)
{
    Node *newNode = createNode(data);

    if((*r)==NULL)
        (*r)=newNode;

    else{
       newNode->next=(*r);
       (*r)->pre=newNode;
       (*r)=newNode;
    }
}

void deleteFirst(Node **r)
{
    if((*r)->next==NULL)
        (*r)=NULL;
    
    else{
        Node *del=(*r);
        (*r)=(*r)->next;
        del->next = (*r)->pre = NULL;
        free(del);
    }
}

void deleteLast(Node **r)
{
   if((*r)->next==NULL)
        (*r)=NULL;
    else
    {
      Node *temp=(*r);
      while (temp->next->next!=NULL)
        temp=temp->next;
      temp->next->pre=NULL;
      temp->next=NULL;
}
}

void insertInBetween(Node *head,int data,int pos)
{
    Node *newNode=createNode(data);
    int i;
    Node *temp=head;
    for(i=2;i<pos;i++)
    temp=temp->next;

    newNode->next=temp->next;
    temp->next->pre=newNode;
    newNode->pre=temp;
    temp->next=newNode;
}

void deleteByValue(Node *head,int data)
{
    Node *temp=head;
    while(temp->next!=NULL)
    {
        if(temp->next->data==data)
        {
            Node *del=temp->next;
            temp->next=del->next;
            if(del->next!=NULL)
            del->next->pre=temp;
            del->next=del->pre=NULL;
            printf("\n4");
            free(del);
            return;
        }
        temp=temp->next;
    }
}

void delByPositon(Node *head)
{
    Node *temp =head;
    
}

int main()
{
    int data,ch,pos;
    Node *head = NULL;

    while(1)
    {
        printf("\n1.Append \n2.Display \n3.count \n4.Search \n5.Insert At First \n6.Delete First Node \n7.Delete Last node  \n8.Insert In Between \n9.Delete In Between \n10.Delete By value \n11.Exit \nEnter a choice =");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 : 
                printf("\nEnter data : ");
                scanf("%d",&data);
                append(&head,data);
                break;

            case 2:
                display(head);
                break;

            case 3:
                printf("\nCount is %d ",count(head));
                break;
            
            case 4:
                if(head==NULL)
                {
                    printf("\nNode is empty ");
                    continue;
                }
                printf("\nEnter data to search : ");
                scanf("%d",&data);
                if(search(head,data))
                    printf("\nData Found \n");
                else 
                    printf("\nData NOt Found \n ");
                break;

            case 5:
                printf("\nEnter  data = ");
                scanf("%d",&data);
                InsertFirst(&head,data);
                break;

            case 6:
                if(head==NULL)
                {
                    printf("\n LL is empty");
                    continue;
                }
                deleteFirst(&head);
                break;

            case 7:
            deleteLast(&head);
            break;

            case 8:
            printf("enter a pos:");
            scanf("%d",&pos);
            printf("enter data:");
            scanf("%d",&data);
            if(pos==1)
            InsertFirst(&head,data);
            else if(pos== count(head)+1)
            append(&head,data);
            else if(pos>1 && pos <= count(head))
            insertInBetween(head,data,pos);
            else
            printf("INVALID POSITION!!!!");
            break;

            case 9:
            printf("enter data:");
            scanf("%d",&data);
            if(head->data==data)
            deleteFirst(&head);
            else
            deleteByValue(head,data);
            break;

            case 10 :
                printf("\nEnter pos :");
                scanf("%d",&pos);
                if(pos==head)
                    deleteFirst(&head);
                else if(pos == count(head))
                    deleteLast(head);
                else if(pos > head && pos < count(head))
                    delByPositon(head);
                else 
                    printf("\nInvalid position");
                break;

            case 11 :
                return 0;

            default :
                printf("\nInvalid Choice");          
            
        }
    }
    return 0;
}