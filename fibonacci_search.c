#include<stdio.h>
#define min(a,b) a<b?a:b
int fib_search(int *arr,int n,int se)
{
  int a,b,c,of=-1,ind;
  a=0;
  b=1;
  c=a+b;
  while(c<n)
  {
    a=b;
    b=c;
    c=a+b;
  }
  while (c>1)
  {
    ind=min(of+a,n-1);
    if(se==arr[ind]) 
    {
      return ind;
    }
    else if(se>arr[ind]) 
    {
      c=b;
      b=a;
      a=c-b;
      of=ind;
    }
    else
    {
      c=a;
      b=b-a;
      a=c-b;
    }
  }
  if (b && arr[of+1]==se)
  {
    return of+1;
  }
  return -1;
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
  int res=fib_search(arr,n,se);
  if(res==-1)
  {
    printf("Element not found");
  }
  else
  {
    printf("Element found in index no:%d",res);
  }
}