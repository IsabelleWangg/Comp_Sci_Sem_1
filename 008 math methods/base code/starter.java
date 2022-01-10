import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		int bleh = Math.max(13-6*11, 30%7*(-2));
		System.out.println("Maximum = " +bleh);
		double heh = Math.sqrt(3*8+31%7);
		System.out.println("Square root = "+heh);
		double meh = Math.pow(37/3, 35%21);
		System.out.println("Power = "+meh);
		double leh = Math.max(Math.pow(2, 14%3), Math.sqrt(2*6));
		System.out.println("Max = "+leh);
		
		//extra lab
		Scanner sc = new Scanner(System.in);
		System.out.print("Please enter a double: "); double x = sc.nextDouble();
		System.out.print("Please enter another double: "); double y = sc.nextDouble();
		double yay = Math.max(x,y); System.out.println("The max of "+x+" and "+y+ " is "+yay);
		double yes = Math.sqrt(y); System.out.println("The square root of "+y+" is "+yes);
		double no = Math.pow(x,y); System.out.println(x+" to the power of "+y+" is "+no);
		
	}
}
