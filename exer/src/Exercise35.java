import java.util.Scanner;

public class Exercise35
{
	private static final Scanner in = new Scanner(System.in);

	public static void main(String[] args)
	{
		System.out.println("Programm zum Kürzen von Brüchen");

		System.out.print("Geben Sie den Zähler ein: ");
		int numerator = in.nextInt();

		System.out.print("Geben Sie den Nenner ein: ");
		int denominator = in.nextInt();

		Rational fraction = new Rational(numerator, denominator);
		System.out.print("Der gekürzte Bruch heißt: ");
		fraction.print();
		System.out.println();
	}
}
