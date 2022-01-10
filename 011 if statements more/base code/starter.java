import java.util.Scanner; 

class starter {
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Please input your first number: "); double a = sc.nextDouble();
		System.out.println("Please input your second number: "); double b = sc.nextDouble();
		if (a==b) {
			System.out.println("Your numbers are the same!");
		}
		if (a!=b) {
			System.out.println("Your numbers are different!");
		}
	}
}
