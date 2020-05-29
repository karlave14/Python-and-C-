#include <stdio.h>
#include <stdlib.h>
//The following functions are needed for the good functioning of the game
int cp_Plays();
void scoreboards(int wins, int loses);

int main()
{
    int cp_choose, wins=0, loses=0, turns=0, user_selection, wrong;

    printf("Let's play rock paper scissors!\nWhat will you choose first? Rock, paper, scissors?\n\n");

    do
    {
        printf("Press 0 for scissors\n");
    	printf("Press 1 for paper\n");
   	 printf("press 2 for rock\n");
    	scanf("%d", &user_selection);

        switch(user_selection)
        {
	case 0:
	{
	    cp_choose = cp_Plays();
	    if(cp_choose==0)
	    {
		printf("\nI got scissors too, it's a tie.\n\n");
		break;
	    }
	    if(cp_choose==1)
	    {
		printf("\nYour scissors beat my paper, you win!.\n\n");
		wins++;
		scoreboards(wins, loses);
		break;
	    }
	    if(cp_choose==2)
	    {
		printf("\nMy rock beats your scissors, you lose!\n\n");
		loses++;
		scoreboards(wins, loses);
		break;
	    }
	}
	case 1:
	{
	    cp_choose=cp_Plays();
	    if(cp_choose==0)
	    {
		printf("\nMy scissors beat your paper, you lose!\n\n");
		loses++;
		scoreboards(wins, loses);
		break;
	    }
	    if(cp_choose==1)
	    {
		printf("\nI got paper too, it's a tie!\n\n");
		break;
	    }
	    if(cp_choose==2)
	    {
		printf("\n Your paper beats my rock, you win!\n\n");
		wins++;
		scoreboards(wins, loses);
		break;
	    }
	case 2:
	{
	    cp_choose=cp_Plays();
	    if(cp_choose==0)
	    {
		printf("Your rock beats my scissors, you win!\n\n");
		wins++;
		scoreboards(wins, loses);
		break;
	    }
	    if(cp_choose==1)
	    {
		printf("My paper beats your rock, you lose!\n\n");
		loses++;
		scoreboards(wins, loses);
		break;
	    }
	    if(cp_choose==2)
	    {
		printf("I got rock too, it's a tie.\n\n");
		break;
	    }
	}
	default:
	{
	    printf("invalid response\n");
	    wrong=1;
	}
	}
        }
	if(wrong==1)
	    printf("Try again\n\n");
	else
	    turns++;
	wrong=0;
    }while(turns!=3);

    if(wins<loses)
	printf("You win!\n");
    if(wins>loses)
	printf("I win!\n");
    else
	printf("It's a tie!\n");
    printf("Thank you for playing with me have a nice day!\n");
}

int cp_Plays()
{
    int cp_choose;
    cp_choose = rand()%3;
    return cp_choose;
}

void scoreboards(int wins, int loses)
{
    printf("The score board is now:\n");
    printf("Me - You\n");
    printf("%d    %d\n\n", loses, wins);
}

