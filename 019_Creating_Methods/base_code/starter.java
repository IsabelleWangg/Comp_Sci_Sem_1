import java.util.Scanner;
import java.util.Random;

class starter {
	public static void toString(String a){
		System.out.println( );
		System.out.println("This is using the methods!");
		System.out.println(a);
	}
	
	public static void toStringCombined(String a, String b){
		String x = a;
		String y = b;
		System.out.print(a + " " + b);
	}
	
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Write a sentence!"); 
		String x = sc.nextLine();
		System.out.println("Write a sentence!"); 
		String y = sc.nextLine();
		toString(x);
		toStringCombined(x,y);
	}
	
}