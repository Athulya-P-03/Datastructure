#include<stdio.h>
#include<stdlib.h>
void menu();
void push();
void pop();
void display();
void peek();
int stack[20],i,n,choice,item,top=-1;
void main()
{
    printf("Enter the size of the stack:");
    scanf("%d",&n);
    menu();
}
void menu()
{
    int choice;
    printf("\n1.push\n2.pop\n3.display\n4.peek()\n5.exit");
    printf("\n Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:display();
        break;
        case 4:peek();
        break;
        case 5:exit(1);
    }
}
void push()
{
    if(top!=n-1)
    {
        printf("Enter the element to be inserted:");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
        printf("\ninserted successfully");
    }
    else
    {
        printf("\nstack is full!-overflow");
    }
    menu();
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty!-underflow");
    }
    else
    {
        item=stack[top];
        printf("\n deleted element:%d",item);
        top=top-1;
    }
    menu();
}
void peek()
{
    if(top==-1)
    {
        printf("there is no element in stack");
    }
    else
    {
        printf("the top most element is:\t%d\n",stack[top]);
    }
    menu();
}
void display()
{
    int i=0;
    if(top==-1)
    {
        printf("stack is empty:");
    }
    else
    {
        printf("stack elememts are:");
        for(i=top;i>=0;i--)
        printf("%d\t",stack[i]);
    }
    menu();
}
