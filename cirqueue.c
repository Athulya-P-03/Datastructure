#include<stdio.h>
#include<stdlib.h>
void menu();
void enqueue();
void dequeue();
void display();
int queue[50],front=-1,rear=-1,n,ele,item,i,ch;
void main()
{
    printf("Enter sixe of the queue : ");
    scanf("%d",&n);
    menu();
}
void menu()
{
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:enqueue();
        break;
        case 2:dequeue();
        break;
        case 3:display();
        break;
        case 4:exit(1);
    }
}
void enqueue()
{
    if((front==rear+1)||(front==0 && rear==n-1))
    {
        printf("queue is full");
    }
    else
    {
        
        printf("Enter the element to be inserted : ");
        scanf("%d",&ele);
        front=0;
        rear=(rear+1)%n;
        queue[rear]=ele;
        printf("element inserted successfully");
    }
    menu();
}
void dequeue()
{
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        item=queue[front];
        printf("element deleted : %d",item);
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%n;
        }
    }
    menu();
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("queue elements are : ");
        for(i=front;i<=rear;i=(i+1)%n)
            printf("%d\t",queue[i]);
    }
    menu();
}
