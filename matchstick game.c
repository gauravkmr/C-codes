#include<stdio.h>
main()
{
      int n,a,b,s1=0,s2=0;
      printf("...Number of matchsticks available right now is 21.\n");
      n=21;
      while(n>0)
      {
                printf("\n~ PLAYER 1:\n");
                printf("> pick up matchstick(s):");
                scanf("%d",&a);
                while(a>n){
                        printf("\n:(Invalid input.....ENTER AGAIN.");
                        printf("\n> Pick up matchsticks:");
                        scanf("%d",&a);
                        }
                n=n-a;
                printf("\n...Number of matchsticks available are %d\n",n);
                s1=s1+1;
                if(n>0)
                {
                           printf("\n~ PLAYER 2:");
                           printf("\n> Pick up matchstick(s):");
                           scanf("%d",&b);
                           while(b>n){
                                   printf("\n:(Invalid input.....ENTER AGAIN.");
                                   printf("\n> pick up matchsticks:");
                                   scanf("%d",&b);
                                   }
                           n=n-b;
                           printf("\n...Number of matchsticks available are %d\n",n);
                           s2=s2+1;
                           //break;
                }
                
                
      
      }    
      if(s1==s2)
                printf("\n\n_____PLAYER 1 IS THE WINNER!!!!!!!!");
      else
                printf("\n\n_____PLAYER 2 IS THE WINNER!!!!!!!!");  
      getch();
}
