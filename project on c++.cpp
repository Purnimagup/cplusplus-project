#include<iostream>
#include<conio.h>
#include<dos.h>
#include<window.h>
#include<time.h>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

using namespace std;

HANDLE console = GETSTDHANDLE(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char car[4][4]={ ' ','+','+',' ',
                 '+','+','+','+',
                 ' ','+','+',' ',
                 '+','+','+','+' };
int casPos = WIN_WIDTH/2;
int score =0;

voit gotoxy(int x ,int y)
{
    CursorPosition.X=x;
    CursorPosition.Y =y;
    SetConsoleCursorPosition(console,CursorPosition);

}
void setcursor(bool visible ,DWORD size)
{
     if(size==0)
     {
         size=20;
     }
     CONSOLE_CURSOR_INFO lpCursor;
     lpCursor.bVisible =visible;
     lpCursor.dwSize = size;
     SetConsoleCursorInfo(consle,&lpCursor);
}

void drawBorder()
{
    for(int i=0;i<SCREEN_HEIGHT;i++)
    {
        for(int j=o;j<17;j++)
        {
            gotoxy(0+j,i);cout<<"+";
            gotoxy(WIN_WIDTH-j,i);cout<<"+";
        }
    }
    for(int i=0;i<SCREEN_HEIGHT;i++)
    {
        gotoxy(SCREEEN_WIDTH,i);cout<<"+";
    }
}

