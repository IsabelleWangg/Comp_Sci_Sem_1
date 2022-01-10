// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Please enter the symbol: "; char symbol; cin>>symbol;
	cout<<"Please enter line length: "; int length; cin>>length;
	cout<<"horizontal or vertical (h or v): "; char how; cin>>how;
	
	if (how == 'h'){
		int i; for (i=0;i<length;i++){
			cout<<symbol;
		}
	}
	else if (how == 'v'){
		int j; for (j=0;j<length;j++){
			cout<<symbol<<endl;
		}
	}

}
