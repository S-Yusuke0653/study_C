/*while sum(1~100)*/

#include<stdio.h>

int main(){
    int total = 0;
    int i = 1;
    while (i <= 100){
        total += i;
        i++;
    }
    printf("%d", total);

    return 0;
}