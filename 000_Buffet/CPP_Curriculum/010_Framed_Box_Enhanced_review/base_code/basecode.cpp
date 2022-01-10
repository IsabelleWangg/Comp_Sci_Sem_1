// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Please enter box width: "; int w=0; cin>>w; 
	cout<<"Please enter border char: "; char symbol; cin>>symbol; 
	cout<<"Please enter box height: "; int h=0; cin>>h; 
	cout<<"Please enter box x coordinate: "; int x=0; cin>>x;
	cout<<"Please enter box y coordinate: "; int y=0; cin>>y;
	
	int i; for (i=0;i<w;i++){
			gotoxy(x,y); 
			cout<<symbol;
			x=x+1; 
	}
	for (i=0;i<w;i++){
		x=x-1;
	}
	cout<<endl;
	
	for (int j=0;j<(h-2);j++){
		gotoxy(x,y-1); cout<<symbol; 
		gotoxy(x+(w-1),y-1); cout<<symbol;
		cout<<endl; y=y-1; 
	}
	
	for (int k=0;k<w;k++){
		gotoxy(x,y);
		cout<<symbol;
		x=x+1; 
	}
}
