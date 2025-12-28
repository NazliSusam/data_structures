#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int x) {
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = x;
	newnode->next = NULL;
	if (front == NULL) {
		front = rear = newnode;
	}
	else {
		rear->next = newnode;
		rear = newnode;
		rear->next = NULL;
	}
}

void dequeue() {
	struct node* temp;
	temp = front;

	if (front == NULL)
		printf("queue is empty\n");
	else {
		printf("deleted element is : %d\n", temp->data);
		front = front->next;
		free(temp);
	}
}

void peek() {
	if (front == NULL)
		printf("queue is empty\n");
	else
		printf("front element is %d\n", front->data);
}

void display() {
	struct node* temp;
	temp = front;

	if (front == NULL)
		printf("queue is empty\n");
	else {
		while (temp != NULL) {
			printf("%d\n", temp->data);
			temp = temp->next;
		}
	}
}

int main(void) {
	enqueue(20);
	enqueue(55);
	enqueue(12);
	enqueue(4);
	enqueue(39);
	display();
	peek();
	dequeue();
	display();
	enqueue(8);
	display();
	peek();

	return 0;
}
