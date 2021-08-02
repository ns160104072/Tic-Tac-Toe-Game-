#include<stdio.h>

char b1= '1', b2= '2',b3= '3',b4= '4',b5= '5';
char b6= '6',b7= '7',b8= '8',b9= '9';
void printer()
{
        printf("\t\t\t\t      %c | %c| %c\n", b1, b2, b3);
        printf("\t\t\t\t     ---|--|---\n");
        printf("\t\t\t\t      %c | %c| %c\n", b4, b5, b6);
        printf("\t\t\t\t     ---|--|---\n");
        printf("\t\t\t\t      %c | %c| %c\n", b7, b8, b9);
}

int main()
{
    char in, ch;
    int i=1;
    printf("\n\t\t\t\t~~~TIC-TAC-TOE~~~\n\n");

    do
    {
            printer();
            if(i%2==0)printf("Player-2 enter the position of o: ");
             else printf("\nPlayer-1 enter the position of x: ");
        scanf(" %c", &in);

             switch(in)
        {
            case '1' :
                        {
                        if(b1=='X' || b1=='O' )
                        {
                            printf("Position is taken.Please input another one\n\n");
                            continue;
                        }
                        if(i%2==0)b1='O';
                        else b1='X';break;
                       }
            case '2' : {
                        if(b2=='X' || b2=='O' )
                        {
                            printf("Position is taken. Please input another one\n\n");
                            continue;
                        }
                        if(i%2==0)b2='O';
                        else b2='X';break;
            }
            case '3' : {
                        if(b3=='X' || b3=='O' )
                        {
                            printf("Position is taken. Please input another one\n\n");
                            continue;
                        }
                        if(i%2==0)b3='O';
                        else b3='X';break;
                       }
            case '4' : {
                        if(b4=='X' || b4=='O' )
                        {
                            printf("Position is taken. Please input another one\n\n");
                            continue;
                        }
                        if(i%2==0)b4='O';
                        else b4='X';break;
                       }
            case '5' : {
                        if(b5=='X' || b5=='O' )
                        {
                            printf("Position is taken. Please input another one\n\n");
                            continue;
                        }
                        if(i%2==0)b5='O';
                        else b5='X';break;
                       }
            case '6' : {
                        if(b6=='X' || b6=='O' )
                        {
                            printf("Position is taken.Please input another one\n\n");
                            continue;
                        }
                        if(i%2==0)b6='O';
                        else b6='X';break;
                       }
            case '7' : {
                        if(b7=='X' || b7=='O' )
                        {
                            printf("Position is taken. Please input another one\n\n");
                            continue;
                        }
                        if(i%2==0)b7='O';
                        else b7='X';break;
                       }
            case '8' : {
                        if(b8=='X' || b8=='O' )
                        {
                            printf("Position is taken. Please input another one\n\n");
                            continue;
                        }
                        if(i%2==0)b8='O';
                        else b8='X';break;
                       }
            case '9' : {
                        if(b9=='X' || b9=='O' )
                        {
                            printf("Position is taken. Please input another one\n\n");
                            continue;
                        }
                        if(i%2==0)b9='O';
                        else b9='X';break;
                       }

        }
        if(((b1==b2) && (b1==b3)) || ((b1==b4) && (b1==b7)) || ((b1==b5) && (b1==b9)) || ((b2==b5) && (b2==b8)) || ((b2==b5) && (b2==b8))||((b3==b6) && (b3==b9))||((b4==b5) && (b4==b6))||((b7==b8) && (b7==b9)) ||((b3==b5) && (b3==b7)))
        {

                   printer();
                  if(i%2==0)printf("\n\t\t\t\t      PLAYER 2 YOU WIN!!!\n");
                   else printf("\n\t\t\t\t      PLAYER 1 YOU WIN!!!\n");break;
         }
            i++;
    }while(i<=9);

    if(i==10) {printer(); printf("\n\t\t\t\t      THE GAME IS DRAWN!!\n\n");}
}



