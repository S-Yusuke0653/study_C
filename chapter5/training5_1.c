/*sum (1 ~ 100)*/

#include<stdio.h>

int main(){
    int sum_n = 0;
    for (int i = 1; i <= 100; i++){
        sum_n += i;
    }
    printf("%d", sum_n);

    return 0;
}