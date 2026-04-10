/*about switch*/

#include<stdio.h>

int main(){
    int n;

    printf("1から5までの整数を入力してください---");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("aaa");
            break;
        case 2:
            printf("bbb");
            break;
        default:
            break;

    }
    return 0;
}