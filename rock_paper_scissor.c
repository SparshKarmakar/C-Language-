#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getuser_choice();
int getcom_choice();
void winner(int com_choice,int user_choice);
int main() {
    
    printf("ROCK PAPER SCISSOR\n");
    int com_choice= getcom_choice();
    int user_choice = getuser_choice();
    winner(com_choice,user_choice);
    switch (user_choice)
    {
    case 1:
        printf("YOU CHOOSE ROCK\n");
        break;
    case 2 :
       printf("YOU CHOOSE PAPER\n");
        break;
     case 3 :
       printf("YOU CHOOSE SCISSOR\n");
        break;
    
    default:
        break;
    }

    switch (com_choice)
    {
    case 1:
        printf("COMPUTER CHOOSE ROCK\n");
        break;
    case 2 :
       printf("COMPUTER CHOOSE PAPER\n");
        break;
     case 3 :
       printf("COMPUTER CHOOSE SCISSOR\n");
        break;
    
    default:
        break;
    }
    return 0;
}
int getcom_choice(){
    srand(time(0));
    
    int randn = (rand()%3)+1;
    return randn ;
    
}
int getuser_choice(){
    int ch ;
    printf("1.ROCK\n");
    printf("2.PAPER\n");
    printf("3.SCISSOR\n");
    printf("ENTER YOUR CHOICES :");
    scanf("%d",&ch) ;

    while(ch<1 ||ch>3){
    printf("1.ROCK\n");
    printf("2.PAPER\n");
    printf("3.SCISSOR\n");
    printf("ENTER YOUR CHOICES :");
    scanf("%d",&ch) ;}
  return ch;
}
void winner(int com_choice,int user_choice){
    if(user_choice == com_choice)
    printf("DRAW\n");
    else if(user_choice==1 && com_choice==3 ||
            user_choice==2 && com_choice==1 ||
            user_choice==3 && com_choice==2)
        printf("YOU WIN\n");
   
    else
    printf("YOU LOSE\n");
}