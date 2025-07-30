#include<stdio.h>
#define SIZE 5

typedef struct Stack{
    int data[SIZE];
    int top;
}Stack;

void push(Stack *s,int n)
{
    s->top++;
    s->data[s->top]=n;
}

int pop(Stack *s)
{
    int temp;
    temp=s->data[s->top];
    s->top--;
    return temp;
}

int isFull(Stack s)
{
    return s.top == SIZE -1;
}

int isEmpty(Stack s)
{
    return s.top==-1;
}

int peek(Stack s)
{
    return s.data[s.top];
}

void display(Stack s)
{
    int i;
    for(i=s.top;i>=0;i--)
    {
        printf("\n%d",s.data[i]);
    }
}

int main()
{
    int ch,n;
    Stack s;
    s.top=-1;

    while(1)
    {
    printf("\n\n1.Push \n2.Pop \n3.isEmpty \n4.isFull \n5.Peek \n6.Display \n7.Exit \nEnter your choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("\nEnter data : ");
        scanf("%d",&n);
        if(isFull(s))
            printf("\nStack is full");
        else 
            push(&s,n);
        break;
    
    case 2:
        if(isEmpty(s))
            printf("\nStack is empty");
        else 
            pop(&s);
        break;
    
    case 3:
        if(isEmpty(s))
            printf("\nStack is empty");
        else 
            printf("\nStack is not empty");
        break;
    
    case 4:
        if(isFull(s))
            printf("\nStack is full");
        else 
            printf("\nStack is not full");
        break;
    
    case 5:
        if(isEmpty(s))
            printf("\nStack is empty");
        else 
            printf("\nletest element is %d",peek(s));
        break;

    case 6:
        display(s);
        break;
    
    case 7:
        return 0;
        break;

    default:
        printf("\nInvalid choice");
        break;
    }
    }
    return 0;

}