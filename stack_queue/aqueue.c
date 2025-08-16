#include <stdio.h>
#include <stdlib.h>

#define LIMIT 4

int queue[LIMIT], front, back;

int choice; // To choose either of the 3 stack operations
void insert(); // Function used to insert the element into the queue
void delet(); // Function used to delete the elememt from the queue
void display(); // Function used to display all the elements in the queue according to FIFO rule
int main()
{
printf("Welcome to DataFlair tutorials!\n\n");
printf ("ARRAY IMPLEMENTATION OF QUEUES\n\n");
front = back = -1; // Initialzing front and rear to -1 indicates that it is empty
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
	int data;
	if (back == LIMIT - 1)
		printf("Queue Overflow\n");
	else
	{
		if (front == -1)
			front = 0;
		printf("put the data: ");
		scanf("%d", &data);
		back++;
		queue[back] = data;
	}
}
void delet()
{
	if (front == -1 || front > back)
		printf("Queue Underflow\n");
	printf("%d\n", queue[front]);
	front++;
}
void display()
{
	printf("the element: \n");
	for (int i = front; i <= back; i++)
		printf("%d\n", queue[i]);
}
