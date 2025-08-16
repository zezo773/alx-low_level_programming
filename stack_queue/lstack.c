#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} node;
node *top;

void push();
void pop();
void display();

int main()
{
printf("Welcome to DataFlair tutorials!\n\n");
int choice;
printf ("LINKED LIST IMPLEMENTATION USING STACKS\n\n");
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
	int data;
	node *ptr = malloc(sizeof(node));
	if (!ptr)
	{
		printf("Stack Overflow\n");
		return;
	}
	printf("Put your data: ");
	scanf("%d", &data);
	ptr->data = data;

	if (!top)
	{
		ptr->next = NULL;
		top = ptr;
	}
	else
	{
		ptr->next = top;
		top = ptr;
	}
}
void pop()
{
	int data;
	node *ptr = top;
	if (!top)
		printf("Stack Underflow\n");
	else
	{
		printf("%d\n", top->data);
		top = top->next;
		free(ptr);
	}
}
void display()
{
	node *ptr = top;
	if (!top)
		printf("Stack Underflow\n");
	else
	{
		printf("The data:\n");
		while (ptr)
		{
			printf("%d\n", ptr->data);
			ptr = ptr->next;
		}
	}
}
