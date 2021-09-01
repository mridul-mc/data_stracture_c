#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"");
	POINT cursorPosition;
	while(1)
	{
		GetCursorPos(&cursorPosition);
		x=cursorPosition.x;
		y=cursorPosition.y;
	
	if(GetAsyncKeyState(VK_RBUTTON))
	{
		circle(x+20,y+20,30);
		delay(5);
	}
	else if(GetAsyncKeyState(VK_LBUTTON))
	{
		cleardevice();
	}
	
	}
	getch();
	closegraph();
}
