#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int numbers[3] = {1, 2, 3, 4, 5};
    int *ptr = numbers;
    int i=0;

    while (i<5)
    {
        printf("%d ", *(ptr + i));
        i++;
    }
    
    //for (int i = 0; i < 5; i++) {
        //printf("%d ", *(ptr + i));
   // }
    return 0;
}
