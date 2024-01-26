#include<stdio.h>
#include<stdlib.h>
void menu();
void push();
void pop();
void display();
void peek();
int stack[50],n,i,top=-1,ele,item;
void main()
{
    printf("Enter the elements of the stack : ");
    scanf("%d",&n);
    menu();
}
void menu()
{
    int ch;
    printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:peek();
        break;
        case 4:display();
        break;
        case 5:exit(1);
    }
}
void push()
{
    if(top == n - 1)
    {
        printf("stack is full ");
    }
    else
    {
        printf("Enter the element to be inserted : ");
        scanf("%d",&ele);
        top=top+1;
        stack[top]=ele;
        printf("Element inserted successfully");
    }
    menu();
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        item=stack[top];
        printf("item deleted : %d",item);
        top=top-1;
    }
    menu();
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("top element is :%d",stack[top]);
    }
    menu();
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack elements are:");
        for(i=top;i>=0;i--)
        printf("%d\t",stack[i]);
    }
    menu();
}
