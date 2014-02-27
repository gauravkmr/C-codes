#include<stdio.h>
#include<stdlib.h>

typedef	struct edgelist
{
	int e_name;
	struct edgelist *next;
	struct edgelist *prev;
}list;

typedef struct graphADT
{
	int v_name;
	struct graphADT *next;
	struct graphADT *prev;
	list *link;
}graph;

void add_vertex(graph **h, int k)
{
	graph *temp;
	temp = (graph *)malloc(sizeof(graph));

	temp->v_name = k;
//	temp->next = *h;
//	temp->prev = NULL;
	
//	if( (*h) != NULL )
//	(*h)->prev = temp;

//	(*h) = temp;

	temp->next = NULL;
	temp->prev = NULL;

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
//	root->next = NULL;
//	root->prev = NULL;
	
	for(i = 0; i < v; i++)
		add_vertex(&root, (i+1));

//	printf("%d\n", root->v_name);
//	root = root->next;
	graph *g = root;


	list *edge;
	edge = (list *)malloc(sizeof(list));
	edge = NULL;
//	edge->next = NULL;
//	edge->prev = NULL;

	for(i = 0; i < v; i++)
	{
		for(j = 0; j < v; j++)
		{
			if(AdjMatrix[i][j] == 1)
				add_edge(&edge, (j+1));
			
		}
//		if(i == 0)
//			edge = edge->next;
		g->link = edge;
		g = g->next;
		edge = NULL;		
	}

//	list *l;
//	l = root->link;
//	while(l != NULL)
//	{
//		printf("%d, ", l->e_name);
//		l = l->next; 
//	}
//	printf("\n");

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

int main()
{
	int v;
	
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

	printf("Adjacency Matrix:\n");
	for(i = 0; i < v; i++)
	{
		for(j = 0; j <v; j++)
			printf("%d", adjMatrix[i][j]);	
		printf("\n");
	}

	graph *head;

	head = create_graph(v, adjMatrix);

	display(head);	
	
//	graph *root = head;
	
//	while(root != NULL)
//	{
//		printf("%d >> ", root->v_name);
//		root = root->next;
//	}
//	printf("end\n");
}


