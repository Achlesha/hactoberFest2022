#include<stdio.h>
#include<stdlib.h>
int main()
{
    int item,arr[10],i,n, high,low,mid,loc=0;
    printf("enter the number of elements\n ");
    scanf("%d",&n);
   for ( i = 0; i < n; i++)
   { 
       printf("enter the element at %d position ",i+1);
       scanf("%d",&arr[i]);
   }
   printf("\n");
   printf("enter the element to be searched\n");
   scanf("%d",&item);
  high=n-1,low=0,mid;
   
   while (low<=high)
   { mid=(high+low)/2;
      if( arr[mid]==item)
      loc=mid+1;
      if(item>arr[mid])
      low=mid+1;
      else
      high=mid-1;
      
   }
   

   
   if(loc==0)
   printf("element not found");
   else
   printf("element found at %d position",loc);
   
   return 0;

   

   
}