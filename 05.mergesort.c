// Sreelal S
// S3D
// 49
#include<stdio.h>
int main()
{
	int ar[30],temp[30],i,j,k,n,size,l1,l2,h1,h2;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter elements %d:",i+1);
		scanf("%d",&ar[i]);
	}
	printf("unsorted list is:");
	for(i=0;i<n;i++)
		printf("%d",ar[i]); 
	for(size=1;size<n;size=size*2)
	{
		l1=0;
		k=0;
		while(l1+size<n)
		{
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if(h2>=n)
				h2=n-1;
			i=l1;
			j=l2;
			while(i<=h1&&j<=h2)
			{
				if(ar[i]<=ar[j])
					temp[k++]=ar[i++];
				else
					temp[k++]=ar[j++];
			}	
			while(i<=h1)
				temp[k++]=ar[i++];
			while(j<=h2)
				temp[k++]=ar[j++];

			l1=h2+1;
		}
 		for(i=l1;k<n;i++)
			temp[k++]=ar[i];
		for(i=0;i<n;i++)
			ar[i]=temp[i];
		printf("\nsize=%d\nelements are:",size);
		for(i=0;i<n;i++)
			printf("%d",ar[i]);
	}
	printf("sorted list is \n");
	for(i=0;i<n;i++)
	{
		printf("%d",ar[i]);
		printf("\n");
	}
	return 0;
}













