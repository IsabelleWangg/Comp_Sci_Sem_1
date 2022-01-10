// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	//head
	gotoxy(45,4); cout<<'O';
	gotoxy(45,3); cout<<'O';
	gotoxy(46,2); cout<<'O';
	for(int a=40;a<50;a++){
		gotoxy(a,5); cout<<'m';
	}
	for(int b=39;b<51;b++){
		gotoxy(b,6); cout<<'m';
	}
	for(int c=38;c<52;c++){
		gotoxy(c,7); cout<<'m';
	}
	for(int d=37;d<53;d++){
		gotoxy(d,8); cout<<'m';
	}
	for(int e=38;e<52;e++){
		gotoxy(e,9); cout<<'m';
	}
	for(int f=39;f<51;f++){
		gotoxy(f,10); cout<<'m';
	}
	for(int g=40;g<50;g++){
		gotoxy(g,11); cout<<'m';
	}
	//face
	gotoxy(41,7); cout<<'0'; gotoxy(48,7); cout<<'0';
	gotoxy(44,8); cout<<'>'; gotoxy(45,8); cout<<'>';gotoxy(46,8); cout<<'>';
	gotoxy(43,8); cout<<')'; 
	gotoxy(42,9); cout<<'('; gotoxy(43,9); cout<<')';
	gotoxy(42,10); cout<<'('; gotoxy(43,10); cout<<')';
	//body
	for(int h=34;h<56;h++){
	gotoxy(h,12); cout<<'m';
	}
	for(int i=32;i<58;i++){
	gotoxy(i,13); cout<<'m';
	}
	for(int j=30;j<60;j++){
	gotoxy(j,14); cout<<'m';
	}
	for(int j=30;j<60;j++){
	gotoxy(j,15); cout<<'m';
	}
	for(int j=30;j<60;j++){
	gotoxy(j,16); cout<<'m';
	}
	for(int j=30;j<60;j++){
	gotoxy(j,17); cout<<'m';
	}
	for(int k=32;k<58;k++){
	gotoxy(k,18); cout<<'m';
	}
	for(int l=33;l<57;l++){
	gotoxy(l,19); cout<<'m';
	}
	for(int m=35;m<55;m++){
	gotoxy(m,20); cout<<'m';
	}
	for(int n=36;n<54;n++){
	gotoxy(n,21); cout<<'m';
	}
	//wings
	gotoxy(39,13); cout<<'}';gotoxy(51,13); cout<<'{';
	gotoxy(40,14); cout<<'}';gotoxy(50,14); cout<<'{';
	gotoxy(41,15); cout<<'}';gotoxy(49,15); cout<<'{';
	gotoxy(41,16); cout<<'}';gotoxy(49,16); cout<<'{';
	gotoxy(40,17); cout<<'}';gotoxy(50,17); cout<<'{';
	gotoxy(39,18); cout<<'}';gotoxy(51,18); cout<<'{';
	//feet
	gotoxy(40,22); cout<<'l';
	gotoxy(40,23); cout<<'l';
	gotoxy(39,24); cout<<'_';gotoxy(40,24); cout<<'l';gotoxy(41,24); cout<<'_';
	gotoxy(49,22); cout<<'l';
	gotoxy(49,23); cout<<'l';
	gotoxy(48,24); cout<<'_';gotoxy(49,24); cout<<'l';gotoxy(50,24); cout<<'_';

}
