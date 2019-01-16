import java.lang.Math.*;
import java.util.Scanner;

public class Exercise30
{
	private static final Scanner in = new Scanner(System.in);

	public static void main(String[] args)
	{
		System.out.println("Programm zur Berechnung der Potenz x^y");

		System.out.print("Bitte geben Sie x ein: ");
		double x = in.nextDouble();

		System.out.print("Bitte geben Sie y ein: ");
		double y = in.nextDouble();

		double power = Math.pow(x, y);
		System.out.printf("Die Potenz von x^y ist: %f%n", power);
	}
}

