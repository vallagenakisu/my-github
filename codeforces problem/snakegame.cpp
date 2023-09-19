#include<bits/stdc++.h>
#include<conio.h>
#include<time.h>
using namespace std;
int const width=20;
int const height=20;
int x,y;
int fruitX,fruitY;
bool gameover;
enum edirection{STOP=0,LEFT,RIGHT,UP,DOWN};
edirection dir;
string o='O'
void setup()
{
    gameover=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    fruitX=rand()%width;
    fruitY=rand()%height;
}
void draw()
{
    system("cls");
    for(int i=0;i<=height;i++)
    {
        for(int j=0;j<=width;j++)
        {
            if(i==0 || i==height)
            cout<<"#";
            else
            {
                if(j==0 || j==width) cout<<"#";
                else if(i==y && j==x)
                cout<<a;
                else if(i==fruitX and j==fruitY)
                cout<<"F";
                else cout<<" ";
            }
        }
        cout<<endl;
    }

}
void input()
{
    if(kbhit())
    {
        switch(getch())
        {
            case 'a':
            dir=LEFT;
            break;
            case 'd':
            dir=RIGHT;
            break;
            case 'w':
            dir=UP;
            break;
            case 's':
            dir=DOWN;
            break;
            case 'x':
            gameover=!gameover;
            break;
        }
    }
}
void logic()
{
       switch(dir)
       {
       case LEFT:
        x++;
        break;
        case RIGHT:
        x--;
        break;
        case UP:
        y--;
        break;
        case DOWN:
        y++;
        break;
        default:
            break;
       }

}
int main()
{
    srand(time(NULL));
    setup();
    while(!gameover)
    {
        input();
        logic();
        draw();
    }

}
