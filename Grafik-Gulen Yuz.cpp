#include <stdio.h>
#include <graphics.h>
int main(){
	initwindow(700,350,"Ýsmail Fýndýk");
	setcolor(YELLOW);
	arc(300,160,0,180,15);
	arc(400,160,0,360,15);
	circle(350,175,100);
	
	ellipse(350,200,180,360,20,5);

	
	
	getch();
	closegraph();
}
