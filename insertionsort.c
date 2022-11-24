#include<stdio.h>

void insertionsort(int arr[],int size);

void insertionsort(int arr[],int size)
{
      int i,j,key;
      for(i=0;i<size;i++)
      {
           key=arr[i];
           j=i-1;
           while(j>=0 && arr[j]>key)
           {
           	arr[j+1]=arr[j];
           	j--;
           }
           arr[j+1]=key;
       }
       printf("\n\tThe sorted elements are:");
       for(i=0;i<size;i++)
       {
             printf("\t%d\t",arr[i]);
       }
       printf("\n");          	
}

void main()
{
	int arr[50],size,i;
	printf("\n\tEnter the number of elements:");
	scanf("%d",&size);
	printf("\n\tThe elements are:");
	for(i=0;i<size;i++)
	{
	   scanf("%d",&arr[i]);
	}
	printf("\n\tThe Unsorted elements are:");
	for(i=0;i<size;i++)
	{
	   printf("\t%d\t",arr[i]);
	}
	insertionsort(arr,size);
}	
	             
       
