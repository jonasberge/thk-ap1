import java.util.Calendar;
import java.util.Scanner;

/**
 * Ein Programm zur Berechnung des Alters eines Autos,
 * mithilfe dessen Produktionsjahr.
 * @author Tadeg Jonas van den Berg
 * @author www.gm.fh-koeln.de/~inf1424
 */
public class Exercise29
{
	private static final Scanner in = new Scanner(System.in);

	/**
	 * Liest das Produktionsjahr eines Autos von der Tastatur ein.
	 * @return das Produktionsjahr des Autos.
	 */
	public static int getProductionYear()
	{
		System.out.print("Bitte geben Sie das Produktionsjahr "
			+ "(in der Form yyyy) ein: ");
		return in.nextInt();
	}

	/**
	 * Berechnung des Alters eines Autos anhand dessen Produktionsjahr.
	 * @param productionYear das Jahr in welchem das Auto produziert wurde.
	 * @return das Alter des Autos
	 */
	public static int calculateAge(int productionYear)
	{
		Calendar now = Calendar.getInstance();
		int today = now.get(Calendar.YEAR);
		return today - productionYear;
	}

	/**
	 * Gibt das Alter des Autos aus.
	 * @param age das Alter des Autos.
	 */
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

