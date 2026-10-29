#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head = NULL;
void insertAtBeginning(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
        return;
    }
    struct Node *last = head->prev;
    newNode->next = head;
    newNode->prev = last;
    head->prev = newNode;
    last->next = newNode;
    head = newNode;
}
void display() {
    if (head == NULL) {
        printf("List is empty");
        return;
    }
    struct Node *temp = head;
    printf("List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("back to head");
}
int main() {
    int value;
    printf("enter the value");
    scanf("%d",&value);
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);
    insertAtBeginning(value);
    display();
    return 0;
}
