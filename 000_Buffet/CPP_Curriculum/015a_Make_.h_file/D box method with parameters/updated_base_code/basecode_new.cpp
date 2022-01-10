// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int boxnumber; 
	int numboxes = 5;
	int boxwidth = 10;
	int boxheight = 4; 
	for (boxnumber=0;boxnumber<numboxes;boxnumber++){
		drawbox2(boxwidth,boxheight);
		cout<<endl;
	}
}
