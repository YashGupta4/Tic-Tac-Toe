#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


char a[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void delay(int a)
{
    int add = 0;
    long long int t = a * 10000, i;
    for (i = 0; i < t; i++)
    {
        add *= i;
        add++;
        add++;
    }
}
void load() // function to print loading
{
	system("CLS");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t Loading...\n");
	printf("\t\t\t\t *");
	for (int i = 0; i < 9; i++)
	{
		delay(550);
		printf("*");
	}
	getch();
}
void intro() // function to print general instruction and rules of the game
{
    printf("\t\t Welcome to the world of Tic Tac Toe ......\n");
    delay(500);
   int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                printf("   %c\n", a[i][j]);
            }
            else
            {
                printf("   %c|", a[i][j]);
            }
        }
    if(i<2)
        printf("---------------\n");
    }

    delay(1000);
    printf("\n\npress any key to continue)\n");
    getch();
    system("CLS");
    printf("Game Instructions :\n");
    printf("About the game:\n");
    printf("\t\t Tic-tac-toe is played on a three-by-three grid by two players, who alternately place the marks X and O in one of the nine spaces in the grid.");
    printf("__________________________________________________________________\n");
    printf("Rules:\n\n");
    printf("\t1. The game is played on a grid that's 3 squares by 3 squares.\n");
    printf("\t2. Players take turns putting their marks in empty squares.\n");
    printf("\t3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n"); 
    printf("\t4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.\n");    
    printf("\t\t(press ecs to exit the game)\n");
    printf("Let's begin");
    for (int k = 0; k < 4; k++)
    {
        delay(1000);
        printf(".");
    }
    printf("\n\n\n");
    printf("\n\n Press any key to play the game...");
    if (getch() == 27)
        exit(0);
}

int main()
{
    system("CLS");
    intro();
    system("CLS");
    load();
    system("CLS");
    int i,j;
    char c[50], c1[50], c3, c4, start;
    printf("Enter only the first name of First user and choice of symbol:\n");
    scanf("%s %c", &c, &c3);
    printf("\nEnter only the first name of Second user and choice of symbol:\n");
    scanf("%s %c", &c1, &c4);
    system("cls");
    printf("First opponent name is : %s \t symbol used: %c \n", c, c3);
    printf("Second opponent name is : %s \t symbol used: %c \n\n\n\n\n", c1, c4);
    printf("Would you like to start the game(y/n): ");
    scanf(" %c", &start);
    getch();

    int k, l, k2, l2, count = 1, s = 0;
    if (start == 'Y' || start == 'y')
    {
        for (count; count <= 9; count++)
        {
            if (count % 2 == 0)
            {
                do
                {
                    printf(" %s enter your row and column location:", c1);
                    scanf("%d %d", &k, &l);
                } while (k > 2 || l > 2);

                a[k][l] = c4;
                printf("\n");
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        if (j == 2)
                        {
                            printf("%c", a[i][j]);
                        }
                        else
                        {
                            printf("%c|", a[i][j]);
                        }
                    }
                    printf("\n");
                }
                if ((a[0][0] == c4 && a[0][1] == c4 && a[0][2] == c4) || (a[1][0] == c4 && a[1][1] == c4 && a[1][2] == c4) || (a[2][0] == c4 && a[2][1] == c4 && a[2][2] == c4) || (a[0][0] == c4 && a[1][0] == c4 && a[2][0] == c4) || (a[0][1] == c4 && a[1][1] == c4 && a[2][1] == c4) || (a[0][2] == c4 && a[1][2] == c4 && a[2][2] == c4) || (a[0][0] == c4 && a[1][1] == c4 && a[2][2] == c4) || (a[0][2] == c4 && a[1][1] == c4 && a[2][0] == c4))
                {
                    printf("%s Wins", c1);
                    s = 1;
                    break;
                }
            }
            if (count % 2 != 0)
            {
                do
                {
                    printf(" %s enter your row and column location:", c1);
                    scanf("%d %d", &k2, &l2);
                } while (k2 > 2 || l2 > 2);
                a[k2][l2] = c3;
                printf("\n");
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        if (j == 2)
                        {
                            printf("%c", a[i][j]);
                        }
                        else
                        {
                            printf("%c|", a[i][j]);
                        }
                    }
                    printf("\n");
                }
                if ((a[0][0] == c3 && a[0][1] == c3 && a[0][2] == c3) || (a[1][0] == c3 && a[1][1] == c3 && a[1][2] == c3) || (a[2][0] == c3 && a[2][1] == c3 && a[2][2] == c3) || (a[0][0] == c3 && a[1][0] == c3 && a[2][0] == c3) || (a[0][1] == c3 && a[1][1] == c3 && a[2][1] == c3) || (a[0][2] == c3 && a[1][2] == c3 && a[2][2] == c3) || (a[0][0] == c3 && a[1][1] == c3 && a[2][2] == c3) || (a[0][2] == c3 && a[1][1] == c3 && a[2][0] == c3))
                {
                    printf("%s Wins", c);
                    s = 1;
                    break;
                }
            }
        }
        if (s != 1)
        {
            printf("Tie");
        }
    }
    else
        exit(0);
    return 0;
}
