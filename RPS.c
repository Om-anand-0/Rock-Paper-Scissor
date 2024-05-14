#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int rps(char player, char comp){
    if (player == comp)
    {
        return 0;
    }
    if(player=='r' && comp=='p'){
        return -1;
    }
    else if(player=='r' && comp=='s'){
        return 1;
    }
    if(player=='p' && comp=='s'){
        return -1;
    }
    else if(player=='p' && comp=='r'){
        return 1;
    }
    if(player=='s' && comp=='r'){
        return -1;
    }
    else if(player=='s' && comp=='p'){
        return 1;
    }
    
}

int main()
{
    char player,comp;
    srand(time(0));
    int number = rand()%100;

    if(number<33){
        comp = 'r';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='s';
    }
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissor\n");
    scanf("%c", &player);
    printf("You chose %c and computer chose %c. \n", player, comp);
    int result = rps(player, comp);
    if(result == 0){
        printf("Game draw!\n");
    }
    else if(result == 1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }

    return 0;
}