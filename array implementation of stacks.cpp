#include<stdio.h>
#define MAX 5
int arr[MAX];
int top=-1;
void push(int data)
{
	if(top==MAX-1)
	{
		printf("Stack is overflow:");
		return;
	}
	top=top+1;
	arr[top]=data;
}
int pop()
{
	int value;
	if(top==-1)
	{
		printf("stack is underflow");
		return -1;
	}
	value=arr[top];
	top=top-1;
	return value;
}
int peek()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	return arr[top];
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty");
	}
	for(i=top;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}
	int main(){
		int data;
		push(10);
		push(20);
		push(30);
	    display();
		data=pop();
	printf("popped value is:%d",data);
	data=peek();
	printf("peek value is:%d",data);
	return 0;
}