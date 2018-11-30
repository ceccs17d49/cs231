// Sreelal S
// S3D 
// 49
#include <stdio.h>
void quicksort (int [], int, int);
int main()
{

    int list[50];
    int size, i;
    printf("Enter the number of elements: ");
    scanf("%d", &size); 
    printf("Enter the elements to be sorted:\n");\
    for (i = 0; i < size; i++)
    {
	scanf("%d", &list[i]);
    } 
    quicksort(list, 0, size - 1);
    printf("After applying quick sort\n");
    for (i = 0; i < size; i++)
    {
	printf("%d ", list[i]);
    }
    printf("\n");
    return 0;
}

void quicksort(int list[], int low, int high)
{
	int pivot, i, j, temp;
	if (low < high)
	{
		pivot = low;
		i = low;
		j = high;
		while (i < j) 
		{
			while (list[i] <= list[pivot] && i <= high)
			{
				i++;
			}

            		while (list[j] > list[pivot] && j >= low)

          	  	{
				j--;
		}
		if (i < j)
		{
			temp = list[i];
			list[i] = list[j];
			list[j] = temp;

	        }
	}
	temp = list[j];
	list[j] = list[pivot];
	list[pivot] = temp;
	quicksort(list,low,j-1);
        quicksort(list, j+1,high);

    }
}

/*
output
[?1h=$ ./08_quicksort_recursive 
[?1l>Enter size of the array : 5
Enter array elements
28163    
81 
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
