#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[30]; 	
	char id[12];
	struct student *prev;
	struct student *next;
};

struct student *s[10];
int collision[10] = {0};

int hash1(int key)
{
	return (key % 7);
}

int hash2(int key)
{
	return (7 + key%3);
}

void hash_insert()
{
	struct student *temp;
	temp = (struct student *)malloc(sizeof(struct student));

	scanf("%s", temp->name);
	scanf("%s", temp->id);

//	temp->name = nam;
//	temp->id = ID;
	temp->next = NULL;
	temp->prev = NULL;

	int key = (temp->id[8]-48)*100 + (temp->id[9]-48)*10 + (temp->id[10]-48);

	int h = hash1(key);

	if(collision[h] == 0)
		s[h] = temp;
	else
	{
		h = hash2(key);
		if(collision[h] == 0)
			s[h] = temp;
		else
		{
			temp->next = s[h];
			(s[h])->prev = temp;
			(s[h]) = temp;
		}
	}
	collision[h] = 1;

}

int main()
{
	int i;
	char nam[30];
	char ID[12];

//	int collision[10] = {0};

	for(i = 0; i < 10; i++)
	{
		
//		printf("enter name:  ");
//		scanf("%s", nam);

//		printf("enter id:    ");
//		scanf("%s", ID);	

		hash_insert();
	}

	for(i = 0; i < 10; i++)
	{
		printf("position %d::\n", i);

		while(s[i] != NULL)
		{
			printf("    'name: %s, id: %.12s'", s[i]->name, s[i]->id);
			s[i] = s[i]->next;
		}
		printf("\n");
	}

	for(i = 0; i < 10; i++)
		printf("%d  ", collision[i]);
	printf("\n");
}

