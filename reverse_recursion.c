#include <stdio.h>

int fun(int i){
    if(i==6){
    return i;
    }
    fun(i+1);
    printf("%d ",i);
    
}

int main(){
    fun(1);
    return 0;
}