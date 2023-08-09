#include <stdio.h>
int main() {
    int numCount;
        printf("Enter the number of elements: ");
    scanf("%d", &numCount);

    if (numCount <= 0) {
        printf("Number of elements should be greater than 0.\n");
        return 1; 
    }
    printf("Enter %d numbers:\n", numCount);
    for (int i = 0; i < numCount; i++) {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    }
    return 0;
}
