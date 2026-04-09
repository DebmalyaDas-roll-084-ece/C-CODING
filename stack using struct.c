#include <stdio.h>

struct Stack {
    int items[10];
    int top;
};


struct Stack push(struct Stack s, int val) {
    if (s.top < 9) {
        s.top++;
        s.items[s.top] = val;
        printf("Pushed %d\n", val);
    } else {
        printf("Stack Overflow\n");
    }
    return s; 
}

int main() {
    struct Stack myStack;
    myStack.top = -1; 
    int n;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        
        myStack = push(myStack, n);
    }

    printf("\nStack elements: ");
    for (int i = myStack.top; i >= 0; i--) {
        printf("%d ", myStack.items[i]);
    }

    return 0;
}
