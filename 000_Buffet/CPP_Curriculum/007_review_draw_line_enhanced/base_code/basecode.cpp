// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Please enter line length: "; int length; cin>>length;
	cout<<"Please enter line symbol: "; char symbol; cin>>symbol;
	cout<<"Please enter line x coordinate: "; int x; cin>>x;
	cout<<"Please enter line y coordinate: "; int y; cin>>y;
	
	int i; for (i=0;i<length;i++){
			gotoxy(x,y); 
			cout<<symbol;
			x=x+1; 
		}

}
