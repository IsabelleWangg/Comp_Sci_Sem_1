import pkg.*;
import java.util.Scanner;
import java.util.Random;


class starter {
	public static void main(String args[]) {
		// Your code goes below here
		BaseClass test = new BaseClass();
		System.out.println("Your role is " + test.role);
		System.out.println("Your strength trait is " + test.strength);
		System.out.println("Your dexterity trait is " + test.dexterity);
		System.out.println("Your intelligence trait is " + test.intelligence);
		System.out.println("Your constitution trait is " + test.constitution);
		System.out.println("Your charisma trait is " + test.charisma);
	}
}
