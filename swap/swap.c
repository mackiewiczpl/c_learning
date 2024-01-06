#include <stdio.h>

void swap(int*, int*);

int main(int) {

    int a = 5;
    int b = 10;

    swap(&a, &b);

    printf("Values after swap outside function: a = %i b = %i\n", a, b);
    return 0;
}

void swap(int* pa, int* pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
    printf("Values after swap inside function swap: a = %i b = %i\n", *pa, *pb);
}

