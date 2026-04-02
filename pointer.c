#include <stdio.h>

int main() {
    int a = 10;    
    int *p;
    p = &a;

    printf("Value: %d\n", a);
    printf("Address: %x\n", p); 
    printf("Value via pointer: %d\n", *p);
    printf("%d",&a);

    return 0;
}
