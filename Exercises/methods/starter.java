import java.util.Scanner;

class starter {
	public static void multDiv3(int a, int b){
		int x = a;
		int y = b;
		int answer = x*y;
		if (answer%3 == 0){
			System.out.println(x + " * " + y + " = " + answer);
			System.out.println(answer + " is divisible by 3");
		}
		else{
			System.out.println(x + " * " + y + " = " + answer);
			System.out.println(answer + " is not divisible by 3");
		}
		return;
	}
	
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Input a number: "); int num1 = sc.nextInt();
		System.out.print("Input a number: "); int num2 = sc.nextInt();
		multDiv3(num1,num2);
	}
}
