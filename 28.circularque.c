// Sreelal S
// S3D
// 49
#include <stdio.h>
#define size 10
int queue[size], front, rear;

void enqueue() {
	int data;
  if ((front == rear+1) || (front==0 && rear == size-1)) {
    printf("Queue overflow\n");
  } else {
		printf("Enter data to be entered : ");
		scanf("%d", &data);
    if (rear == -1) {
      rear = front = 0;
    } else {
      rear = (rear+1)%size;
    }
    queue[rear] = data;
  }
}
void dequeue() {
  if (front == -1) {
    printf("Queue underflow\n");
  } else {
    if (front == rear) {
      front = rear = -1;
    } else {
      front = (front+1)%size;
    }
  }
}
void printQueue() {
  int i=0;
  if (front<=rear) {
    for (i=0; i<front; i++) {
      printf("-:");
    }
    for (;i<=rear; i++) {
      printf("%d:", queue[i]);
    }
    for (;i<size; i++) {
      printf("-:");
    }
  } else {
    for (i=0; i<=rear; i++) {
      printf("%d:", queue[i]);
    }
    for (;i<front; i++) {
      printf("-:");
    }
    for (;i<size;i++) {
      printf("%d:", queue[i]);
    }
  }
}
int main() {
	char choice;
	front = rear = -1;
	do {
		printf("\n\tQueue using array\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice : ");
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
[?1h=$ ./28_circular_queue_using_array 
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
Enter your choice : 4 5

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 3
1:2:3:-:-:-:-:-:-:-:
	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 2

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 3
-:2:3:-:-:-:-:-:-:-:
	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 4
[?1h=$ ./29_queue_using_linked_list 
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

Linked List
HEADER->1->2->3->NULL

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 2

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 3

Linked List
HEADER->2->3->NULL

	Queue using array
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice : 4
*/
  


