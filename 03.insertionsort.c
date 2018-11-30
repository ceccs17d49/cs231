// Sreelal S
//  S3D
// 49
#include<stdio.h>
int main()
{
	int data[100],n,temp,i,j;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=data[i];
		j=i-1;
		while(temp<data[j]&&j>=0)
		{
			data[j+1]=data[j];
			--j;
		}
		data[j+1]=temp;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d\n",data[i]);
    return 0;
}

/*
output
[?1h=$ ./03_insertion_sort 
[?1l>Enter size of the array : 5
Enter array
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
