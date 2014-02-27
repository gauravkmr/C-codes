#include<stdio.h>
#include<stdlib.h>

#define MAX 100
int time;

typedef	struct edgelist
{
	int e_name;
	struct edgelist *next;
	struct edgelist *prev;
}list;

typedef struct graphADT
{
	int v_name;
	int dist;
	char color;
	int start;
	int finish;
	struct graphADT *predecessor;
	struct graphADT *next;
	struct graphADT *prev;
	list *link;
}graph;

struct queue
{
	int A[MAX];
	int front;
	int rear;
};

void enqueue(struct queue *p, int data)
{
	if(p->rear == (MAX-1))
		printf("queue is full\n");
	else
	{
		p->rear += 1;
		p->A[p->rear] = data;
	}
}

int dequeue(struct queue *p)
{
	int item;

	if((p->rear - p->front) == 0)
		printf("queue is empty\n");
	else
	{
		p->front += 1;
		item = p->A[p->front];
		return item;
	}
}

void add_vertex(graph **h, int k)
{
	graph *temp;
	temp = (graph *)malloc(sizeof(graph));

	temp->v_name = k;
	temp->next = NULL;
	temp->prev = NULL;
	temp->predecessor = NULL;
	temp->color = 'w';
	temp->dist = 1000;
	temp->start = -1;
	temp->finish = -1;

	if((*h) == NULL)
	{
		(*h) = temp;
		return;
	}

	graph *tail;
	tail = (graph *)malloc(sizeof(graph));
	tail = *h;
	
	while(tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = temp;
	temp->prev = tail;

	
}

void add_edge(list **e, int k)
{
	list *temp;
	temp = (list *)malloc(sizeof(list));

	temp->e_name = k;
	temp->next = NULL;
	temp->prev = NULL;
	
	if((*e) == NULL)
	{
		(*e) = temp;
		return;
	}

	list *tail;
	tail = *e;
	
	while(tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = temp;
	temp->prev = tail;
}

graph *create_graph(int v, int AdjMatrix[][v])
{
	int i,j;
	graph *root;
	root = (graph *)malloc(sizeof(graph));
	root = NULL;

	for(i = 0; i < v; i++)
		add_vertex(&root, (i+1));

	graph *g = root;


	list *edge;
	edge = (list *)malloc(sizeof(list));
	edge = NULL;

	for(i = 0; i < v; i++)
	{
		for(j = 0; j < v; j++)
		{
			if(AdjMatrix[i][j] == 1)
				add_edge(&edge, (j+1));
			
		}
		g->link = edge;
		g = g->next;
		edge = NULL;		
	}

	return root; 
}

void display(graph *head)
{
	while(head != NULL)
	{
		printf("%d---> ", head->v_name);
		list *l = head->link;

		while(l != NULL)
		{
			printf("%d >>> ", l->e_name);
			l = l->next;
		}
		printf("end\n");
		printf("|\n");
		printf("V\n");
		
		head = head->next;		
	}
	printf("end\n");
}

graph *search(graph *head, int src)
{
	while(head != NULL)
	{
		if(head->v_name == src)
			return head;
		head = head->next;
	}
	return NULL;
}

void BFS(graph *head, graph *src)
{
	src->color = 'g';
	src->dist = 0;
//	src->predecessor->v_name = -1;

	graph *pre;
	pre = (graph *)malloc(sizeof(graph));
	pre->v_name = -1;
	
	src->predecessor = pre;

	struct queue Q;
	Q.front = -1;
	Q.rear = -1;

	
	enqueue(&Q, src->v_name);

	while((Q.rear - Q.front) != 0)
	{
		int k = dequeue(&Q);
	
		graph *u;
		u = search(head, k);

		list *l = u->link;

		while(l != NULL)
		{
			int a = l->e_name;
			graph *b;
			b = search(head, a);
	
			if(b->color == 'w')
			{
				b->color = 'g';
				b->dist = u->dist + 1;
				b->predecessor = u;
				enqueue(&Q, b->v_name);
			}
			l = l->next;
		}
		u->color = 'b';
	}
/*	
	graph *g = head;
	while(g != NULL)
	{
		printf("%d, %c, %d, %d\n", g->v_name, g->color, g->dist, g->predecessor->v_name);
		g = g->next;	
	}
	printf("\n");
*/
}

void DFS_visit(graph *head, graph *u)
{
	time = time + 1;

	u->start = time;
	u->color = 'g';

	
	list *l = u->link;

	while(l != NULL)
	{
		int a = l->e_name;
		graph *b;
		b = search(head, a);
	
		if(b->color == 'w')
		{
			b->predecessor = u;
			DFS_visit(head, b);
		}
		l = l->next;
	}
	
	u->color = 'b';
	time = time + 1;
	u->finish = time;
}

void DFS(graph *head)
{
	time = 0;
	
	graph *g = head;

	while(g != NULL)
	{
		if(g->color == 'w')
		{
			graph *pre;
			pre = (graph *)malloc(sizeof(graph));
			pre->v_name = -1;

			g->predecessor = pre;
			
			DFS_visit(head, g);
		}		

		g = g->next;
	}
}

int main()
{
	int v;
	int src;

	printf("enter the number of vertices:  ");
	scanf("%d", &v);

	int adjMatrix[v][v];
	int i = 0, j = 0;

	printf("give connections:\n");

	while(i < v)
	{
		printf("vertex %d:\n", (i+1));

		while(j < v)
		{
			scanf("%d", &adjMatrix[i][j]);
			j++;
		}
		j = 0;
		i++;
	}

	graph *head;

	head = create_graph(v, adjMatrix);

//	display(head);	

	printf("enter source:  ");
	scanf("%d", &src);

	graph *ptr;

	ptr = search(head, src);
/*
	BFS(head, ptr);

	graph *g = head;
	while(g != NULL)
	{
		printf("%d, %c, %d, %d\n", g->v_name, g->color, g->dist, g->predecessor->v_name);
		g = g->next;	
	}
	printf("\n");
*/
	
	DFS(head);

	graph *g = head;
	while(g != NULL)
	{
		printf("%d, %d, %d, %d\n", g->v_name, g->start, g->finish, g->predecessor->v_name);
		g = g->next;	
	}
	printf("\n");
}


