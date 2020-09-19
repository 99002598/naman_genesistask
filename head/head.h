
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void blk(int,int);
void display();
//enum bool{TRUE,FALSE};
/*void main() //MAIN FUNCTION
{
display();
getch();
} */
void display() //DISPLAY TO SHOW THE BOARD
{
int gd=DETECT,gm,i,j,l,m,b;
char pattern[]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
int arrodd[32][2]={ {0,0},{100,0},{200,0},{300,0},{50,50},{150,50}
 ,{250,50},{350,50},{0,100},{100,100},{200,100},{300,100}
 ,{50,150},{150,150},{250,150},{350,150},{0,200},{100,200}
 ,{200,200},{300,200},{50,250},{150,250},{250,250},{350,250},
 {0,300},{100,300},{200,300},{300,300},{50,350},{150,350},
 {250,350},{350,350} };
int
arrevn[33][2]={{50,0},{150,0},{250,0},{350,0},{0,50},{100,50},{200,50},
 {300,50},{50,100},{150,100},{250,100},{350,100},{0,150},
 {100,150},{200,150},{300,150},{50,200},{150,200},{250,200},
 {350,200},{0,250},{100,250},{200,250},{300,250},{50,300},
 {150,300},{250,300},{350,300},{0,350},{100,350},{200,350},
 {300,350}};
clrscr();
initgraph(&gd,&gm,"");
for(i=0;i<=400;i=i+50) //to draw vertical lines of the chess board.
{
line(i,0,i,400);
}
for(j=0;j<=400;j=j+50) //to draw the horizontal lines of the chess 
board.
{
line(0,j,400,j);
}
blk(420,0);
blk(420,250);
line(0,430,0,460); //to draw the display at the bottom
line(0,430,400,430);
line(0,460,400,460);
line(400,430,400,460);
settextstyle(7,HORIZ_DIR,3);
setfillpattern(&pattern,GREEN);
for(b=0;b<=31;b++)
{
bar(arrodd[b][0],arrodd[b][1],arrodd[b][0]+50,arrodd[b][1]+50);
rectangle(arrodd[b][0],arrodd[b][1],arrodd[b][0]+50,arrodd[b][1]+50);
}
setfillpattern(&pattern,DARKGRAY);
for(m=0;m<=31;m++)
{
bar(arrevn[m][0],arrevn[m][1],arrevn[m][0]+50,arrevn[m][1]+50);
rectangle(arrevn[m][0],arrevn[m][1],arrevn[m][0]+50,arrevn[m][1]+50);
}
}
 void blk(int q,int r)
{
int y,z;
for(y=q;y<=(q+200);y=y+50)
{ line(y,r,y,r+200);}
for(z=r;z<=(r+200);z=z+50)
{ line(q,z,q+200,z);}
}
