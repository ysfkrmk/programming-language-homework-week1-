#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(NULL));

    printf("Press enter to roll the dice");
    getchar();

    int dice1 = roll();
    int dice2 = roll();
    int sum = dice1 + dice2;

    printf("You rolled: %d + %d = %d\n", dice1, dice2, sum);

    if (sum == 7 || sum == 11) {
        printf("Congratulations you win\n");
        return 0;
    } else if (sum == 2 || sum == 3 || sum == 12) {
        printf("You lose you are poor now\n");
        return 0;
    }

    int point = sum;
    printf("Your point is %d\n", point);

    while (1) {
        printf("Press enter to roll the dice");
        getchar();

        dice1 = roll();
        dice2 = roll();
        sum = dice1 + dice2;

        printf("You rolled: %d + %d = %d\n", dice1, dice2, sum);

        if (sum == point) {
            printf("Congratulations you win\n");
            break;
        } else if (sum == 7) {
            printf("You lose you are poor now\n");
            break;
        } else {
            printf("Roll again to get the same point\n");
        }
    }

    return 0;
}
