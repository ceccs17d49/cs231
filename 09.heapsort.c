// Sreelal S
// S3D
// 49
#include<stdio.h>
int main()
{
	int heap[10],n,i,j,c,root,temp;
	printf("\n enter the limit");
	scanf("%d",&n);
	printf("\n enter elements");
	for(i=0;i<n;i++)
		scanf("%d",&heap[i]);
	for(i=1;i<n;i++)
	{
		c=i;
		do
		{
			root=(c-1)/2;
			if(heap[root]<heap[c])
			{
				temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			c=root;
		}
		while(c!=0);
	}
	printf("heap array:");
	for(j=n-1;j>0;j--)
	{
		temp=heap[0];
		heap[0]=heap[j];
		heap[j]=temp;
		root=0;
		do
		{
			c=2*root+1;
			if((heap[c]<heap[c+1])&&c<j-1)
				c++;
			if(heap[root]<heap[c]&&c<j)
			{
				temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			root=c;
		}
		while(c<j);
	}
	printf("sorted array  is:");
	for(i=0;i<n;i++)
		printf("\t %d:",heap[i]);
}

/*
output
[?1h=$ ./a[K[K[K./08[K9_heap_sort 
[?1l>Enter size of the array : 5
Enter array elements
2
8
1
6
3
Sorted Array
1
2
3
6
8
*/
	
