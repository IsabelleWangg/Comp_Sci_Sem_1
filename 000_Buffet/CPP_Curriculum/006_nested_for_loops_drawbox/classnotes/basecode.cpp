// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	/// *****
	/// *****
	/// *****
	
	for(int y=1;y<4;y++){
		for(int x=1;x<6;x++){
			gotoxy(x+10,y+6);
			cout<<"*";	
		}
	}
}
