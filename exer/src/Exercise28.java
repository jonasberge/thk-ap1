import java.util.Calendar;
import java.util.Scanner;

public class Exercise28
{
	private static final Scanner in = new Scanner(System.in);

	public static int getProductionYear()
	{
		System.out.print("Bitte geben Sie das Produktionsjahr "
			+ "(in der Form yyyy) ein: ");
		return in.nextInt();
	}

	public static int calculateAge(int productionYear)
	{
		Calendar now = Calendar.getInstance();
		int today = now.get(Calendar.YEAR);
		return today - productionYear;
	}

	public static void printAge(int age)
	{
		System.out.printf("Das Auto ist heute %d Jahre alt.\n", age);
	}

	public static void main(String[] args)
	{
		int year = getProductionYear();
		int age = calculateAge(year);
		printAge(age);
	}
}

