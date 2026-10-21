#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int menu;
    int answer;
    int guess;
    int count;

    srand((unsigned int)time(NULL));

    while (1) {

        printf("\n");
        printf("================================\n");
        printf("       数字当てゲーム\n");
        printf("   NUMBER GUESSING GAME\n");
        printf("================================\n");
        printf("\n");

        printf("1. ゲームを始める\n");
        printf("2. 遊び方を見る\n");
        printf("3. ゲームを終了する\n");
        printf("\n");

        printf("番号を入力してください：");
        scanf("%d", &menu);

        switch (menu) {

            case 1:

                answer = rand() % 100 + 1;
                count = 0;

                printf("\n");
                printf("================================\n");
                printf("       ゲームスタート！\n");
                printf("================================\n");
                printf("1~100の数字を当ててください。\n");
                printf("\n");

                while (1) {

                    printf("数字を入力してください：");
                    scanf("%d", &guess);

                    while (guess < 1 || guess > 100) {

                        printf("1から100までの数字を入力してください。\n");
                        printf("正しい番号を入力してください：");
                        scanf("%d", &guess);
                    }

                    count++;

                    if (guess == answer) {

                        printf("\n");
                        printf("正解です！\n");
                        printf("おめでとうございます！\n");
                        printf("挑戦回数：%d回\n", count);

                        break;

                    } else if (guess < answer) {

                        printf("もっと大きい数字です！\n");

                    } else {

                        printf("もっと小さい数字です！\n");
                    }
                }
                break;
            case 2:
                printf("\n");
                printf("================================\n");
                printf("          遊び方\n");
                printf("================================\n");
                printf("\n");
                printf("コンピューターが1~100の数字を決めます。\n");
                printf("その数字を当ててください。\n");
                printf("\n");
                printf("数字が小さい場合：もっと大きい数字です！\n");
                printf("数字が大きい場合：もっと小さい数字です！\n");
                printf("正解するとゲームクリアです！\n");
                printf("\n");
                break;
            case 3:
                printf("\n");
                printf("ゲームを終了します。\n");
                printf("ありがとうございました！\n");
                return 0;
            default:
                printf("\n");
                printf("無効な番号です。\n");
                printf("1~3を入力してください。\n");

                break;
        }
    }

    return 0;
}