// Sreelal S
// S3D
// 49
#include<stdio.h>
int main()
{
	int a[100],n,i,j,pos,swap;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<(n-1);i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
				pos=j;
		}
		if(pos!=i)
		{
			swap=a[i];
			a[i]=a[pos];
			a[pos]=swap;
		}
	}
	printf("sorted list in ascending order:\n");
	for(i=0;i<n;i++)
		printf("%d \n",a[i]);
	return 0;
}

/*
out put
[?1h=$ ./02_selection_sort 
[?1l>Enter number of elements in the array : 5
Enter the array
2
8
1
6
3
Sorted array 
1
2
3
6
8
*/
