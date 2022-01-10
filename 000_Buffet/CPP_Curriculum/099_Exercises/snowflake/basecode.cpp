// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Snowflake symbol: "; char snow; cin>>snow;
	for (int i=0;i<20;i++){
		gotoxy(1,3+i); cout<<snow<<endl; sleep(1);
		gotoxy(1,3+i); cout<<" "; sleep(1);
	}
}
