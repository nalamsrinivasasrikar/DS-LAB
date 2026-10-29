#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = ch;
}
char pop() {
    if (top == -1) {
        return '\0';
    }
    return stack[top--];
}
int main() {
    char str[MAX];
    int i, len;
    char ch;
    int flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        push(str[i]);
    }
    for (i = 0; i < len; i++) {
        ch = pop();
        if (str[i] != ch) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("%s is a palindrome", str);
    else
        printf("%s is not a palindrome", str);
    return 0;
}