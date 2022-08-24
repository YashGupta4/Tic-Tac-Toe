#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    char a[3][3]= {'  ','  ','  ','  ','  ','  ','  ','  ','  '};
    printf("Welcome to tic tac toe game\n");
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==2)
            {
                printf("  %c\n",a[i][j]);
            }
            else
            {
                printf("  %c|",a[i][j]);
            }
        }

        printf("\n");



    }
    char c[50],c1[50],c3,c4,start;
    printf("First opponent name without using spaced and symbol:\n");
    scanf("%s %c",&c,&c3);
    printf("\nSecond opponent name without using spaces and symbol:\n");
    scanf("%s %c",&c1,&c4);
    system("cls");
    printf("First opponent name is : %s \n symbol used: %c \n",c,c3);
    printf("Second opponent name is : %s \n symbol used: %c \n\n\n\n\n",c1,c4);
    printf("Would you like to start the game(y/n): ");
    scanf(" %c",&start);
    int k,l,k2,l2,count=1,s=0;
    if(start=='Y' || start=='y')
    {
        for(count; count<=9; count++)
        {
            if(count%2==0)
            {
                do
                {
                    printf(" %s enter your cell location:",c1);
                    scanf("%d %d",&k,&l);
                }
                while(k>2 || l>2);

                a[k][l]=c4;
                printf("\n");
                for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        if(j==2)
                        {
                            printf("%c",a[i][j]);

                        }
                        else
                        {
                            printf("%c|",a[i][j]);
                        }
                    }
                    printf("\n");
                }
                if((a[0][0]==c4&&a[0][1]==c4&&a[0][2]==c4)||(a[1][0]==c4&&a[1][1]==c4&&a[1][2]==c4)||(a[2][0]==c4&&a[2][1]==c4&&a[2][2]==c4)||(a[0][0]==c4&&a[1][0]==c4&&a[2][0]==c4)||(a[0][1]==c4&&a[1][1]==c4&&a[2][1]==c4)||(a[0][2]==c4&&a[1][2]==c4&&a[2][2]==c4)||(a[0][0]==c4&&a[1][1]==c4&&a[2][2]==c4)||(a[0][2]==c4&&a[1][1]==c4&&a[2][0]==c4))
                {
                    printf("%s Wins",c1);
                    s=1;
                    break;
                }
            }
            if(count%2!=0)
            {
                do
                {
                    printf(" %s enter your cell location:",c1);
                    scanf("%d %d",&k2,&l2);
                }
                while(k2>2 || l2>2);
                a[k2][l2]=c3;
                printf("\n");
                for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        if(j==2)
                        {
                            printf("%c",a[i][j]);
                        }
                        else
                        {
                            printf("%c|",a[i][j]);
                        }
                    }
                    printf("\n");
                }
                if((a[0][0]==c3&&a[0][1]==c3&&a[0][2]==c3)||(a[1][0]==c3&&a[1][1]==c3&&a[1][2]==c3)||(a[2][0]==c3&&a[2][1]==c3&&a[2][2]==c3)||(a[0][0]==c3&&a[1][0]==c3&&a[2][0]==c3)||(a[0][1]==c3&&a[1][1]==c3&&a[2][1]==c3)||(a[0][2]==c3&&a[1][2]==c3&&a[2][2]==c3)||(a[0][0]==c3&&a[1][1]==c3&&a[2][2]==c3)||(a[0][2]==c3&&a[1][1]==c3&&a[2][0]==c3))
                {
                    printf("%s Wins",c);
                    s=1;
                    break;
                }
            }
        }
        if(s!=1)
        {
            printf("Tie");
        }
    }
    else
        exit(0);
    return 0;
}
