import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.print("What is your first period? "); String class1 = sc.nextLine();
		System.out.print("What is your second period? "); String class2 = sc.nextLine();
		System.out.print("What is your third period? "); String class3 = sc.nextLine();
		System.out.print("What is your GPA for your first period? "); double a = sc.nextDouble();
		System.out.print("What is your GPA for your second period? "); double b = sc.nextDouble();
		System.out.print("What is your GPA for your third period? "); double c = sc.nextDouble();
		System.out.println(class1 + " - " + a); 
		System.out.println(class2 + " - " + b);
		System.out.println(class3 + " - " + c);
		System.out.print("Total GPA - " + (a+b+c)/3);
	}
}
