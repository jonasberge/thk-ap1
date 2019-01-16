import java.lang.Math;

public class BankAccount
{
	private double balance;

	public BankAccount()
	{
		this(0.00);
	}

	public BankAccount(double balance)
	{
		this.balance = round(balance);
	}

	public double deposit(double amount)
	{
		amount = round(amount);
		balance += amount;
		return amount;
	}

	public double withdraw(double amount)
	{
		amount = round(amount);

		if (amount > balance) {
			System.out.println("Fehler: nicht genug "
				+ "Geld auf dem Konto vorhanden!");
			return balance;
		}

		balance -= amount;
		return amount;
	}

	public double getBalance()
	{
		return balance;
	}

	private double round(double amount)
	{
		return Math.floor(amount * 100) / 100;
	}
}
