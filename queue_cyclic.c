/* cyclic queue of atmost n-1 elements using an array Q[0...n-1]
   if Q.head == Q.tail ----> empty
   if Q.head == Q.tail + 1 ----> full
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 8

struct node
{
	int Q[MAX];
	int head;
	int tail;
};

void enqueue(struct node *p, int data)
{
	p->Q[p->tail] = data;

	if(p->tail == (MAX-1))
		p->tail = 0;
	else
		p->tail = p->tail + 1;

	if(p->head == (p->tail + 1))
		printf("queue is full\n");

	if((p->head == 0) && (p->tail == (MAX-1)))
		printf("queue is full\n");
}

int dequeue(struct node *p)
{
	int x;

	if(p->head == p->tail)
	{
		printf("queue is empty\n");
		return -1;
	}
	else
	{
		x = p->Q[p->head];

		if(p->head == (MAX-1))
			p->head = 0;
		else
			p->head = p->head + 1;
	}
	return x;
}

void display(struct node *p)
{
	int i;
	
	if(p->head == p->tail)
		printf("queue is empty\n");
	
	else
	{
		printf("elements are:\n");
		i = p->head;
		while(1)
		{
			printf("%d\t", p->Q[i]);
		
			if(i == (MAX-1))
				i = 0;
			else
				i++;

			if(i == p->tail)
				break;
		}
	}
	printf("\n");
}

void search(struct node *p, int key)
{
	int i;

	if(p->head == p->tail)
		printf("queue is empty\n");
	
	else
	{
		i = p->head;
		while(1)
		{
			if(p->Q[i] == key)
			{
				printf("key is present\n");
				break;
			}

			if(i == (p->tail - 1))
			{
				printf("key not found\n");
				break;
			}

			if(i == (MAX-1))
				i = 0;
			else
				i++;
		}
	}
}

int get_minimum(struct node *p)
{
	int i, min;
	min = p->Q[p->head];

	i = p->head;

	while(1)
	{
		if(p->Q[i] < min)
			min = p->Q[i];
		
		if(i == (p->tail-1))
			break;
		
		if(i == (MAX-1))
		{
			if(p->tail==0)
				break;
			else
				i=0;
		}
		else
			i++;
	}
	return min;
}

int get_maximum(struct node *p)
{
	int i, max;
	max = p->Q[p->head];

	i = p->head;
	while(1)
	{
		if(p->Q[i] > max)
			max = p->Q[i];

		if(i == (p->tail - 1))
			break;

		if(i == (MAX - 1))
		{
			if(p->tail == 0)
				break;
			else
				i = 0;
		}
		else
			i++;
	}
	return max;
}

void get_successor(struct node *p, int key)
{
	int i;
	i = p->head;

	while(1)
	{
		if( p->Q[i] == key )
		{
			if(i != (p->tail - 1))
			{
				printf("successor of %d is %d\n", key, p->Q[i+1]);
				break;
			}
			else
			{
				printf("the given element doesnot have successor\n");
				break;
			}
		}

		if(i == (MAX-1))
			i = 0;
		else	
			i++;

	}
}

void get_predecessor(struct node *p, int key)
{
	int i;
	i = p->head;

	while(1)
	{
		if( p->Q[i] == key )
		{
			if(i != p->head)
			{
				printf("predecessor of %d is  %d\n", key, p->Q[i-1]);
				break;
			}
			else
			{
				printf("the given element doesnot have a predecessor\n");
				break;
			}
		}

		if(i == (MAX-1))
			i = 0;
		else
			i++;
		
	}
}

int main()
{
	struct node q;
	q.head = 0;
	q.tail = 0;

	int choice, data, key, pre, next;
	
	while(1)
	{
		printf("......................\n");
		printf("1. enqueue\n");
		printf("2. dequeue\n");
		printf("3. display\n");
		printf("4. search\n");
		printf("5. minimum\n");
		printf("6. maximum\n");
		printf("7. successor [first search the element whose successor u want]\n");
		printf("8. predecessor [first search the element whose predecessor u want]\n");
		printf("9. exit\n");
		printf("select operation: ");
		scanf("%d", &choice);
		
		switch(choice)
 		{
			case 1: printf("enter value to be enqueued:  ");
				scanf("%d", &data);
				enqueue(&q, data);
				break;
			
			case 2: data = dequeue(&q);
				printf("element dequeued is %d\n", data);
				break;

			case 3: display(&q);
				break;
			
			case 4: printf("enter element to be searched:  ");
				scanf("%d", &key);
				search(&q, key);
//				printf("element %d is at position %d\n", key, pos+1);
				break;

			case 5: key = get_minimum(&q);
				printf("minimum element is  %d\n", key);
				break;
			
			case 6: key = get_maximum(&q);
				printf("maximum element is  %d\n", key);
				break;

			case 7: printf("which elements successor u want:  ");
				scanf("%d", &key);
				get_successor(&q, key);
//				printf("successor of %d is %d\n", key, next);
				break;

			case 8: printf("which elements predecessor u want:  ");
				scanf("%d", &key);
				get_predecessor(&q, key);
//				printf("predecessor of %d is %d\n", key, pre);
				break;

			case 9: exit(0);
		}
	}
	printf("\n");	
	return 0;
}
