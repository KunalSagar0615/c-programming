#include<stdio.h>
#include<stdlib.h>

typedef struct Node 
{
    int data;
    struct Node *left,*right;  
}Node;

void insert(Node **r,int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->left = newNode->right=NULL;

    if((*r)==NULL)
        (*r)=newNode;
    
    else{
        Node *pre,*cur;
        cur=(*r);
        while(cur!=NULL)
        {
            pre=cur;
            if(cur->data > newNode->data)
                cur=cur->left;
            else 
                cur = cur->right;
        }
        if(pre->data > newNode->data)
            pre->left = newNode;
        else
            pre->right = newNode;
    }
}

void inOrder(Node *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d\t",root->data);
        inOrder(root->right);
    }
}

void preOrder(Node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\t",root->data);
    }
}

int search(Node *root,int key)
{
    if(root==NULL)
        return 0;
    if(root->data == key)
        return 1;
    else if(root->data > key)
        search(root->left,key);
    else 
        search(root->right,key);
}

int main()
{
    int data,key,ch;
    Node *root=NULL;

    while(1)
    {
        printf("\n1.insert \n2.inOrder \n3.preOrder \n4.postOrder \n5.search \n6.delete \n7.Exit \nEnter your choice : ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
                printf("\nEnter data : ");
                scanf("%d",&data);
                insert(&root,data);
                break;
            
            case 2:
                inOrder(root);
                break;

            case 3:
                preOrder(root);
                break;

            case 4:
                postOrder(root);
                break;

            case 5:
                printf("\nEnter data : ");
                scanf("%d",&key);
                if(search(root,key))
                    printf("\nData found");
                else 
                    printf("\nData not found");
                break;

            case 7:
                return 0;
            
            default:
                printf("\nInvalid choice ");
        }
    

    }

    return 0;
}