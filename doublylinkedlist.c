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

void count(Node *head)
{
    int cnt=0;
    if(head== NULL)
    {
    printf("\nDLL is empty \n");
    return;
    }

    while(head!= NULL)
    {
        cnt ++;
        head = head -> next;
    }  
    printf("\nCount is %d\n",cnt);
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
                count(head);
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

            case 11 :
                return 0;

            default :
                printf("\nInvalid Choice");          
            
        }
    }
    return 0;
}