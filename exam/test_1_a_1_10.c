#include<stdio.h>

int main()
{
    char str;   /*文字型の変数*/
    int count_tab = 0, count_n = 0, count_else = 0;     /*タブ、改行、それ以外をカウントするための変数*/
  
    while(1)                        /*'q'が入力されるまでループ*/
    {
        printf("文字を入力してください。---");
        str = getchar();            /*文字の入力*/
        if (str == 'q')             /*ｑが入力されたとき終了*/
        {
            break;
        }
        switch (str)
        {
            case '\t':          /*タブが入力されたとき*/
                count_tab++;
                break;
            case '\n':          /*改行が入力されたとき*/
                count_n++;
                break;
            default:            /*それ以外が入力されたとき*/
                count_else++;
                break;
        }
    }
    printf("タブ：%d\n", count_tab);    /*ｑの入力後の出力*/
    printf("改行：%d\n", count_n);
    printf("@   ：%d\n", count_else);
    
    return 0;
}