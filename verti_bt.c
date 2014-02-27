#include<stdio.h>
#include<stdlib.h>

struct node{
	
	struct node *left,*right;
	int data,index;
	
	};
	
	struct node *root=NULL, *cur=NULL,*parent=NULL;
	static int count=0,cnt=-1;
	int arr[100];
	node* getparent(struct node* r,struct node *n)
	{
	
			if(r==NULL)
				return NULL; 
	else if(r->index == (count/2))
				return r;
	
	else if(getparent(r->left,n))
				return ;	
					 
	else	if(getparent(r->right,n))
				return ;		
	else return NULL;
	}	
	
	void create()
		{
			cur =(node*)malloc(sizeof(node)); 
			printf("\nenter data");
			scanf("%d",&(cur->data));
				cur->left=NULL;
   			cur->right=NULL;
			if(count==0)
			{
				root=cur;
				arr[count]=cur->data;
				root->index=++count;	
				
				}
			else
			{
				arr[count]=cur->data;
   			cur->index=++count;
   			parent=getparent(root,cur);
   			if((cur->index)%2)
   				parent->right=cur;
   							else
   						parent->left=cur;
			
			}
				
		}
		
	/* void print(struct node *t)
{
	
	if(t==NULL)
		return;
		
		else {
			if(t->left!=NULL && t->right!=NULL)
			printf("\n %d index=%d  t->left =%d   t->right =%d", t->data,t->index,t->left->data,t->right->data);
			else if(t->left!=NULL)		printf("\n %d index=%d t->left =%d ", t->data,t->index,t->left->data);
			else if(t->right!=NULL)		printf("\n %d index=%d t->right =%d ", t->data,t->index,t->right->data);
			else printf("\n %d ",t->data); 
			print(t->left);
			print(t->right);
				}
	}	*/
	
	 node* pa[100]; 
 void store(struct node* root )
 {
	 int i=1,j;
	 pa[i]=root;
	 pa[2*i]=root->left;
	 pa[2*i+1]=root->right;
	 i=i*2;
	 while(pa[i]!=NULL)
	 {
		 pa[2*i]=pa[i]->left;
		 pa[2*i+1]=pa[i]->right;
		 ++i;
		}
//	for(j=1;j<i;j++)
//		printf(" %d " ,pa[j]->data);
	 }
 
	void print()
	{
		int i=1,k;
		float c=1,l=1;
		while(pa[i]!=NULL)
			{
				if(pa[i]->left!=NULL && pa[i]->right!=NULL)
				{
					for(k=1;k<(16/l);k++)
						printf(" ");
					for(k=1;k<(20/l);k++)
						printf("-");	
									
						printf("%d",pa[i]->data);

					for(k=1;k<(20/l);k++)
								printf("-");	
					
					for(k=1;k<(28/l);k++)
								printf(" ");
				}
				else	if(pa[i]->left==NULL && pa[i]->right==NULL)			
			{
						for(k=1;k<(32/l);k++)
						printf(" ");	
									
						printf("%d",pa[i]->data);

					for(k=1;k<(38/l);k++)
								printf(" ");
				}	
				
			else if(pa[i]->right==NULL)
						{
								for(k=1;k<(20/l);k++)
								printf(" ");
								for(k=1;k<(24/l);k++)
								printf("-");	
								printf("%d",pa[i]->data);
									for(k=1;k<(40/l);k++)
								printf(" ");
						}
		
				printf(" ");
				
							c++;
					if(c/2.0==l)
					{
						l=2.0*l;
						printf("\n");
					}
					
						++i;
					}
		
		}


 	
	int	main()
		{
			int i=0;
			while(i!=10)
			{
				create();
				++i;	
				cnt=-1;
				store(root);
		
			//	printf("\n");		
				}
						print();
		}