#include<stdio.h>
#include<stdlib.h>

typedef struct b_tree
{
	int key;
	struct b_tree *left;
	struct b_tree *right;
}node;

//recursive insert function
void insert(int k, node **root, int *c)
{
	if(*root == NULL)
	{
		*root = (node *)malloc(sizeof(node));
		(*root)->key = k;
		(*root)->left = NULL;
		(*root)->right = NULL;
		*c = *c + 1;
	}

	else if(k < (*root)->key)
		insert(k, &(*root)->left, c);
	
	else if(k > (*root)->key)
		insert(k, &(*root)->right, c);
}

//recursive display function
void display(node **root, int c)
{
	if(c != 0)
	{
		if(*root != NULL)
		{
			display( &(*root)->left , c);
			display( &(*root)->right , c);
			printf("%d   ", (*root)->key);
		}
	}
	else
	{
		printf("tree is empty...\n");
	}
	
}

//search for a key
void search(int val, node *root, int c)
{
	if(c != 0)                                                //if tree contains more than 1 element
	{
		if(root != NULL)
		{
			if(val == root->key)
			{
				printf("key present...\n");
				return;
			}
			else if(val < root->key)
				search(val, root->left, c);

			else
				search(val, root->right, c);
		}	
		else
		{
			printf("key not present...\n");
			return;
		}
	}
	else
	{
		printf("tree is empty...\n");
		return;
	}
}

void delete(node **root, int *c)
{
	if((*root) != NULL)
	{
		delete( &(*root)->left , c);
		delete( &(*root)->right , c);
		free(*root);
		*c = 0;
	}
	
}

int main()
{
	node *root, *temp;
//	root->left = NULL;                           /*if not commented it gives segmentation fault */
//	root->right = NULL;
	
	int choice, val;
	int count = 0;                             //contains number of elements in tree

	while(1)
	{
		printf("\nMENU:\n1. insert\n2. search\n3. delete\n4. display\n5. exit\n");
		printf("enter operation---->>  ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1: printf("\nenter value:  ");
				scanf("%d", &val);
				insert(val, &root, &count);
				break;
	
			case 2: printf("\nkey to be searched::\n");
				scanf("%d", &val);
				search(val, root, count);
				break;

			case 3: delete(&root, &count);
				break;

			case 4: printf("\nelements are::\n");
				display(&root, count);
				printf("\n");
				break;

			case 5: exit(0);
		}
	}

	return 0;
}
