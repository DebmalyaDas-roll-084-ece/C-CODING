#include <stdio.h>

int a[10];
int top = -1;

void push(int val) {
    if (top < 10) { 
               top++;
        a[top] = val;
        printf("Pushed: %d\n", a[top]);
    ;
    } else {
        printf("Stack Overflow\n");
    }
}

void pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped: %d\n", a[top]);
        top--; 
    }
}

int main() {
    int n;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        push(n);
    }

    printf("\nThe elements in the stack (top to bottom) are: ");
    for(int i=9;i>=0;i--){
        printf("%d\t",a[i]);
    }
    

    return 0;
}
