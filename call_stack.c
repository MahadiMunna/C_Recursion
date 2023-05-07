#include <stdio.h>

void world(){
    printf("World\n");
}

void hello(){
    printf("Hello ");
    world();
}

int main(){
    hello();
    printf("Main Function");
    return 0;
}