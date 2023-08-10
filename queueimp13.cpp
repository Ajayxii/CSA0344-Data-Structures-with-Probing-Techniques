#include<stdio.h>
#include<stdlib.h>
#define size 5
int QUE[size];
int front=-1,rear=-1;
void enque()
{
	int ele;
	printf("Enter the element:");
	scanf("%d",&ele);
	if(rear==size-1)
	printf("que is full");
	else if (front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	rear=rear+1;
	QUE[rear]=ele;
}
void deque()
{
	int ele;
	if(front==-1&&rear==-1)
	printf("que is empty");
	else
	{
		ele=QUE[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		front=front+1;
	}
	printf("the element %d is deleted",ele);
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	printf("que is empty");
	else
	for(i=front;i<=rear;i++)
	printf("%d\t",QUE[i]);
}
int main()
{
	int cho;
	do{
		printf("\n *MENU* \n");
		printf("\n 1.enque\n 2.deque\n 3.display\n");
		printf("Enter the choice:");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:enque();
			break;
			case 2:deque();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:
			printf("\n enter the choice between 1 to 4");
		}
	}
	while(cho>0&&cho<=4);
}
