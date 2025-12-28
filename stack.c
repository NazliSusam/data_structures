#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* link;
}node;

node* top = NULL;

void push(int x) {
	node* newnode;
	newnode = (node*)malloc(sizeof(node));
	newnode->data = x;
	newnode->link = top;
	top = newnode;
}

void pop() {
	node* temp;
	temp = top;

	if (top == NULL)
		printf("stack is empty\n");
	else {
		printf("popped element is %d\n", temp->data);
		top = top->link;
		free(temp);
	}
}

void peek() {
	if (top == NULL)
		printf("stack is empty\n");
	else
		printf("top element is %d\n", top->data);
}

void display() {
	node* temp;
	temp = top;

	if (top == NULL)
		printf("stack is empty\n");
	else {
		while (temp != NULL) {
			printf("%d\n", temp->data);
			temp = temp->link;
		}
	}
}

int main(void) {
	push(8);
	push(94);
	push(3);
	push(11);
	push(20);
	push(19);
	display();
	pop();
	peek();
	display();
	push(77);
	display();

	return 0;
}
