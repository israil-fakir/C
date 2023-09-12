#include <stdio.h>

int main()
{
   int arr1[100],i,size,po,in;
       printf("Input the size of array : ");
       scanf("%d", &size);
       printf("Input %d elements in the array:\n",size);
       for(i=0;i<size;i++)
        {
	      printf("element -%d : ",i);
	      scanf("%d",&arr1[i]);
	    }


   printf("Input insert value: ");
   scanf("%d",&in);
   printf("Input the Position:");
   scanf("%d",&po);
   printf("The current array :");
   for(i=0;i<size;i++)
      printf("% 5d",arr1[i]);
   for(i=size;i>=po;i--)
      arr1[i]= arr1[i-1];
      arr1[po-1]=in;
      printf("\n\nAfter Insert the element the new list is :");
   for(i=0;i<=size;i++)
      printf("% 5d",arr1[i]);
	  printf("\n\n");
	  return 0;
}
