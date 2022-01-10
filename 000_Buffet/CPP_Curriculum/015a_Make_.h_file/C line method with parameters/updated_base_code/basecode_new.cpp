// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////
void drawlinemine2(int length, int x, int y, char sym){
	srand(time(NULL));
	for(int a=0;a<length;a++){
		gotoxy(x,y); cout<<sym;
		x=x+1;
	}
}
main(){
	int numlines = 15; int y=4; 
	cout<<"Please enter line length: "; int num; cin>>num;
	for (int i=0;i<numlines;i++){
		drawlinemine2(num,1,y,'$');
		cout<<endl; y=y+1; num=num+1;
	}
	cout<<endl;
}