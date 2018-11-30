// Sreelal S
// S3D
// 49
#include <stdio.h>

int sequentialSearch(int array[], int size, int element) {
	int i;

	for (i=0; i<size; i++) {
		if (array[i] == element) {
			return (i+1);
		}
	}
	return (0);
}
int main() {
	int i=0, found=0, array[100], size, element;

	printf("Enter number of elements : ");
	scanf("%d", &size);

	printf("Enter elements\n");
	for (i=0; i<size; i++) {
		scanf("%d", &array[i]);
	}

	printf("Enter element to search : ");
	scanf("%d", &element);

	found = sequentialSearch(array, size, element);

	if (found) {
		printf("Element found at position %d\n", found);
	} else {
		printf("Element not found\n");
	}
}

/*
Output
[?1h=$ ./01_sequential_search 
[?1l>Enter number of elements : 5
Enter elements
2
8
1
6
3
Enter element to search : 6
Element found at position 4
*/
