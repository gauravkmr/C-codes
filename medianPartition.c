#include<stdio.h>
void median_sort(int [],int ,int,int );
int partition(int [],int ,int);
//void sort(int [], int , int );

int main()
{
 	int n,i;
 	int m,k;
 	int arr[20];

 	printf("Enter the size of array\n"); // input the elements
 	scanf("%d",&n);

 	printf("Enter the elements:");
 	
	for(i=0; i<n; i++)
  		scanf("%d",&arr[i]);
 	printf("\n");

  	printf("which element u want:");
 	scanf("%d", &m);

 	median_sort(arr,0,n-1, m-1); // sort the array

	printf("required element is %d\n", arr[m-1]);
  
//if u want sorted array, call sort function instead of median_sort function
//	sort(arr, 0, n-1);	 	

//	printf("Sorted array:"); // print sorted array
//	for(i=0; i<n; i++)
//	 	printf("%d ",arr[i]);
//	printf("\n");  
   
	return 0;
}

//prints the median
//if using as a part of sort function, make return type int, and return q;
void median_sort(int arr[],int p,int r, int k)
{
  	int q;
  	if(p<r)
  	{
  		q = partition(arr,p,r);
    	
		if(q < k)
    		median_sort(arr,q+1,r,k);

    		else if(q > k)
    		median_sort(arr,p,q-1,k);

    		else
//    			printf("required element is %d\n", arr[q]);
//if u keep the print statement here it won't work for input(15,7,9,6,3,6,9,67), where required index is 4
//but instead if the statement is put in main ,it works just fine
			return;
  	}
}


//to sort array using median partition technique
/*
void sort(int arr[], int p, int r)
{
	int m;
	
	if(p < r)
	{
		m=median_sort(arr,p,r,(p+r)/2);
		sort(arr,p,m-1);
		sort(arr,m+1,r);
	}
}
*/
  
int partition(int arr[],int p,int r)
{
	int temp;
	int i,j;
	i=p;
	j=p+1;
	  
	while(j<=r)
	{
		if(arr[j]<=arr[p])
		{
	      		i=i+1;
	      		temp=arr[i];
	      		arr[i]=arr[j];
	      		arr[j]=temp;
	    	}
	   	j=j+1;
	}
	   
	temp=arr[i];
	arr[i]=arr[p];
	arr[p]=temp;
	 
	return i;
}

