import java.util.Scanner;

public class Exercise27
{
	private static final Scanner in = new Scanner(System.in);

	public static void main(String[] args)
	{
		final double valueAddedTax = 0.19;
		
		System.out.print("Bitte geben Sie den "
			+ "Bruttobetrag in EUR ein: ");
		
		double gross = in.nextDouble();
		double tax = gross * valueAddedTax;
		double net = gross + tax;
		
		System.out.printf("Bruttobetrag        = %8.2f EUR\n", gross);
		System.out.printf("Umsatzsteuer %3.2f%% = %8.2f EUR\n",
			valueAddedTax * 100, tax);
		System.out.printf("Nettobetrag         = %8.2f EUR\n", net);
	}
}


