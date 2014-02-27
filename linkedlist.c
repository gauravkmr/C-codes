#include<stdio.h>
#include<stdlib.h>

struct node
{
	int key;
	struct node *prev;
	struct node *next;
};

void list_insert(struct node **h, int k)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));

	temp->key = k;
	temp->next = *h;
	temp->prev = NULL;
	
	if( (*h) != NULL )
	(*h)->prev = temp;

	(*h) = temp;
}

void list_delete(struct node **h, int k)
{
	struct node *temp = *h;
	int count = 0;

	while(temp->next != NULL)
	{
		if(temp->key == k)
		{
			count = 1;
			break;
		}
			
		temp = temp->next;
	}
	if(count == 1)
	{
		if(temp->prev != NULL)
			(temp->prev)->next = temp->next;
		else
			(*h) = temp->next;

		if(temp->next != NULL)
			(temp->next)->prev = temp->prev;
	}
	else
		printf("element not present\n");
}

void list_display(struct node **h)
{
	if( (*h) == NULL)
		printf("list empty\n");
	else
	{
		struct node *temp = *h;

		printf("List Elements:\n");
		while(temp->next != NULL)
		{
			printf("%d\t", temp->key);
			temp = temp->next;
		}
		
	}
}

int main()
{
	struct node *head;
	head = (struct node *)malloc(sizeof(struct node));
	head->prev = NULL;
	head->next = NULL;

	int choice, k;

	printf("OPERATIONS:\n");
	do{
	printf("\n1. insert\n2. delete\n3. search\n4. display\n5.exit\n\nYour Choice:  ");
	scanf("%d", &choice);

	

	switch(choice)
	{
		case 1: printf("input element:  ");
			scanf("%d", &k);
			list_insert(&head, k);
			break;

		case 2: printf("which element to delete:  ");
			scanf("%d", &k);
			list_delete(&head, k);
			break;

		case 4: list_display(&head);
			break;

		case 5: exit(0);
	}
	}while(choice!=5);
}
