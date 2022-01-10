// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Please enter the symbol: "; char symbol; cin>>symbol;
	cout<<"Please enter line length: "; int length; cin>>length;
	cout<<"horizontal, vertical, or diagonal (h, v, or d): "; char how; cin>>how;
	
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
	else if (how == 'd'){
		int c = 0; int a = 1; int b = 5;
		while (true){
			gotoxy(a,b); cout<<symbol<<endl;
			a = a+1; b = b+1;
			c = c+1;
			if (c==length){
				break;
			}
		}
	}

}
