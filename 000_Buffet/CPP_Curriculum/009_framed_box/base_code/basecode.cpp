// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Please enter box width: "; int w=0; cin>>w; 
	cout<<"Please enter border char: "; char symbol; cin>>symbol; 
	cout<<"Please enter box height: "; int h=0; cin>>h; 
	
	int i; for(i=0;i<w;i++){
		cout<<symbol;
	}
	cout<<endl;
	
	int j; for(j=0;j<(h-2);j++){
		cout<<symbol;
		int k; for(k=0;k<(w-2);k++){
			cout<<" ";
		}
		cout<<symbol<<endl;
	}
	
	for(i=0;i<w;i++){
		cout<<symbol;
	}
	
	

}
