#include<stdio.h>
int binary_search(int *arr,int n,int se)
{
  int low=0,high=n-1;
  while (low<high)
  {
   int mid=(low+high)/2;
   if (se==arr[mid]) 
   {
      return mid;
   }
   else if (se>arr[mid])
   {
      low=mid+1;
   }
   else
   {
      high=mid-1;
   }
  }
}
int main()
{
  int n,i;
  scanf("%d",&n);
  int arr[n];
  for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int se;
  scanf("%d",&se);
  int res=binary_search(arr,n,se);
  if(res==-1)
  {
    printf("Element not found");
  }
  else
  {
    printf("Element found in index no:%d",res);
  }
}