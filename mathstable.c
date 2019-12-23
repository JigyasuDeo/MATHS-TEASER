#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<string.h>
int pts = 0;
void about()
{
    system("cls");
    printf("\n\t                     _____________________________________________________________________________________________  ");
    printf("\n\n\t\t                                       |           MATHS TEASER          |");
    printf("\n\n\t\t                                       |   !!!WARNING:-LEARN TABLES!!!   |");
    printf("\n\n\t\t                 _________________________________________________________________________________  ");
    printf("\n\n\t\t                                                      ABOUT                                                ");
    printf("\n\n\t\t                     This Game is developed by J.D with an idea to generate interest in children             ");
    printf("\n\n\t\t                     about maths and tables upto 20. By playing this game children will learn                ");
    printf("\n\n\t\t                     tables and try to score higher.                                                         ");
    printf("\n\n\t\t                     In future we will try to built an GUI based game and also bring multiplayer             ");
    printf("\n\n\t\t                     in it. We will also try to put a certain time limit to answer in a game.                                                                                  ");
    printf("\n\n\n\n\t\t\t\t                                                                            -PRESS ANY KEY TO ESCAPE        ");
    getch();
}
int rand1(int ch)
{
    int num;
    srand(time(0));
    if(ch==1)
    {
        num = (rand()%(10-1+1))+1;
    }
    else if(ch==2)
    {
        num = (rand()%(15-11+1))+11;
    }
    else if(ch==3)
    {
        num = (rand()%(20-16+1))+16;
    }
    return num;
}
int rand2()
{
    int num;
    srand(time(0));
    num = (rand()%(10-1+1))+1;
    return num;
}
void menu(int ch,int pts)
{
    system("cls");
    int a;
    char level[9];
    if(ch==1)
    {
        strcpy(level,"Easy");
    }
    else if(ch==2)
    {
        strcpy(level,"Medium");
    }
    else if(ch==3)
    {
        strcpy(level,"Hard");
    }
    int n1=rand1(ch);
    int n2=rand2();
    do{
        printf("\n\n\t\t         *****************************************************************************************************");
        printf("\n\t                     _____________________________________________________________________________________________  ");
        printf("\n\n\t\t                                       |           MATHS TEASER          |");
        printf("\n\n\t\t                                       |   !!!WARNING:-LEARN TABLES!!!   |");
        printf("\n\n\t\t                 _________________________________________________________________________________  ");
        printf("\n\n\t\t                       LEVEL:- %s                                                 POINTS :-%d ", level,pts);
        printf("\n\n\t\t                                    EXPRESSION :-");
        printf("\n\n\t\t                                                        %d x %d = ?",n1,n2);
        printf("\n\n\t\t                       0. BACK                 ");
        printf("\n\n\t\t               _____________________________________________________________________________________________  ");
        printf("\n\n\t\t                                                  USER INPUT :- ");
        scanf("%d",&a);
        printf("\n\n\t\t         *******************************************************************************************************");
        printf("\n\n\t\t                                              LOADING ");
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        if(a==(n1*n2))
        {
            system ("cls");
            printf("\n\n\n\n\t\t                                          CORRECT ANSWER                                                   ");
            printf("\n\n\n\n\t\t                                           +10 POINTS                                                   ");
            pts=pts + 10;
            Sleep(1000);
            menu(ch,pts); 
        }
        else if(a!=0)
        {
            system("cls");
            printf("\n\n\n\n\t\t                                            WRONG ANSWER                                                   ");
            printf("\n\n\n\n\t\t                                        TOTAL POINTS =  %d                                                  ",pts);
            printf("\n\n\n\n\t\t                                        CORRECT ANSWER = %d                                                   ",n1*n2);
            printf("\n\n\n\n\t\t                                      PRESS SPACEBAR TO RETURN                                                  ");
            Sleep(1000);
            break;
        }
        a=0;
    }while(a!=0);
    getch();   
}
void play()
{
    int ch;
    system("cls");
    do
    {
        printf("\n\n\t\t         *****************************************************************************************************");
        printf("\n\t                     _____________________________________________________________________________________________  ");
        printf("\n\n\t\t                                       |           MATHS TEASER          |");
        printf("\n\n\t\t                                       |   !!!WARNING:-LEARN TABLES!!!   |");
        printf("\n\n\t\t                 _________________________________________________________________________________  ");
        printf("\n\n\t\t                                       |               MODE              |");
        printf("\n\n\t\t                                       |  Press: 1. EASY                 |");
        printf("\n\n\t\t                                       |         2. MEDIUM               |");
        printf("\n\n\t\t                                       |         3. HARD                 |");
        printf("\n\n\t\t                                       |         0. BACK                 |");
        printf("\n\n\t\t               _____________________________________________________________________________________________  ");
        printf("\n\n\t\t                                                ENTER CHOICE :- ");
        scanf("%d",&ch);
        printf("\n\n\t\t         *******************************************************************************************************");
        printf("\n\n\t\t                                              LOADING ");
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        switch(ch)
        {
            case 0: return;
                    break;
            case 1:        
            case 2:       
            case 3: menu(ch,pts);
                break;
            default: printf("\n\t!!!WRONG INPUT");
                break;
        }
        system("cls");   
    } while (ch!=0); 
}
void inst()
{
    system("cls");
     printf("\n\t                     _____________________________________________________________________________________________  ");
     printf("\n\n\t\t                                       |           MATHS TEASER          |");
     printf("\n\n\t\t                                       |   !!!WARNING:-LEARN TABLES!!!   |");
     printf("\n\n\t\t                 _________________________________________________________________________________  ");
     printf("\n\n\t\t                                                     INSTRUCTIONS                                                ");
     printf("\n\n\t\t                                  In this game you have to calculate the result of a given");
     printf("\n\n\t\t                                  expresssion from a table within and sumbit your answer  ");
     printf("\n\n\t\t                                  FOR EX:- expression 15X3=? you have write the result i.e");
     printf("\n\n\t\t                                                       45 otherwise you will lose the game");
     printf("\n\n\t\t                                  You have only 1 life in which you have to score higher  ");
     printf("\n\n\t\t                                  In this game there are 3 differnt modes available :-");
     printf("\n\n\t\t                                              EASY :- Tables from 1-10");
     printf("\n\n\t\t                                              MEDIUM :- Tables from 11-15");
     printf("\n\n\t\t                                              HARD :- Tables from 16-20");
     printf("\n\n\t\t                                     User can choose in which mode he want to play        ");
     printf("\n\n\t\t                                   For every Correct answer user will get +10 points.        ");
     printf("\n\n\n\n\t\t\t\t                                                                            -PRESS ANY KEY TO ESCAPE        ");
     getch();
     system("cls");
}
int main()
{
    int ch;
    do{
        printf("\n\n\t\t         *****************************************************************************************************");
        printf("\n\t                     _____________________________________________________________________________________________  ");
        printf("\n\n\t\t                                       |           MATHS TEASER          |");
        printf("\n\n\t\t                                       |   !!!WARNING:-LEARN TABLES!!!   |");
        printf("\n\n\t\t                 _________________________________________________________________________________  ");
        printf("\n\n\t\t                                       |               MENU              |");
        printf("\n\n\t\t                                       |  Press: 1. PLAY                 |");
        printf("\n\n\t\t                                       |         2. INSTRUCTION          |");
        printf("\n\n\t\t                                       |         3. ABOUT                |");
        printf("\n\n\t\t                                       |         0. EXIT                 |");
        printf("\n\n\t\t               _____________________________________________________________________________________________  ");
        printf("\n\n\t\t                                                ENTER CHOICE :- ");
        scanf("%d",&ch);
        printf("\n\n\t\t         *******************************************************************************************************");
        printf("\n\n\t\t                                              LOADING ");
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        switch(ch)
        {
            case 0: exit(0);
            case 1: play();
                break;
            case 2: inst();
                break;
            case 3: about();
                break;
            default: printf("\n\t!!!WRONG INPUT");
                        Sleep(500);
                break;
        }
            system("cls");
    }while(ch!=0);
    
    getch();
    return 0;
}