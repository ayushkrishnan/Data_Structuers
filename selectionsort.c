#include<stdio.h>
void main()
{ 
  int b,i,j,arr[56],temp,count=0;
  printf("Enter the size of the array:");
  scanf("%d",&b);
  printf("Enter the elements:");
  for(i=0;i<b;i++)    
    {
      count=count+1;
      scanf("%d",&arr[i]);
      count=count+1;
    } count++;
  for(i=0;i<b;i++)  
  {
  count=count+1;
      for(j=i+1;j<b;j++) 
      {
      count=count+1;
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                count++;
            }
      count=count+1;        
      }count++;
  count=count+1;    
  }count++;
printf("The sorted array is:");
 for(i=0;i<b;i++)  
   {
   count=count+1;
   printf("\t%d",arr[i]);
   }  count++ ;
 printf("\nThe time complexity of the program is %d",count);
 printf("\nThe space complexity of the program is %d",(b*4)+20);                
}    
    
