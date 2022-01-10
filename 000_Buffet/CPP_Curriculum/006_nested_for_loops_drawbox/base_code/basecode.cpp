// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Please enter the symbol: "; char s; cin>>s;
	cout<<"Please enter box width: "; int w; cin>>w;
	cout<<"Please enter box height: "; int h; cin>>h;
	int c=0;
	while (true){
		int i; for(i=0;i<w;i++){
			cout<<s;
		}
		cout<<endl;
		if (c==(h-1)){
			break;
		}
		c=(c+1);
	}
}
