// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	//framed box
	char c = '@';
	int x = 64; int y = 5;
	for (int i=0;i<10;i++){
			gotoxy(x,y); 
			cout<<c;
			x=x+1; 
	}
	for (int i=0;i<10;i++){
			x=x-1;
	}
	cout<<endl;
		
	for(int j=0;j<5;j++){
		gotoxy(x,y+1);cout<<c; 
		gotoxy(x+9,y+1);cout<<c;
		cout<<endl; y=y+1;
	}
	for(int k=0;k<10;k++){
		gotoxy(x,y);
		cout<<c;
		x=x+1;
	}
	
	//number
	while (true){
		while(kbhit()==0){
			gotoxy(68,7); cout<<random(99)+1<<" ";
			gotoxy(1,1);
		}
		char x = getch();
		if (x=='q'){
			break;
		}
	}
}
