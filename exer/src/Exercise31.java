import java.lang.Math.*;
import java.util.Locale;
import java.util.Scanner;

public class Exercise31
{
	public static void main(String[] args)
	{
		Locale.setDefault(Locale.GERMAN);

		System.out.println("Programm zur Berechnung der Potenz x^y");
		Scanner in = new Scanner(System.in);
		
		System.out.print("Bitte geben Sie x ein: ");
		double x = in.nextDouble();

		System.out.print("Bitte geben Sie y ein: ");
		double y = in.nextDouble();

		double power = Math.pow(x, y);
		System.out.printf("Die Potenz von x^y ist: %f%n", power);
	}
}

