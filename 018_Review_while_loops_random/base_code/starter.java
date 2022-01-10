import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		Random rand = new Random(); Scanner sc = new Scanner(System.in);
		int number = rand.nextInt(1000);
		while (true){
			System.out.print("Guess a number: ");
			int guess = sc.nextInt();
			if (guess<number){
				System.out.println("You're a little too low!");
				System.out.println( );
			}
			else if (guess>number){
				System.out.println("You're a little too high!");
				System.out.println( );
			}
			if (guess==number){
				System.out.println("You guessed it!");
				break;
			}
			
		}
		
		
	}
}
