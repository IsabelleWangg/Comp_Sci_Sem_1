import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		//0 to 10
		int c = 0;
		while(true){
			System.out.println(c);
			if(c == 10){
				break;
			}
			c = c + 1;
		}
		
		//10 to 0 (must delete one of these to not get errors)
		int c = 10;
		while(true){
			System.out.println(c);
			if(c == 0){
				break;
			}
			c = c - 1;
		}



		
	}
}
