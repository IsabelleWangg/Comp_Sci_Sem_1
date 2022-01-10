import java.util.Scanner;
import java.util.Random;

class Character {
	String role = new String("Wizard");
	int strength = 5;
	int dexterity = 5;
	int intelligence = 5;
	int constitution = 5;
	int charisma = 5;
}
class starter {
	public static void main(String args[]) {
		Character myCharacter = new Character();
		System.out.println("Your role is " + myCharacter.role);
		System.out.println("Your strength trait is " + myCharacter.strength);
		System.out.println("Your dexterity trait is " + myCharacter.dexterity);
		System.out.println("Your intelligence trait is " + myCharacter.intelligence);
		System.out.println("Your constitution trait is " + myCharacter.constitution);
		System.out.println("Your charisma trait is " + myCharacter.charisma);



		
	}
}
