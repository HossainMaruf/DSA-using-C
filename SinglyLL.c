#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} *HEAD = NULL, *BACK = NULL;

// for creating the new SLL node
struct Node* createNodeSLL(int data) {
  struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void insertSLL(struct Node* sll, int data) {
  struct Node* newNode = createNodeSLL(data);
  if(sll == NULL) { 
    // first node
    HEAD = newNode; 
    BACK = newNode;
  }
  else {
    // not the first node
    BACK->next = newNode; // create link between old and new
    BACK = newNode; // update last node
  }
}

void displaySLL(struct Node* head) {
  struct Node* temp = head;
  while(temp) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

// Reverse a linked list
void printReverseSLL(struct Node *head) {
  if(head == NULL) return;
  printReverseSLL(head->next);
  printf("%d ", head->data);
}


int main() {

  insertSLL(HEAD, 10);
  insertSLL(HEAD, 40);
  insertSLL(HEAD, 1900);
  insertSLL(HEAD, -10);
  insertSLL(HEAD, 2900);
  displaySLL(HEAD);
  printReverseSLL(HEAD);



  return 0;
}