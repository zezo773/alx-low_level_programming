#include <stdio.h>
#include <stdlib.h>

#define LIMIT 5

int stack[LIMIT], top, i;

int choice; // To choose either of the 3 stack operations
void push(); // Function used to insert the element into the stack
void pop(); // Function used to delete the element from the stack
void display(); // Function used to display all the elements in the stack according to LIFO rule
int main()
{
printf("Welcome to DataFlair tutorials!\n\n");
printf ("ARRAY IMPLEMENTATION USING STACKS\n\n");
top = -1; // Initializing top to -1 indicates that it is empty
do
{
printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("Sorry, invalid choice!\n");
break;
}
} while(choice!=4);
return 0;
}

void push()
{
	int element;

	if (top == LIMIT -1)
		printf("Stack Overflow\n");
	else
	{
		printf("put your data: ");
		scanf("%d", &element);
		printf("\n");
		top++;
		stack[top] = element;
	}
}
void pop()
{
	int element;
	if (top == -1)
		printf("Stack Underflow\n");
	else
	{
		element = stack[top];
		printf("%d\n", stack[top]);
		top--;
	}
}
void display()
{
	int i;
	if (top == -1)
		printf("Stack Overflow\n");
	else
	{
		for (i = top; i >= 0; i--)
			printf("%d\n", stack[i]);
	}
}
