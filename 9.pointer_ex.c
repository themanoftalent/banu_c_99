//pointer with for loop

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int *ptr = numbers;
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
