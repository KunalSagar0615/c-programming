#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    struct Node *next;
    int data;  
}Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=newNode;
    return newNode;
}

void append(Node **r,int data)
{
    Node *newNode = createNode(data);

    if((*r)==NULL)
    {
        (*r)=newNode;
        (*r)->next=(*r);
    }
    else 
    {
        newNode->next = (*r)->next;
        (*r)->next=newNode;
        (*r)=newNode;
    }
}

// sir's logic
void display(Node *head)
{
    Node *temp = head->next;

    while(temp!=head)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
}

// optimized
// void display(Node *head)
// {
//     Node *temp = head ->next;
//     do{
//         printf("%d\t",temp->data);
//         temp=temp->next;
//     }while(temp->next!=head);
// }

int count(Node *head)
{
    Node *temp=head;
    int cnt =0;
    
    do{
        cnt++;
        temp=temp->next;
    }while(temp!=head);
    return cnt;
}

int search(Node *head,int data)
{
    Node *temp=head->next;
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
        (*r)->next=(*r);
    }
    else{
        newNode->next = (*r)->next;
        (*r)->next=newNode;
    }
}

void delFirst(Node **r)
{
    if((*r)->next==(*r))
    {
        (*r)=NULL;
        free(*r);
        printf("\nNode is deleted");
    }
    else{
        Node *del=(*r)->next;
        (*r)->next=del->next;
        del=NULL;
        free(del);
        printf("\nNode is deleted");
    }
}

void delLast(Node **r)
{
    if((*r)->next==(*r))
    {
        (*r)=NULL;
        free(*r);
        printf("\nNode is deleted");
    }
    else{
        Node *temp=(*r)->next;
        while(temp->next!=(*r))
            temp=temp->next;
        temp->next=(*r)->next;
        (*r)=temp;
        printf("\nNode is deleted");
    }
}

void insertInbetween(Node *head,int data,int pos)
{
    Node *newNode= createNode(data);
    int i;

    Node *temp=head->next;
    for(i=2;i<pos ;i++)
        temp=temp->next;
    
    newNode->next=temp->next;    
    temp->next=newNode;
}

void delByPos(Node **r ,int pos)
{
    int i;
    Node *temp=(*r)->next;
    
    if((*r)->next==(*r))
    {
        (*r)=NULL;
        free((*r));
    }

    for(i=2;i<pos;i++)
        temp=temp->next;
    
    Node *del=temp->next;
    temp->next=del->next;
    printf("\nNode is Deleted");    
}

void delByValue(Node *head,int data)
{
    Node *temp = head->next;
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
    printf("\nValue is deleted");
   
}



int main()
{
    int ch,data,pos;
    Node *head=NULL;
    
    while(1)
    {
        printf("\n1.Append \n2.Display \n3.count \n4.Search \n5.Insert At First \n6.Delete First Node \n7.Delete Last node  \n8.Insert In Between \n9.Delete In Between \n10.Delete By value \n11.Exit \nEnter a choice =");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 :
                printf("\nEnter Data :");
                scanf("%d",&data);
                append(&head,data);
                break;

            case 2:
                if(head==NULL){
                    printf("\nNode is empty");
                    continue;
                }
                display(head);
                break;
            
            case 3:
                if(head==NULL){
                    printf("\nNode is empty");
                    continue;
                }
                printf("\nCount is %d",count(head));
                break;

            case 4:
                if(head==NULL){
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
                if(head==NULL){
                    printf("\nNode is empty");
                    continue;
                }
                delFirst(&head);
                break;

            case 7:
                if(head==NULL){
                    printf("\nNode is empty");
                    continue;
                }
                delLast(&head);
                break;

            case 8:
                printf("\nEnter position : ");
                scanf("%d",&pos);
                if(head==NULL){
                    printf("\nNode is empty");
                    continue;
                }
                printf("\nEnter data : ");
                scanf("%d",&data);
                if(pos==1)
                    insertFirst(&head,data);
                else if(pos==count(head)+1)
                    append(&head,data);
                else if(pos > 1 && pos<=count(head))
                    insertInbetween(head,data,pos);
                else
                    printf("\nInvalid position");
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
                else if(pos>1 && pos <= count(head))
                    delByPos(&head,pos);
                else 
                    printf("\nInvalid position");
                break;

            case 10 : 
                    if(head==NULL)
                    {
                        printf("\nNode is empty");
                        continue;
                    }
                    printf("\nEnter value to delete :");
                    scanf("%d",&data);
                    if(data==head->data)
                        delFirst(&head);
                    else
                        delByValue(head,data);
                    break;

            case 11:
                return 0;

            default :
                printf("\nInvalid Choice\n");
        }
    }
    return 0;
}
