#include<stdio.h>

int main()
{
    int score = 0, count = 0;
    float avg, total = 0;
    int high_score = 0;
    int low_score = 100;
    
    printf("点数を入力してください。終了する際は(-1)を入力してください。");
    while (score != -1) 
    {
        printf("点数:");
        scanf("%d", &score);
        if (score >= 0 && score <= 100){   /*点数が0~100のときのみ加算*/
            total += score;
            count += 1;
            if (score >= high_score)    /*最高点の更新*/
                high_score = score;
            if (score <= low_score)     /*最低点の更新*/
                low_score = score;
        } else if (score == -1){
            if (count == 0)             /*受験者数が０のとき直ちに終了*/
                break;
            continue;
        } else {                        /*入力が範囲外のとき*/
            printf("0~100または-1を入力してください\n");
        }
    }
    if (count == 0){                    /*これ多分無駄*/
        return 0;
    } else{                             /*受講者数が０より大きいとき結果を表示*/
        avg = total / count;
        printf("平均点：%2.1f\n", avg);
        printf("受験者数：%d人\n", count);
        printf("最高点：%d\n", high_score);
        printf("最低点：%d\n", low_score);
    }
    return 0;
}