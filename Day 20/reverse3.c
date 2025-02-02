

#include <stdio.h>

int main(void) {
    int i, n;

    printf("How many numbers do you want to reverse? ");
    scanf("%d", &n);

    int a[n];

    for (int *p = a; p < a + n; p++) scanf("%d", p);
    
    printf("In reverse order: ");

    for (int *p = a + n - 1; p >= a; p--) printf("%d ", *p);
    



    printf("\n");


}