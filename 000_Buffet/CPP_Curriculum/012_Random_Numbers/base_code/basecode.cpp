// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	while(true){
		gotoxy(65,7);cout<<random(100);
		char c = '@';
		int x = 61; int y = 5;
		for (int i=0;i<10;i++){
				gotoxy(x,y); 
				cout<<c;
				x=x+1; 
		}
		x=61;
		
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
		gotoxy(50,11); cout<<"enter ‘q’ to quit or any other key to get another random number: "; char yay; cin>>yay; 
		if (yay=='q'){
			break;
		}
	}


}
