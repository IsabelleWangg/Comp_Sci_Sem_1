// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Please enter a character: "; char c; cin >> c;
	cout<<"Please enter the first integer value: "; int a; cin >> a;
	cout<<"Please enter the math operation to perform: "; char m; cin >> m;
	cout<<"Please enter the second integer value: "; int b; cin >> b;
	
	int answer;
	if(m=='+'){
		answer = a+b;
	}
	else if(m=='-'){
		answer = a-b;
	}
	else if(m=='*'){
		answer = a*b;
	}
	else if(m=='/'){
		answer = a/b;
	}
	gotoxy(63,50); cout<<a<<m<<b<<" = "<<answer;
	
	int x = 55; int y = 5;
	for (int i=0;i<24;i++){
			gotoxy(x,y); 
			cout<<c;
			x=x+1; 
	}
	for (int i=0;i<24;i++){
			x=x-1;
	}
	cout<<endl;
	
	for(int j=0;j<5;j++){
		gotoxy(x,y+1);cout<<c; 
		gotoxy(x+23,y+1);cout<<c;
		cout<<endl; y=y+1;
	}
	for(int k=0;k<24;k++){
		gotoxy(x,y);
		cout<<c;
		x=x+1;
	}
}