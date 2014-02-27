#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int val;
    struct tree *left;
    struct tree *right;
    struct tree *prev;
}tree;

void insert(int  k,tree **root)
{
    //itearatively done
    tree *y=NULL;
    tree *newnode = NULL;
    newnode = (tree *)malloc(sizeof(tree));
    newnode->val = k;
    newnode->right = NULL;
    newnode->left = NULL;
    newnode->prev = y;

    tree *x = *root;

    while(x!=NULL)
        {
            y = x;
            if(k<x->val)
                x = x->left;
            else
                x = x->right;
        }
        newnode->prev = y;

        if(y==NULL)
            {
                (*root) = newnode;
            }
        else if(k<y->val)
            (y->left) = newnode;
        else
            (y->right)= newnode;



}
void display(tree *root)
{

    if(root != NULL)
        {
            /*//in order
            display(root->left);
            printf("%d\n",root->val);
            display(root->right);
*/
            //pre order
            printf("%d  ",root->val);
            display(root->left);
            display(root->right);


            /*//post order
            display(root->left);
            display(root->right);
            printf("%d\n",root->val);*/
        }
}

int main()
{
    int num,key;
    tree *root=NULL;
    int choice;

    do
    {
        printf("1. insert\n");
        printf("2. display\n");
        printf("3. exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
         case 1:
                printf("enter the term===>>");
                scanf("%d",&num);
                insert(num,&root);
                break;
         case 2:
                display(root);
                break;
         case 3:
                break;
         default:
                printf("invalid choice");

        }
    }while(choice!=3);

return 0;
}
