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

main(){
	int boxcounter = 0;
	int boxheight = 4;
	int y = 2;
	for(boxcounter=0;boxcounter<5;boxcounter++){
		for(int i=0; i<boxheight; i++){
			drawlinemine(10,1,y,'$');
			cout<<endl;y=y+1;
		}
		cout<<endl;
	}
}
