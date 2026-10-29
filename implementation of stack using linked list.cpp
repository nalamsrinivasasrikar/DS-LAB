#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void peek();
struct node{
	int data;
	struct node*next;
};
struct node *top=NULL;
int main(){
	int choice;
	while(1){
		printf("\n t1.push\n t2.pop\n t3.display\n t4.peek\n t5.exit");
		printf("\n enter your option:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
				case 3:
					display;
					break;
					case 4:
						peek;
						break;
						case 5:
							exit(0);
default:
	    printf("\n invalid option!please try again");
		}
	}
}
void push() {
    struct node *newnode;
    int value;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL) {
        printf("\nStack Overflow");
        return;
    }
    printf("\nEnter the value: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->next = top;
    top = newnode;
    printf("\n%d pushed into stack", value);
}
void pop() {
    struct node *temp;
    if(top == NULL) {
        printf("\nStack Underflow");
        return;
    }
    temp = top;
    printf("\n%d popped from stack", top->data);
    top = top->next;
    free(temp);
}
void display() {
    struct node *temp;
    if(top == NULL) {
        printf("\nStack is empty");
        return;
    }
    temp = top;
    printf("\nStack elements are:\n");
    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
void peek() {
    if(top == NULL) {
        printf("\nStack is empty");
    }
    else {
        printf("\nTop element = %d", top->data);
    }
}
	