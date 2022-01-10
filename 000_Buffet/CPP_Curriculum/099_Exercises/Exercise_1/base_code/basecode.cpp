// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	//5 to 25
	int c = 5;
	while (true){
		cout<<c<<endl;
		if (c==25){
			break;
		}
		c = c+1;
	}
	cout<<endl;
	
	//15 to 5
	int c1 = 15;
	while (true){
		cout<<c1<<endl;
		if (c1==5){
			break;
		}
		c1 = c1-1;
	}
	
	cout<<endl;
	for(int i = 5; i <= 25; i = i+1){
		cout<<i<<endl;
	}
	
	cout<<endl;
	for(int x = 15; x >= 5; x--){
		cout<<x<<endl;
	}

}
