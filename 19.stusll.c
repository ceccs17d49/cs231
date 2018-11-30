// Sreelal S
// S3D
// 49
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
	
void push();
void pop();
void display();

int stack[SIZE],choice,top = -1;
	
void main()
{
	//top=NULL;
	while(1)
	{
		printf("Enter the choice:");
		printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			break;
			default:printf("Wrong choice\n");	
			break;
		}
	}
}
void push()
{
	int a;
	printf("Enter the element:");
	scanf("%d",&a);
	if(top==SIZE-1)
	{
		printf("Stack is full");
	}
	else
	{
		top++;
		stack[top]=a;
		printf("Insertion success\n");
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Deleted\t %d\n",stack[top]);
		top--;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\t%d\t\n",stack[i]);
		}
	}
}

/*
output
[?1h=$ ./19_stack_using_linked_list 
[?1l>
	STACK USING LINKED LIST
1. Push
2. Pop
3. Print
4. Exit
Enter your choice : 1

Enter new data : 1

	STACK USING LINKED LIST
1. Push
2. Pop
3. Print
4. Exit
Enter your choice : 1

Enter new data : 2

	STACK USING LINKED LIST
1. Push
2. Pop
3. Print
4. Exit
Enter your choice : 1

Enter new data : 3

	STACK USING LINKED LIST
1. Push
2. Pop
3. Print
4. Exit
Enter your choice : 3


Linked List
TOP->3
2
1


	STACK USING LINKED LIST
1. Push
2. Pop
3. Print
4. Exit
Enter your choice : 2


	STACK USING LINKED LIST
1. Push
2. Pop
3. Print
4. Exit
Enter your choice : 3


Linked List
TOP->2
1


	STACK USING LINKED LIST
1. Push
2. Pop
3. Print
4. Exit
Enter your choice : 4
*/
	
