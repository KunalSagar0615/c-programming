#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next,*pre;
}Node;

Node *createNode(int data)
{
    Node *newNode=(Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->pre=newNode->next=NULL;
    return newNode;
}

void append(Node **r,int data)
{
    Node *newNode=createNode(data);
    if((*r)==NULL)
    (*r)=newNode;
    else
    {
        Node *temp=(*r);
        while (temp->next!=NULL)
        temp=temp->next;
        temp->next=newNode;
        newNode->pre=temp;
    }
}

void display(Node *head)
{
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
}

int search(Node *head,int data)
    {
        while(head !=NULL)
        {
            if(head->data == data)
            return 1;
            head = head->next;
        }
        return 0;
    }
    int count(Node *head)
    {
        int cnt = 0;
        while(head !=NULL)
        {
            cnt ++;
            head=head->next;
        }
       return cnt;
    }

    void insertFirst(Node**r,int data)
    {
        Node *newNode=createNode(data);
        if((*r)==NULL)
        (*r)=newNode;
        else 
        {
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
        del->next=(*r)->pre=NULL;
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
    
int main()
{

    int data,ch,pos;
    Node *head=NULL;

    while(1)
    {  
        printf("\n\n1.Append\n2.Display\n3.Search\n4.Count\n5.Insertfirst\n6.DeleteFirst\n7.DeleteLast\n8.InsertByPosition\n9.Delbetween\n10.Exit\n11.DelByValue\n12.EnterChoice:");
        scanf("%d",&ch);
        switch(ch)
    {
         {
            case 1:
            printf("enter a data:");
            scanf("%d",&data);

            append(&head,data);
            break;
            
            case 2:
            display(head);
            break;

            case 3:
            printf("Enter data for search:");
            scanf("%d",&data);
            if(search(head,data))
            printf("Found!!");
            else
            printf("Not found!!");
            break;

            case 4:
            printf("count is %d",count(head));
            break;

            case 5:
            printf("enter data:");
            scanf("%d",&data);
            insertFirst(&head,data);
            break;

            case 6:
            if(head==NULL)
            {
                printf("\n list is empty");
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
            insertFirst(&head,data);
            else if(pos==count(head)+1)
            append(&head,data);
            else if(pos>1 && pos <=count(head))
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


            case 10:
            return 0;

            default:
            printf("INVALID POSITION!!!!");
            break;
            
        
    }
    }
}
}