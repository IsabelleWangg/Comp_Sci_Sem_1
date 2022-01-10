import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		Random rand = new Random();
		System.out.print("Pick a number between 1 - 1000: "); int a = sc.nextInt();
		int ok = rand.nextInt(1000) + 1;
		if (a==ok){
			System.out.print("Your number was the random number. The number was " + ok + ".");
		}
		else{
			System.out.print("Your number wasn't the random number. The number was " + ok + ".");
		}
	}
}
