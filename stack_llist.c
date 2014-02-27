//linked list implementation of stacks

#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

typedef struct node
{
	int data;
	struct node *link;
}n;

n *top = NULL;

void push()
{
	int item;
	n *temp;

	printf("enter data:\n");
	scanf("%d", &item);

	temp = (n *)malloc(sizeof(n));

	temp->data = item;
	temp->link = top;
	top = temp;
}

void pop()
{
	n *temp;

	if(top == NULL)
		printf("stack is empty\n");
	else
	{
		temp = top;
		top = top->link;
		printf("data poped is %d\n", temp->data);
		free(temp);
	}
}

void display()
{
	n *temp;

	if(top == NULL)
		printf("stack is empty\n");
	else
	{
		temp = top;
		
		printf("elements of the stack are:\n");
		while(temp != NULL)
		{
			printf("%d\t", temp->data);
			temp = temp->link;
		}

	printf("\ntop element:  %d\n", top->data);
	}
}

int main()
{
	int i;
	
	do
	{
		printf("MENU\n1. push\n2. pop\n3. display\n4. exit\n");
		scanf("%d", &i);

		switch(i)
		{
			case 1: push();
				break;
	
			case 2: pop();
				break;

			case 3: display();
				break;

			case 4: printf("invalid choice\n");
		}
	}
	while(i != 4);
}
