#include<stdio.h>

int swap(int arr[10000],int i,int j)
{
	int t;
	t=arr[i];
	arr[i]=arr[j];
	arr[j]=t;
}
int heapify(int tree[10000],int n,int i)
{
	if(i>=n)
	{
	return ;
	}
	int c1,c2,max;
	c1=2*i+1;
	c2=2*i+2;
	max=i;
	if(c1<n&&tree[c1]>tree[max])
	 {max=c1;}
	if(c2<n&&tree[c2]>tree[max])
	{max=c2;}
	if(max!=i)
	{
		swap(tree,max,i);
		heapify(tree,n,max);
	}
}

int build_heap(int tree[10000],int n)
{
	int last_node=n-1;
	int parent=(last_node-1)/2;
	int i;
	for(i=parent;i>=0;i--)
	{
		heapify(tree,n,i);
	}
}

int heap_sort(int tree[10000],int n)
{
	build_heap(tree,n);
	int i;
	for(i=n-1;i>=0;i--)
	{
		swap(tree,i,0);
		heapify(tree,i,0);
	}
}

int main()
{

	int i,tree[10000],n;
	scanf("%d",&n);
	scanf("%d",&tree[0]);
	for(i=1;i<n;i++)
	{
		scanf(" %d",&tree[i]);
	}	
	heap_sort(tree,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",tree[i]);
	}
	return 0;
}
