import java.util.Random;

class starter {
	public static void main(String args[]) {
		Random rand = new Random();
		int num1 = rand.nextInt(10);
		System.out.println("A number between 0 - 9: " + num1);
		int num2 = rand.nextInt(101);
		System.out.println("A number between 1 - 100: " + num2);
		double num3 = rand.nextInt(1) + 2 + rand.nextDouble();
		System.out.println("A number between 2.5 - 3.5: " + num3);
		double num4 = rand.nextInt(575) + 14 + rand.nextDouble();
		System.out.println("A double between 14 - 589: " + num4);
		
	}
}
