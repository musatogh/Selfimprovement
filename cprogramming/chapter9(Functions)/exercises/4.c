#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);


int main(void)
{
    srand(time(NULL));
    bool outcome;
    int win_count = 0, loss_count = 0;
    char choice;

    do
    {
        outcome = play_game();
        if(outcome)
        {
            printf("You win!!!\n\n");
            win_count++;
        }
        else
        {
            printf("You lose. ;-(\n\n");
            loss_count++;
        }

        printf("Would you like to play again? (Y/N): ");
        scanf(" %c", &choice);

    } while(toupper(choice) == 'Y');

    printf("Wins: %d\n", win_count);
    printf("Losses: %d\n", loss_count);

    return 0;
}


int roll_dice(void)
{
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}


bool play_game(void)
{
    int roll = roll_dice();
    int point = roll;

    printf("You rolled a %d\n", roll);

    if(roll == 7 || roll == 11)
    {
        return true;
    }
    else if(roll <= 3 || roll == 12)
    {
        return false;
    }
    else
    {
        printf("Point is %d\n", point);
    }

    for(;;)
    {
        roll = roll_dice();

        printf("You rolled a %d\n", roll);

        if(roll == point)
        {
            return true;
        }
        else if(roll == 7)
        {
            return false;
        }
    }

}