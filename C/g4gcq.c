// C or C++ program for insertion and 
// deletion in Circular Queue 
#include<stdio.h> 

#define size 3

int arr[size];

int front = -1;
int rear = -1;

void enQueue(int value) { 
	if ((front == 0 && rear == size-1) || 
			(rear == (front-1)%(size-1))) 
	{ 
		printf("\nQueue is Full"); 
		return; 
	} 

	else if (front == -1) /* Insert First Element */
	{ 
		front = rear = 0; 
		arr[rear] = value; 
	} 

	else if (rear == size-1 && front != 0) 
	{ 
		rear = 0; 
		arr[rear] = value; 
	} 

	else
	{ 
		rear++; 
		arr[rear] = value; 
	} 
} 

// Function to delete element from Circular Queue 
int deQueue() { 
	if (front == -1) 
	{ 
		printf("\nQueue is Empty"); 
		return -1; 
	} 

	int data = arr[front]; 
	arr[front] = -1; 
	if (front == rear) 
	{ 
		front = -1; 
		rear = -1; 
	} 
	else if (front == size-1) 
		front = 0; 
	else
		front++; 

	return data; 
} 

// Function displaying the elements 
// of Circular Queue 
void displayQueue() { 
	if (front == -1) 
	{ 
		printf("\nQueue is Empty"); 
		return; 
	} 
	printf("\nElements in Circular Queue are: "); 
	if (rear >= front) 
	{ 
		for (int i = front; i <= rear; i++) 
			printf("%d ",arr[i]); 
	} 
	else
	{ 
		for (int i = front; i < size; i++) 
			printf("%d ", arr[i]); 

		for (int i = 0; i <= rear; i++) 
			printf("%d ", arr[i]); 
	} 
} 

int main() 
{ 
	int ch;
	int val;

	while(1) {
		printf("1. enq\n2. deq\n3. display\n4. viewQueue\nenter choice: ");
		scanf("%d", &ch);

		switch(ch) {
			case 1: printf("enter value: ");
					scanf("%d", &val);
					enQueue(val);
				break;

			case 2: printf("element removed: %d\n", deQueue());
				break;

			case 3: displayQueue();
				break;
		}
	}
} 
