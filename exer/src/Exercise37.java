import java.util.Scanner;

public class Exercise37
{
	private static final Scanner in = new Scanner(System.in);

	public static void main(String[] args)
	{
		BankAccount account = new BankAccount();

		System.out.println("Programm Geldautomat - Optionen:");
		System.out.println("[1] Kontostand abfragen.");
		System.out.println("[2] Geldbetrag einzahlen.");
		System.out.println("[3] Geldbetrag abheben.");
		System.out.println("[4] Programm beenden.");

		for (boolean loop = true; loop;) {
			System.out.printf("%nAuswahl: ");
			int option = in.nextInt();

			double amount;
			switch (option) {
			case 1: amount = account.getBalance();
				System.out.printf("Ihr Kontostand beträgt "
					+ "%.2f EUR%n", amount);
				break;
			case 2: System.out.print("Geldbetrag: ");
				amount = in.nextDouble();
				amount = account.deposit(amount);
				System.out.printf("%.2f EUR wurden auf "
					+ "Ihr Konto eingezahlt.%n", amount);
				break;
			case 3: System.out.print("Geldbetrag: ");
				amount = in.nextDouble();
				amount = account.withdraw(amount);
				System.out.printf("%.2f EUR wurden von "
					+ "Ihrem Konto abgehoben.%n", amount);
				break;
			case 4: loop = false; break;
			default: System.out.println("Fehler: Ungültige "
					+ "Auswahl. Versuchen Sie es erneut.");
			}
		}
	}
}
