
//using pointer to change the value of a variable

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int a = 10;
    int *p = &a;
//   your code goes here
    *p=20;
    printf("%d", a);
    return 0;
}
