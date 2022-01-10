// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

void drawlinemine(int length, int x, int y, char sym){
	srand(time(NULL));
	for(int a=0;a<length;a++){
		gotoxy(x,y); cout<<sym;
		x=x+1;
	}
}

void drawboxmine(int x, int y, int width, int height, char sym){
	srand(time(NULL));
	for(int i=0;i<height;i++){
		drawlinemine(10,1,y,'$'); y=y+1;
		}
		cout<<endl;
}

main(){
	int boxcounter; int y = 2; 
	for(boxcounter=0;boxcounter<5;boxcounter++){
		drawboxmine(1,y,10,4,'$');
		cout<<endl; y=y+5;
	}
}
