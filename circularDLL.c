#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *pre , *next;
}Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next = newNode->pre = NULL;
    return newNode;
}

void append(Node **r, int data)
{
    Node *newNode = createNode(data); 

    if((*r)==NULL)
    {
        (*r)=newNode;
        (*r)->next = (*r)->pre = newNode;
    }
    else
    {
        newNode->pre=(*r)->pre;
        (*r)->pre->next = newNode;
        newNode->next=(*r);
        (*r)->pre=newNode;
    }
}

void display(Node *head)
{
    Node *temp = head;
    
    do{
        printf("%d\t",temp->data);
        temp=temp->next;
    }while(temp!=head);
}

int count(Node *head)
{
    int cnt=0;
    Node *temp=head;
    do{
        cnt++;
        temp=temp->next;
    }while(temp!=head);
    return cnt;
}

int search(Node *head , int data)
{
    Node *temp=head;

    do{
        if(temp->data==data)
            return 1;
        temp=temp->next;
    }while(temp!=head);

    return 0;
}

void insertFirst(Node **r,int data)
{
    Node *newNode = createNode(data);

    if((*r)==NULL)
    {
        (*r)=newNode;
        (*r)->next = (*r)->pre =newNode;
    }
    else{
        (*r)->pre->next=newNode;
        newNode->pre=(*r)->pre;
        newNode->next=(*r);
        (*r)->pre=newNode;
        (*r)=newNode;
    }
}

void delFirst(Node **r)
{
    if((*r)->next==(*r))
    {
        (*r)->next = (*r)->pre =NULL;
        (*r)=NULL;
    }
    else
    {
        Node *del=(*r);
        del->pre->next=(*r)->next;
        (*r)->next->pre=del->pre;
        (*r)=(*r)->next;
        del->next=del->pre=NULL;
        del=NULL;
        free(del);
    }
}

void delLast(Node **r)
{
    if((*r)->next==(*r))
    {
        (*r)->next = (*r)->pre =NULL;
        (*r)=NULL;
    }
    else{
        Node *del=(*r)->pre;
        (*r)->pre=del->pre;
        del->pre->next=del->next;
        del=NULL;
    }
}

void insertInBetween(Node *head,int pos,int data)
{
    int i;
    Node *newNode = createNode(data);
    Node *temp=head;

    for(i=2;i<pos;i++)
        temp=temp->next;
    
    newNode->next=temp->next;
    temp->next->pre=newNode;
    temp->next=newNode;
    newNode->pre=temp;
}

void delInBetween(Node *head,int pos)
{
    Node *temp=head;
    int i;

    for(i=2;i<pos;i++)
        temp=temp->next;

    Node *del=temp->next;
    temp->next=del->next;
    del->next->pre=temp;
    del=NULL;
    free(del);
}

void delByValue(Node *head,int data)
{
    Node *temp=head;
    Node *del;
    do{
        del=temp;
        temp=temp->next;
    }while(temp->data!=data && temp!=head);

    if(temp==head)
    {
        printf("value not found ");
        return;
    }
    
    del->next=temp->next;
    temp->next->pre=del;
    temp->next=temp->pre=NULL;
    temp=NULL;
    free(temp);
    printf("\nValue is deleted");
    
}

int main()
{
    int ch,data,pos;
    Node *head=NULL;
    
    while(1)
    {
        printf("\n\n1.Append \n2.Display \n3.count \n4.Search \n5.Insert At First \n6.Delete First Node \n7.Delete Last node  \n8.Insert In Between \n9.Delete In Between \n10.Delete By value \n11.Exit \nEnter a choice =");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("\nEnter data : ");
                scanf("%d",&data);
                append(&head,data);
                break;

            case 2:
                if(head==NULL)
                    {
                        printf("\nNode is empty");
                        continue;
                    }
                display(head);
                break;

            case 3:
                if(head==NULL)
                {
                    printf("\nNode is empty");
                    continue;
                }
                printf("\nCount is : %d",count(head));
                break;

            case 4:
                if(head==NULL)
                {
                    printf("\nNode is empty");
                    continue;
                }
                printf("\nEnter data : ");
                scanf("%d",&data);
                if(search(head,data))
                    printf("\nData found");
                else 
                    printf("\nData not found");
                break;

            case 5:
                printf("\nEnter data : ");
                scanf("%d",&data);
                insertFirst(&head,data);
                break;

            case 6:
                if(head==NULL)
                {
                    printf("\nNode is empty");
                    continue;
                }
                delFirst(&head);
                break;

            case 7:
                if(head==NULL)
                {
                    printf("\nNode is empty");
                    continue;
                }
                delLast(&head);
                break;

            case 8:
                printf("\nEnter pos : ");
                scanf("%d",&pos);
                printf("\nEnter data : ");
                scanf("%d",&data);
                if(pos==1)
                    insertFirst(&head,data);
                else if(pos==count(head)+1)
                    append(&head,data);
                else if (pos>1 && pos<=count(head))
                    insertInBetween(head,pos,data);
                else 
                    printf("\nInvalid Position");  
                break;

            case 9:
                if(head==NULL)
                    {
                        printf("\nNode is empty");
                        continue;
                    }
                printf("\nEnter pos : ");
                scanf("%d",&pos);
                if(pos==1)
                    delFirst(&head);
                else if(pos==count(head))
                    delLast(&head);
                else if(pos>1 && pos<count(head))
                    delInBetween(head,pos);
                else 
                    printf("\nInvalid choice");
                break;

            case 10:
                if(head==NULL)
                {
                    printf("\nNode is empty");
                    continue;
                }
                printf("\nEnter data : ");
                scanf("%d",&data);

                if(head->data==data)
                    delFirst(&head);
                else if(head->pre->data==data)
                    delLast(&head);
                else
                    delByValue(head,data);
                break;
            case 11:
                return 0;

            default:
                printf("\n Invalid choice");
        }
    }
    return 0;
}