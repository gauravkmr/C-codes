#include<stdio.h>
#include<string.h>

swap(char *a,char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

perm(char s[], int begin,int end)                       
{
	int n;
	if(begin == end)                                      
	{						
		printf("%s",s);
		printf("\n");
	}                                            
                                                        
	else                                           
	{                                              
		for(n=begin;n<=end;n++)               
		{                                     
			swap((s+begin), (s+n));       
			perm(s,(begin+1),end);        
			swap((s+begin),(s+n));        
		}
	}
}

void main()
{
	char str[33];
	int begin,end;
	printf("enter string");
	scanf("%s",str);

	begin = 0;
	end = strlen(str)-1;
	
	perm(str,begin,end);
	
}
