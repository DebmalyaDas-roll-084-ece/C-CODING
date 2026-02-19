#include <stdio.h>

int main() {
    int a[] = {2, 3, 1, 8};
    int n = 4;
    
    for (int i = 0; i < n; i++) {
        printf("pairs %d:\n", a[i]);
        for (int j = i + 1; j < n; j++) {
            printf("(%d, %d)\n", a[i], a[j]);
            for (int k = j + 1; k < n; k++) { 
                printf("(%d, %d, %d)\n", a[i], a[j], a[k]);
            }
        }
        printf("\n");
    }
    return 0;
}
