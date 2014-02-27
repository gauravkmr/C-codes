/* linked list implementation of queue */
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}n;

n *head = NULL;
n *tail = NULL;

void enqueue()
{
	n *temp;
	int item;

	printf("enter element: ");
	scanf("%d", &item);

	temp = (n *)malloc(sizeof(n));

	temp->data = item;
	temp->link = NULL;

	if(tail == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->link = temp;
		tail = temp;
	}
		
}

void dequeue()
{
	int item;
	
	if(head == NULL)
		printf("queue is empty\n");
	else
	{
		item = head->data;
		printf("element deleted: %d\n", item);
	}

	if(head == tail)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{
		head = head->link;
	}

}

void display()
{
	n *temp;

	if(head == NULL)
		printf("queue is empty\n");
	else
	{
		temp = head;

		printf("queue elements:\n");
		
		while(temp != NULL)
		{
			printf("%d\t", temp->data);
			temp = temp->link;
		}
		printf("\n");
	}
}

int main()
{
	int action;

	do
	{
		printf("MENU\n1. insert\n2. delete\n3. display\n4. exit\n");
		scanf("%d", &action);

		switch(action)
		{
			case 1: enqueue();
				break;

			case 2: dequeue();
				break;

			case 3: display();
				break;

			case 4: printf("invalid choice\n");
		}
	}
	while(action != 4);
}

