#include<stdio.h>
#define min(a,b) a<b?a:b
int fib_search(int *arr,int n,int se)
{
	int index,offset=-1,a,b,c;
	a=0;
	b=1;
	c=a+b;
	// printf("%d %d",a,b);
	while(c>n)
	{
	// printf("%d",c);
	a=b;
	b=c;
	c=a+b;
    }
    while(c>1)
    {
        index=min(offset+a,n-1);
    	if(se==arr[index]) return index;
    	else if(se>arr[index])
    	{
    		// bring all 3 fib values 1 fib down
    		c=b;
    		b=a;
    		a=c-b;
    		// set offset to index
    		offset=index;
		}
		else 
		{
			//bring all 3 fib numbers 2 fib down
		}
	}
// printf("%d %d %d",c,b,a);
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
    int se;
    scanf("%d",&se);
    int res=fib_search(arr,n,se);
    if(res==-1)
    {
    	printf("Element Found");
	}
	else
	{
		printf("Element Not Found");
	}
}
