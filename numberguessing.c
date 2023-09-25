/* Ezy number guessing game
* 25.09.2023
* Maximilian
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    //Define a random number
    srand(time(NULL));
    int r = rand() % 100;
    int counter = 0;
    int guess;

    printf("Welcome to the guessing game! First, you have to define the number range\n");

    int upperLimit;
    printf("Please enter the upper limit:\n");
    scanf("%d", &upperLimit);

    int lowerLimit;
    printf("Please enter the lower limit:\n");
    scanf("%d" , &lowerLimit);

    int range = upperLimit - lowerLimit + 1;

    int rn = rand();
    rn = lowerLimit + rn % range;

    printf("Now, you can start guessing! The range is between %d and %d!\n" , lowerLimit, upperLimit);


    //checking if the guessed number is correct
    while(1){
        scanf("%d", &guess);
        counter++;
        if (guess == rn){
            printf("Congratulations! You guessed the number in %d tries!\n", counter);
            break;
        }
        else if (guess > rn){
            printf("Your guess is too high. Try again:\n");
        }
        else if (guess < rn){
            printf("Your guess is too low. Try again:\n");
        }

    }
}
