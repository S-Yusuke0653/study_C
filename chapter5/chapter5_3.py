def print_result(total, count, high_score, low_score): #結果を表示する関数
    if count == 0:                                     #-1が入力された場合の処理
        return
    else:
        print(f"受験者数:{count}人")
        print(f"平均点：{total / count:.1f}")
        print(f"最高点：{high_score}")
        print(f"最低点：{low_score}")

def judge_high_and_low(score,high_score,low_score):    #最高点、最低点を更新する関数
    if score >= high_score:
        high_score = score
    if score <= low_score:
        low_score = score
    return high_score, low_score

def main():
    total = 0
    count = 0
    high_score = 0
    low_score = 100
    print("終了する場合は'-1'を入力してください。")
    while True:
        score = int(input("点数を入力してください："))
        if 0 <= score <= 100:
            total += score
            count += 1
            high_score, low_score = judge_high_and_low(score, high_score, low_score)
        elif score == -1:
            break
        else:
            print("0~100もしくは-1を入力してください。")
    
    print_result(total, count, high_score, low_score)
    
if __name__ == "__main__":
    main()