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
        printf("\nNode is empty !!");
    
    node *temp=*head;
    (*head)=(*head)->next;
    free(temp);
    printf("\nNode is Deleted");
}

// void DelLastNode(node **head)
// {
//     if((*head)==NULL)
//         printf("\nList is already empty ");
    
//     if((*head)->next==NULL)
//         {
//             free(*head);
//             (*head)=NULL;
//             printf("\nThe only node is deleted");
//         }
    
//     node *temp=*head;
//     while(temp->next->next != NULL)
//         temp=temp->next;

//     free(temp->next);
//     temp->next=NULL;
//     printf("\nLast node is Deleted");
// }

void DelLastNode(node **head)
{
    if(head==NULL)
        printf("\nNode is empty");

    else if((*head)->next==NULL){
        DelFirstNode(head);
    }

    else{
        node *temp=(*head);
        while(temp->next->next!=NULL)
            temp=temp->next;
        temp->next=NULL;
    }
}

void InsertInBetween(node *head,int data,int pos)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data=data;
    node *temp=head;

    int i;
    for(i=2;i<pos;i++)
        temp=temp->next;
    
    newnode->next=temp->next;
    temp->next=newnode;    
}

void DelInBetween(node *head,int pos)
{
    node *temp=head;
    int i;
    for(i=2;i<pos;i++)
        temp=temp->next;
    
    node *del=temp->next;
    temp->next=del->next;
    printf("\nNode is deleted\n");
}

void DelByValue(node *head,int data)
{
    node *temp= head;
    node *previous=NULL;
    while(temp!=NULL && temp->data!=data)
    {
        previous=temp;
        temp=temp->next;
    }

    if(temp==NULL)
    {
        printf("\nValue not found\n");
        return;
    }

    previous->next=temp->next;
    printf("\nValue deleted\n");

}

int main()
{
    int data,ch,key,pos;
    node *head = NULL;
    while(1)
    {
    printf("\n1.Append \n2.Display \n3.count \n4.Search \n5.Insert At First \n6.Delete First Node \n7.Delete Last node  \n8.Insert In Between \n9.Delete In Between \n10.Delete By value \n11.Exit \nEnter a choice =");
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

    case 8:
        printf("\nEnter Positon : ");
        scanf("%d",&pos);
        printf("\nEnter Data : ");
        scanf("%d",&data);

        if(pos == 1)
            Insert(&head,data);
        
        else if(pos == Count(head)+1)
            Append(&head,data);

        else if(pos > 1 && pos <= Count(head)+1)
            InsertInBetween(head,data,pos);
        
        else 
            printf("\nInvalid Position ");
        break;

    case 9:
        printf("\nEnter Position you want to delte  : ");
        scanf("%d",&pos);

        if(pos==1)
            DelFirstNode(&head);

        else if(pos==Count(head))
            DelLastNode(&head);
        
        else if(pos>1 && pos<Count(head))
            DelInBetween(head,pos);
        
        else 
            printf("\n Invalid Position");

        break;

    case 10:
        printf("\nEnter value which you want to delte : ");
        scanf("%d",&data);

        if (head==NULL)
                printf("\nHead is empty please enter the data "); 
        
        else if(head->data==data)
            DelFirstNode(&head);
            
        else
            DelByValue(head,data);
        break;

    case 11:return 0;
        break;

    default:printf("\nINVALID CHOICE ");
        break;
    }
    }
    return 0;
}