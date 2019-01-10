import java.util.Scanner;

public class Exercise27
{
	public static void main(String[] args)
	{
		final float valueAddedTax = 0.19f;
		
		Scanner in = new Scanner(System.in);
		System.out.print("Bitte geben Sie den "
			+ "Bruttobetrag in EUR ein: ");
		
		float gross = in.nextFloat();
		float tax = gross * valueAddedTax;
		float net = gross + tax;
		
		System.out.printf("Bruttobetrag       = %8.2f EUR\n", gross);
		System.out.printf("Umsatzsteuer %3.1f%% = %8.2f EUR\n",
			valueAddedTax * 100, tax);
		System.out.printf("Nettobetrag        = %8.2f EUR\n", net);
	}
}


