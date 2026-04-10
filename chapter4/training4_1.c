#include<stdio.h>

int main(){
    size_t sf;
    float f = 0.5f;
    printf("%1.1f\n", f);
    sf = sizeof f;
    printf("size of float = %d バイト", sf);
    return 0;
}