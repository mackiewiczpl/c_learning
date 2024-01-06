#include <stdio.h>
#include <stdlib.h>

int main(void) { 
    if(printf("%s\n", "Witaj, świecie!") < 0) {
        return EXIT_FAILURE;
    } 
    return EXIT_SUCCESS;
}