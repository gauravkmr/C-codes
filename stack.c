/* stack implementation using one pointer always pointing to top of the stack */
// array implementation of stack

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

struct stack
{
	int a[MAX];
	int top;
};

void push(struct stack *p, int data)
{
	if(p->top == MAX-1)
		printf("overflow\n");
	else
	{
		p->top = p->top + 1;
		p->a[p->top] = data;
		printf("data pushed is %d\n", p->a[p->top]);
	}
}

void pop(struct stack *p)
{
	int x;

	if(p->top == -1)
		printf("underflow\n");
	else
	{
		x = p->a[p->top];
		p->top = p->top - 1;
		printf("value poped is  %d\n", x);
	}
}

void display(struct stack *p)
{
	int i;

	if(p->top == -1)
		printf("underflow\n");
	else
	{
		printf("\nstack elements are:\n");
		for(i = 0; i <= p->top; i++)
			printf("%d\t", p->a[i]);
		
		printf("\n");
	}
}

int search(struct stack *p, int key)
{
	int i;

	if(p->top == -1)
		printf("underflow\n");
	else
	{
		for(i = 0; i <= p->top; i++)
		{
			if(p->a[i] == key)
				return i;
		}
	}
	return -1;
}

int get_minimum(struct stack *p)
{
	int i, min;

	min = p->a[0];

	for(i = 0; i <= p->top; i++)
	if(p->a[i] <= min)
		min = p->a[i];

	return min;
}

int get_maximum(struct stack *p)
{
	int i , max = -1;

	for(i = 0; i <= p->top; i++)
	if(p->a[i] > max)
		max = p->a[i];

	return max;
}

int get_successor(struct stack *p, int key)
{
	int i;

	for(i = 0; i <= p->top; i++)
	{
		if(p->a[i] == key)
		{
			if(i == p->top)
				return -1;
			else
				return (p->a[i+1]);
		}
	}
}

int get_predecessor(struct stack *p, int key)
{
	int i;

	for(i = 0; i <= p->top; i++)
	{
		if(p->a[i] == key)
		{
			if(i == 0)
				return -1;
			else
				return p->a[i-1];
		}
	}
}

int main()
{
	struct stack s;
	s.top = -1;
	int choice, data, key, pos;
	

	while(1)
	{
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. display\n");
		printf("4. search\n");
		printf("5. minimum\n");
		printf("6. maximum\n");
		printf("7. successor\n");
		printf("8. predecessor\n");
		printf("9. exit\n");
		printf("select operation: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1: printf("\nenter value to be pushed:  ");
				scanf("%d", &data);
				push(&s, data);
				break;

			case 2: pop(&s);
				break;

			case 3: display(&s);
				break;
		
			case 4: printf("enter element to be searched:  ");
				scanf("%d", &key);
				pos = search(&s, key);
				printf("element %d is at position %d\n", key, (pos+1));
				break;

			case 5: key = get_minimum(&s);
				printf("minimum element is  %d\n", key);
				break;

			case 6: key = get_maximum(&s);
				printf("maximum element is  %d\n", key);
				break;

			case 7: printf("which elements successor u want:  ");
				scanf("%d", &key);
				pos = get_successor(&s, key);
				printf("successor of %d is %d\n", key, pos);
				break;

			case 8: printf("which elements predecessor u want:  ");
				scanf("%d", &key);
				pos = get_predecessor(&s, key);
				printf("predecessor of %d is %d\n", key, pos);
				break;

			case 9: exit(0);
		}
	}	
	printf("\n");	
	return 0;
}

