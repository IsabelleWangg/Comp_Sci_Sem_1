// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Please enter box width: "; int w; cin>>w;
	cout<<"Please enter border char: "; char symbol; cin>>symbol;
	cout<<"Please enter box height: "; int h; cin>>h;
	cout<<"Please enter box x coordinate: "; int x; cin>>x;
	cout<<"Please enter box y coordinate: "; int y; cin>>y;
	
	int a; for (a=0;a<h;a++){
		int i; for (i=0;i<w;i++){
				gotoxy(x,y); 
				cout<<symbol;
				x=x+1; 
			}
		for (i=0;i<w;i++){
			x=x-1;
		}
		cout<<endl; 
	}

}
