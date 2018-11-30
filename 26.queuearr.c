// Sreelal S
// S3D
// 49
#include <stdio.h>

int queue[100], n=100, front=-1, rear=-1;

void enqueue() 
{
	int data;
	if (rear == n-1) 
	{
		printf("Failed: Queue full\n");
	} 
	else 
	{
		printf("Enter data to be entered : ");
		scanf("%d", &data);
		if (front == -1)
		{
			front = rear = 0;
		} 
		else
		{
			rear++;
		}
		queue[rear] = data;
	}
}
void dequeue() {
	if (front == -1) {
		printf("Failed: Empty queue\n");
	} else {
		printf("Deleted element : %d\n", queue[front]);
		if (front == rear) {
			front = rear = -1;
		} else {
			front++;
		}
	}
}
void printQueue() {
	int i=0;
	if (front == -1) {
		printf("Empty Queue\n");
	} else {
		for (i=front; i<=rear; i++) {
			printf("%d\n", queue[i]);
		}
	}
}
int main() {
	char choice;
	front = rear = -1;
	do {
		printf("\n\tQueue using array\n1.Enqueu\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice : ");
		scanf(" %c", &choice);
		switch(choice) {
			case '1':
				enqueue();
				break;
			case '2':
				dequeue();
				break;
			case '3':
				printQueue();
				break;
		}
	} while(choice != '4');
}

/*
output
[?1h=$ ./26_queue_using_array 
[?1l>
	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 1
Enter data to be entered : 1

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 1
Enter data to be entered : 2

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 1
Enter data to be entered : 3

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 3
1
2
3

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 2
Deleted element : 1

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 3
2
3

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 4
*/
