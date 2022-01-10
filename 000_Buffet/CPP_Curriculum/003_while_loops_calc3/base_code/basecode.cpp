// base code file
#include "./hfiles/poole.h"


main(){
	srand(time(NULL));
	//////////////NOTES////////////////////////////////////
	//char quit = 'x';
	//int x = 0;
	//while (true){
	//	cout<<"You've been gnomed";
	//	cout<<x;
	//	cin>>quit;
	//	if (quit=='q'){
	//		cout<<"I am coming for you";
	//		break;
	//	}
	//	if (x == 100){
	//		break;
	//	}
	//	x = x+1;
	//}
	
	while (true){
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
		cout<<"Would you like to do another calculation? (y or n) "; char s; cin>>s;
		
		if (s == 'n'){
			break;
		}
	}

}
