// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int y = 1;
	for (int i=0; i<5; i++){
		drawbox(1,y,10,4,'$');
		y = y+5;
	}
}
