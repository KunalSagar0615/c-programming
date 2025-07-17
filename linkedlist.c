#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void Append(node **head,int data)
{
    node *newnode = (node*)malloc(sizeof(node));

    newnode->data=data;
    newnode->next=NULL;

    if(*head==NULL)
        (*head)=newnode;

    else{
        node *temp=(*head);

            while(temp->next!=NULL)
                temp=temp->next;

        temp->next=newnode;
    }
}

void Display(node *head)
{
    
    printf("\nLinked List :\n");
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head = head->next;
    }
    printf("\n");
}

int Count(node *head)
{
    int cnt=0;
    while(head!=NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

int Search(node *head,int key)
{
    while(head!=NULL)
    {
        if(head->data==key)
            return 1;

        head = head->next;
    }
    return 0;
}

void Insert(node **r,int data)
{
    node *newnode=(node *)malloc(sizeof(node));
    newnode->data=data;
        newnode->next=((*r)==NULL)?NULL:(*r);
    (*r)=newnode;
}

void DelFirstNode(node **head)
{
    if((*head)==NULL)
        printf("\n node is empty !!");
    
    node *temp=*head;
    (*head)=(*head)->next;
    free(temp);
    printf("\nFirst Node is Deleted");
}

void DelLastNode(node **head)
{
    if((*head)==NULL)
        printf("\nList is already empty ");
    
    if((*head)->next==NULL)
        {
            free(*head);
            (*head)=NULL;
            printf("\nThe only node is deleted");
        }
    
    node *temp=*head;
    while(temp->next->next != NULL)
        temp=temp->next;

    free(temp->next);
    temp->next=NULL;
    printf("\nLast node is Deleted");
}

int main()
{
    int data,ch,key;
    node *head = NULL;
    while(1)
    {
    printf("\n1.Append \n2.Display \n3.count \n4.Search \n5.Insert At First \n6.Delete First Node \n7.Delete Last node \n10.Exit \nEnter a choice =");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:printf("\nEnter data : ");
        scanf("%d",&data);
        Append(&head,data);
        break;

    case 2:Display(head);
        break;

    case 3:printf("\nCount is %d \n",Count(head));
         break;

    case 4:printf("\n Enter key to search :");
            scanf("%d",&key);
            if(Search(head,key))
                printf("\nData Found");
            else

                printf("\n Data not found");
            break;

    case 5:
            printf("\nEnter data : ");
            scanf("%d",&data);
            Insert(&head,data);
        break;

    case 6:DelFirstNode(&head);
        break;

    case 7:DelLastNode(&head);
        break;

    case 10:return 0;
        break;

    default:printf("\nINVALID CHOICE ");
        break;
    }

    }
    return 0;
}