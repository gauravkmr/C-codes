#include<stdio.h>
#include<stdlib.h>

struct Node
{
	char ch;
	int flag;
	struct Node *link[26];
};

void trie_insert(struct Node *root, char name[])
{
	int i, n = 0;
	struct Node *temp_root = root;

	while(name[n] >= 97 && name[n] <= 122)
	{
		int loc = name[n] - 97;

		if(temp_root->link[loc] == NULL)
		{
			struct Node *temp;
			temp = (struct Node *)malloc(sizeof(struct Node));
	
			temp->ch = name[n];
			temp->flag = 0;	
			for(i = 0; i < 26; i++)
				temp->link[i] = NULL;
	
			temp_root->link[loc] = temp;
		}		
		temp_root = temp_root->link[loc];
		n++;
	}

	temp_root->flag = 1;
}

/*
void trie_display(struct Node *root)
{
	int i;

	struct Node *temp_root = root;

	for(i = 0; i < 26; i++)
		if(temp_root->link[i] != NULL)
		break;

	temp_root = temp_root->link[i];

	while(temp_root->flag != 1)
	{
		printf("%c", temp_root->ch);
		
		for(i = 0; i < 26; i++)
			if(temp_root->link[i] != NULL)
			break;

		temp_root = temp_root->link[i];
	}

	printf("%c", temp_root->ch);
	printf("\n");
}
*/

void trie_search(struct Node *root, char nam[])
{
	int i, n = 0;
	struct Node *temp_root = root;
	
	while(nam[n] >= 97 && nam[n] <= 122)
	{
		int loc = nam[n] - 97;
		if(temp_root->link[loc] == NULL)
		{
			printf("not found.\n");
			return;
		}	
		
		temp_root = temp_root->link[loc];
		n++;
	}

	if(temp_root->flag == 1)
		printf("found.\n");
	else
		printf("not found.\n");
}

int main()
{
	int i, count, j;
	char name[30] = {'0'};
	char nam[30] = {'0'};

	struct Node *root;
	root = (struct Node *)malloc(sizeof(struct Node));

	root->ch = '0';
	root->flag = 0;
	for(i = 0; i < 26; i++)
		root->link[i] = NULL;

//	printf("how many names you want to enter: ");
	scanf("%d", &count);

	for(j = 0; j < count; j++)
	{	
//		printf("enter name:  ");
		scanf("%s", name);

		trie_insert(root, name);
	}
	
//	trie_display(root);

//	printf("enter name you want to search:  ");
	scanf("%s", nam);

	trie_search(root, nam);
}
