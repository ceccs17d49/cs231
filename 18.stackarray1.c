// Sreelal S
// S3D
// 49
#include<stdio.h>
#define MAX 5
int top=-1;
int stack_arr[MAX];
void push()
{
	int pushed_item;
	if(top==(MAX-1))
		printf("Stack Overflow\n");
	else
	{
		printf("Enter the item to be pushed in stack : ");
		scanf("%d",&pushed_item);
		top=top+1;
		stack_arr[top]=pushed_item;
	}
}
void pop()
{
	if(top==-1)
		printf("Stack Underflow\n");
	else
	{
		printf("Popped element is:%d\n",stack_arr[top]);
		top=top-1;
	}
}
void display()
{
	int i;
	if(top==-1)
		printf("Stack is empty\n");
	else
	{
		printf("Stack elements :\n");
		for(i=top;i>=0;i--)
			printf("%d\n",stack_arr[i]);
	}
}
int main()
{
	int choice;
	do{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1 :
			push();
			break;
		 case 2:
			pop();
			break;
		 case 3:
			display();
			break;
		 case 4:
                        break;
		 default:
			printf("Wrong choice\n");
		}}while(choice!=4);
}

/*
output
[C[C[K./18_stack_using_array 
[?1l>

	Stack Using array
1. Push
2. Pop
3. Display
4. Exit
Enter your choice : 1
Enter data to be pushed : 1


	Stack Using array
1. Push
2. Pop
3. Display
4. Exit
Enter your choice : 1
Enter data to be pushed : 2


	Stack Using array
1. Push
2. Pop
3. Display
4. Exit
Enter your choice : 1
Enter data to be pushed : 3


	Stack Using array
1. Push
2. Pop
3. Display
4. Exit
Enter your choice : 3


Stack contents
3
2
1



	Stack Using array
1. Push
2. Pop
3. Display
4. Exit
Enter your choice : 2
Popped element is 3


	Stack Using array
1. Push
2. Pop
3. Display
4. Exit
Enter your choice : 3


Stack contents
2
1



	Stack Using array
1. Push
2. Pop
3. Display
4. Exit
Enter your choice : 4
*/


