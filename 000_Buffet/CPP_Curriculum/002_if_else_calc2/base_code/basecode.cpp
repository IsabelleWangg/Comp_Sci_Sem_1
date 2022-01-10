// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter first number: "; int x; cin>>x;
	cout<<"Please enter second number: "; int y; cin>>y;
	cout<<"Please enter the operation: "; char z; cin>>z;
	char thing1 = '+'; char thing2 = '-'; char thing3 = '*'; char thing4 = '/'; int a;
	if (z==thing1){
		a = x+y;
	}
	if (z==thing2){
		a = x-y;
	}
	if (z==thing3){
		a = x*y;
	}
	if (z==thing4){
		a = x/y;
	}
	cout<<x<<" " <<z<<" " <<y<<" = " <<a<<endl;

}
