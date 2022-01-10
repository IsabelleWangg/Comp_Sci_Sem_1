import java.util.Scanner;
import java.util.Random;

class starter {
	public static void pow(int a, int b){
		int x = a;
		int y = b;
		int count = 1;
		while (true){
			x = x*a;
			if (count == y-1){
				break;
			}
			count = count + 1;
		}
		System.out.print("Your answer is: " + x);
		return;
	}
	
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your base number?");
		int num1 = sc.nextInt();
		System.out.println("What is your exponent number?");
		int num2 = sc.nextInt();
		pow(num1,num2);
	}
}
