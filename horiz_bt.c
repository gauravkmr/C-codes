
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
	


void padding ( char ch, int n ,char c,char d)
{
  int i;

  for ( i = 0; i < n-1; i++ )
    putchar ( ch );
	 printf("%c%c%c%c%c%c%c%c",c,d,d,d,d,d,d,d);
}


void structure ( struct node *root, int level,char ch,char d )
{
  int i;

  if ( root == NULL ) {
    padding ( '\t', level,ch,d);
    puts ( "~" );
  }
  else {
    structure ( root->right, level + 1,'|','-' );
  	 if(level!=1)	 {
	  	if(root->index%2)  padding ( '\t', level,'|','-' );
    		else		 padding ( '\t', level,'|','_' );
    }
    else				  padding ( '\t', level,' ',' ' );
    printf ( "%d\n", root->data );
    structure ( root->left, level + 1,'|','_' );
  }
}


 	
	int	main()
		{
			int i=0;
			while(i!=15)
			{
				create();
				++i;			
				}
						structure(root,1,' ',' ');
		}