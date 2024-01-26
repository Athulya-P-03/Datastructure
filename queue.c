#include<stdio.h>
#include<stdlib.h>
void menu();
void enqueue();
void dequeue();
void peek();
void display();
int queue[20],front=-1,rear=-1,n,i;
void main()
{
    printf("Enter the size of the queue : ");
    scanf("%d",&n);
    menu();
}
void menu()
{
    int ch;
    printf("\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:enqueue();
        break;
        case 2:dequeue();
        break;
        case 3:peek();
        break;
        case 4:display();
        break;
    }
}
void enqueue()
{
    int ele;
    if(rear == n - 1)
    {
        printf("Queue is full");
    }
    else
    {
        printf("Enter the element to be inserted :");
        scanf("%d",&ele);
        front=0;
        rear=rear+1;
        queue[rear]=ele;
        printf("Element inserted successfully");
    }
    menu();
}
void dequeue()
{
    int item;
    if((front==-1)||(front>rear))
    {
        printf("Queue is emepty");
    }
    else
    {
        item=queue[front];
        printf("Item deleted : %d",item);
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=front+1;
        }
    }
    menu();
}
void peek()
{
    if((front==-1)||front>rear)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("peak element is : %d",queue[front]);
    }
    menu();
}
void display()
{
    if((front==-1)||(front>rear))
    {
       printf("queue is empty"); 
    }
    else
    {
        printf("Queue elements are :");
        for(i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
    }
    menu();
}
