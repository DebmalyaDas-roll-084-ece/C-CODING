#include <stdio.h>

int main() {
    int items[10];
    int top = -1;
    int n, i = 0;

    printf("Enter 10 elements:\n");
    
    
    while (i < 10) {
        scanf("%d", &n);
        
        if (top < 9) {
            top++;
            items[top] = n;
            printf("Pushed %d\n", n);
        } else {
            printf("Stack Overflow\n");
        }
        i++;
    }

    printf("\nStack elements: ");
    
    int j = top;
    while (j >= 0) {
        printf("%d ", items[j]);
        j--;
    }

    return 0;
}
