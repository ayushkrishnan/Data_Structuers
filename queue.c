#include <stdio.h>

int queue[100], n, rear=-1, front=-1, option;
void Enqueue();
void Dequeue();
void Display();

int main()
{
	printf("Enter the size of the queue : ");
	scanf("%d", &n);
	printf("\n\t1) To Enqueue an element");
        printf("\n\t2) To Dequeue an element");
        printf("\n\t3) To Display all the elements");
        printf("\n\t4) To Exit out");
	do {
		printf("\nSelect your option : ");
		scanf("%d", &option);

		switch(option){
			case 1:
				Enqueue();
				break;
			case 2:
				Dequeue();
				break;
			case 3:
				Display();
				break;
			case 4:
				printf("\n\t!X!X!X!EXITED!X!X!X!\n");
				break;
			default:
				printf("INVALID OPTION!!!,Select other option\n");
		}
	} while(option != 4);
}

void Enqueue()
{
	if(rear >= n-1)
	{
		printf("Queue is in OVER FLOW condition\n");
	}
	else
	{
		if(front == -1)
		{
			front = 0;
		}	
		printf("Enter the value to enqueue : ");
		scanf("%d", &queue[++rear]);
	}
}

void Dequeue()
{
	if(front == -1 || front > rear)
	{
		printf("Queue is in UNDER FLOW condition\n");
	}
	else
	{
		printf("%d is deleted\n", queue[front++]);
	}
}

void Display()
{
	if(front == -1 || front > rear)
	{
		printf("Queue is empty\n");
	}
	else 
	{
		printf("Queue element are\n");
		for(int i=front; i<=rear; i++)
		{
			printf("%d\n", queue[i]);
			
		}
	}
}






