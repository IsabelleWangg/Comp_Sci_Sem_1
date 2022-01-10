import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Please enter your first number: "); int x = sc.nextInt();
		System.out.print("Please enter your second number: "); int y = sc.nextInt();
		System.out.print("Please enter your third number: "); int z = sc.nextInt();
		
		if ((x>y) && (x>z)){
			System.out.println("Your first number is the largest of the three!"); 
			System.out.println("The number was " + x + ".");
		}
		if ((y>x) && (y>z)){
			System.out.println("Your second number is the largest of the three!"); 
			System.out.println("The number was " + y + ".");
		}	
		if ((z>x) && (z>y)){
			System.out.println("Your third number is the largest of the three!"); 
			System.out.println("The number was " + z + ".");
		}	
		
		if ((x<y) && (x<z)){
			System.out.println("Your first number is the smallest of the three!");
			System.out.println("The number was " + x + ".");
		}
		if ((y<x) && (y<z)){
			System.out.println("Your second number is the smallest of the three!");
			System.out.println("The number was " + y + ".");
		}
		if ((z<x) && (z<y)){
			System.out.println("Your third number is the smallest of the three!");
			System.out.println("The number was " + z + ".");
		}
	}
}
