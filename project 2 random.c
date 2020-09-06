#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you,char comp){
//returns 1 if you win, -1 if you lose and 0 if draw

//condition to draw
//cases
//sg
//sw
//wg


if(you==comp){
    return 0;
    }

    //nondraw


    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }

    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w'&& comp=='s')
        {
        return -1;
    }
    if(you=='g' && comp=='s'){
        return -1;
    }
    else if(you=='s' && comp=='g'){
        return 1;
    }
}

int main()
{

    char you, comp;
    srand(time(0));
    int number=rand()%100+1;
    if(number<33){
        comp='s';
    }
    else if(number>33 && number<66)
    {
        comp='w';
    }
    else
    {
        comp='g';
    }

    printf("Enter 's' for snake , 'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    int result=snakeWaterGun(you, comp);
    printf("You choose %c and computer choose %c\n",you,comp);
    if(result==0){
        printf("GAME DRAW! \n");
    }
    else if(result==1){
        printf("CONGRATS!YOU WON THE GAME\n");

    }
    else{
        printf("OOPS! YOU LOST THE GAME ,BETTER LUCK NEXT TIME\n");
    }

    return 0;
}

