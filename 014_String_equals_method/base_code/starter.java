import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Would you like to be a Wizard, Warrior, or Rogue?"); String role = sc.nextLine();
		if ((role.equals("Wizard")) || (role.equals("wizard"))){
			System.out.println("You've chosen the Wizard! Excelsior!");
		}
		else if ((role.equals("Warrior")) || (role.equals("warrior"))){
			System.out.println("You've chosen the Warrior! For honor!");
		}
		else if ((role.equals("Rogue")) || (role.equals("rogue"))){
			System.out.println("You've chosen the Rogue! How cunning!");
		}
		else{
			System.out.println("You've decided not to choose a role. Rerun program.");
		}
	}
}
