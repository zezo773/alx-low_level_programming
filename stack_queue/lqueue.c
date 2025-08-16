#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} node;
node *front, *back;



void insert(); // Function used to insert the element into the queue
void delet(); // Function used to delete the elememt from the queue
void display(); // Function used to display all the elements in the queue according to FIFO rule
int main()
{
printf("Welcome to DataFlair tutorials!\n\n");
int choice;
printf ("LINKED LIST IMPLEMENTATION OF QUEUES\n\n");
do
{
printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delet();
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

void insert()
{
	node *temp = malloc(sizeof(node));
	printf("Put your data: ");
	scanf("%d", &temp->data);
	temp->next = NULL;
	if (!back)
		front = back = temp;
	else
	{
		back->next = temp;
		back = temp;
	}
}
void delet()
{
	node *ptr = front;
	if (!front)
		printf("Underflow\n");
	printf("%d\n", front->data);
	front = front->next;
	free(ptr);
}
void display()
{
	node *ptr = front;
	if (!front)
		printf("Underflow\n");
	printf("The Data:\n");
	while (ptr)
	{
		printf("%d    ", ptr->data);
		ptr = ptr->next;
	}
}
