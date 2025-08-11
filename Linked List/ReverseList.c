#include <stdio.h>
#include <stdlib.h>

// Node definition
struct Node {
	short data;
	struct Node *next;
} *head = NULL, *last = NULL;

void insertValue(short value) {
	// crate a new node
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->next = NULL;

	if(head == NULL) {
		// this is the first node
		head = newNode;
		last = newNode;
	} else {
		// not the first node
		last->next = newNode;
		last = newNode;
	}
}

void printList() {
	struct Node *temp = head;
	while(temp) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void reverseList() {
	struct Node *prev = head, *current = head->next, *next;
	while(current) {
		next = current->next;
		if(prev == head) {
			prev->next = NULL;	
			last = prev;
		} 
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}


int main(int argc, char **argv) {

	insertValue(10);
	insertValue(14);
	insertValue(93);

	printList();
	reverseList();
	printList();

	insertValue(3);

	printList();
	reverseList();
	printList();
	

	return 0;
}
