// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int height; cout<<"Please enter tree height (not including star): "; cin>>height;
	//house
	for (int y=0;y<4;y++){
		for(int x=0;x<9;x++){
			gotoxy(x+16,y+7); cout<<"#";
		}
	}
	for(int y=0;y<2;y++){
		for (int x=0;x<2;x++){
			gotoxy(x+20,y+9); cout<<"l";
		}
	}
	int y = 4;
	for(int x=0;x<3;x++){
		gotoxy(x+21,y+x); cout<<"^"<<endl;
	}
	y=3;
	for(int x=20;x>16;x--){
		gotoxy(x,y); cout<<"^"<<endl;y=y+1;
	}
		
	//tree
	int tree = 40; int c=1;
	for(int y=0;y<height;y++){
		for(int x=0;x<c;x++){
			gotoxy(x+tree,y+7); cout<<"*"<<endl;
		}
		tree = tree-1; c=c+2;
	}
	gotoxy(40,6); cout<<"+";
	
	while(true){
		//snow
		int a=random(8); 
		for (int i = 0;i<8;i++){
			gotoxy(a,i+3); cout<<"*"<<endl; sleep(1);
			gotoxy(a,i+3); cout<<" "; sleep(1);
		}
		int a1=random(5); 
		for (int i = 0;i<8;i++){
			gotoxy(a1+27,i+3); cout<<"*"<<endl; sleep(1);
			gotoxy(a1+27,i+3); cout<<" "; sleep(1);
		}
	}
	
	
	


}
