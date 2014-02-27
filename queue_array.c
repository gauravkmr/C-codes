/* array implementation of queue */
#include<stdio.h>
#include<stdlib.h>

#define MAX 10

/*
void insert(struct queue *, int);
void delete(struct queue *);
void display(struct queue *);
*/

struct queue
{
	int A[MAX];
	int front;
	int rear;
};

void insert(struct queue *p, int data)
{
	if(p->rear == (MAX-1))
		printf("queue is full\n");
	else
	{
		p->rear += 1;
		p->A[p->rear] = data;
		printf("data inserted: %d\n", p->A[p->rear]);
	}
}

void delete(struct queue *p)
{
	int item;

	if((p->rear - p->front) == 0)
		printf("queue is empty\n");
	else
	{
		p->front += 1;
		item = p->A[p->front];
		printf("element deleted: %d", item);
	}
}

void display(struct queue *p)
{
	int i;

	if((p->rear - p->front) == 0)
		printf("queue is empty\n");
	else
	{
		printf("elements of queue are:\n");
		for(i = (p->front + 1); i <= p->rear; i++)
		{
			printf("%d\t", p->A[i]);
		}
		printf("\ntop element: %d\n", p->A[p->rear]);
	}
}

int main()
{
	struct queue q;
	q.front = -1;
	q.rear = -1;

	int action, data;

	do
	{
		printf("\nMENU\n1. insert\n2. delete\n3. display\n4. exit\n");
		scanf("%d", &action);

		switch(action)
		{
			case 1: printf("enter element:  ");
				scanf("%d", &data);
				insert(&q, data);
				break;

			case 2: delete(&q);
				break;

			case 3: display(&q);
				break;

			case 4: printf("invalid choice\n");
		}
	}
	while(action != 4);
}
