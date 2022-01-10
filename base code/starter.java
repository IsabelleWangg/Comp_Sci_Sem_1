import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your first name?");
		String text = sc.nextLine();
		System.out.println("What is your age?");
		int ok = sc.nextInt();
		System.out.println("What month were you born? (1-12)");
		int hi = sc.nextInt();
		System.out.println("What day were you born? (1-31)");
		int why = sc.nextInt();
		System.out.println("What year were you born?");
		int lol = sc.nextInt();
		System.out.println("If I have a dollar and two quarters, how much money do I have? (0.0-#)");
		double ugh = sc.nextDouble();
		
		System.out.println("Your name is " + text + " and you were born on " + hi + "/" + why + "/" + lol + "."); 
		System.out.println("You are " + ok + " years old!!!");
		System.out.print("You have $" + ugh + " in your wallet.");
		
		
	}
}
