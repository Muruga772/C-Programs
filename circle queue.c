#include<stdio.h>
#define max 5
int queue[max];
int front=1;
int rear=1;
void enqueue(int element)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("queue is overflow..");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=element;
    }
}
int dequeue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("underflow..");
    }
    else
    {
        printf("\n the dequeue element is %d",queue[front]);
        front=(front+1)%max;
    }
}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("\n queue is empty..");
    }
    else
    {
        printf("\nElement in a queue are:");
        while(i!=rear)
        {
            printf("%d",queue[i]);
            i=(i+1)%max;
        }
        printf("%d",queue[i]);

    }
    int main()
    {
        int choice=0,x;
        while(1)
        {
            printf("\n1.Enqueue\n2.Dequeue\n.Display\n");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
                printf("Element");
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
            }
        }
        return 0;
}
