#include<stdio.h>

int main()
{
    for (int n1 = 1; n1 <= 9; n1++) /*n1 = 左*/
    {   
        for (int n2 = 1; n2 <= 9; n2++) /*n2 = 右*/
        {
            if (n1 > n2)        /*重複を省く処理*/
            {
                continue;
            } 
            printf("%d X %d = %d\n", n1, n2, n1 * n2);
        }
        if (n1 != 9)
        {
            printf("------------------\n");
        }
    }

    return 0;

}