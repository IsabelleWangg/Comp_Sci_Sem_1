import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		//name
		System.out.println("What is your name?"); String name = sc.nextLine();
		
		//title
		System.out.println("What is your title? Ex: Slayer of Dragons"); String title = sc.nextLine();
		
		//role
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
		
		
		//skill points
		System.out.println(" ");
		System.out.println("You have 25 skill points to spend in the following: Strength, Dexterity, Intelligence, Constitution, and Charisma. Spend them wisely.");
		int points = 25;
		
		  //strength
		System.out.println(" ");
		System.out.print("Strength (1-10): "); int num1 = sc.nextInt();
		if (num1>10){
			System.out.print("Please input a smaller value. Strength (1-10): "); num1 = sc.nextInt();
			System.out.println("You have " + (points - num1) + " left to spend.");
			points = 25 - num1;
		}
		else{
			System.out.println("You have " + (points - num1) + " left to spend.");
			points = 25 - num1;
		}
		
		  //dexterity
		System.out.println(" ");
		System.out.print("Dexterity (1-10): "); int num2 = sc.nextInt();
		if (num2>10){
			System.out.print("Please input a smaller value. Dexterity (1-10): "); num2 = sc.nextInt();
			System.out.println("You have " + (points - num2) + " left to spend.");
			points = points - num2;
		}
		else{
			System.out.println("You have " + (points - num2) + " left to spend.");
			points = points - num2;
		}
		
		  //intelligence
		System.out.println(" ");
		System.out.print("Intelligence (1-10): "); int num3 = sc.nextInt();
		if (num3>10){
			System.out.print("Please input a smaller value. Intelligence (1-10): "); num3 = sc.nextInt();
			System.out.println("You have " + (points - num3) + " left to spend.");
			points = points - num3;
		}
		else{
			System.out.println("You have " + (points - num3) + " left to spend.");
			points = points - num3;
		}
		
		  //constitution
		System.out.println(" ");
		System.out.print("Constitution (1-10): "); int num4 = sc.nextInt();
		if (num4>10){
			System.out.print("Please input a smaller value. Constitution (1-10): "); num4 = sc.nextInt();
			System.out.println("You have " + (points - num4) + " left to spend.");
			points = points - num4;
		}
		else{
			System.out.println("You have " + (points - num4) + " left to spend.");
			points = points - num4;
		}
		
		  //charisma
		System.out.println(" ");
		System.out.print("Charisma (1-10): "); int num5 = sc.nextInt();
		if (num5>10){
			System.out.print("Please input a smaller value. Charisma (1-10): "); num5 = sc.nextInt();
			System.out.println(" ");
			System.out.println("You have " + (points - num5) + " to spend for next time.");
			points = points - num5;
		}
		else{
			System.out.println(" ");
			System.out.println("You have " + (points - num5) + " to spend for next time.");
			points = points - num5;
		}
		
		//ending
		System.out.println(" ");
		System.out.println("------------------------------------------------------");
		System.out.println("You are " + name + ", the " + title + " of CVHS.");
		System.out.println("You're a " + role + " with the following stats!");
		
		System.out.println("Strength - " + num1);
		System.out.println("Dexterity - " + num2);
		System.out.println("Intelligence - " + num3);
		System.out.println("Constitution - " + num4);
		System.out.println("Charisma - " + num5);

		System.out.println(" ");
		System.out.println("Good luck on your quest " + name + "!");
	}
}
