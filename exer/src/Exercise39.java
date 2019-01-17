import java.lang.Math;
import java.util.Scanner;

public class Exercise39
{
	private static final Scanner in = new Scanner(System.in);

	public static int[] read()
	{
		int n;
		while (true) {
			System.out.print("Wieviele Zahlen "
				+ "möchten sie eingeben? ");
			if ((n = in.nextInt()) > 0) break;
			System.out.printf("Fehler: Größen kleiner 1 "
				+ "sind nicht erlaubt!%n");
		}

		int[] arr = new int[n];
		System.out.println("Bitte geben sie "
			+ "Werte für die Elemente an:");

		for (int i = 0; i < arr.length; ++i)
			arr[i] = in.nextInt();

		return arr;
	}

	public static void print(int[] arr)
	{
		System.out.println("Das Array beinhaltet folgende Elemente:");
		for (int i = 0; i < arr.length; ++i) {
			if (i != 0) System.out.print(", ");
			System.out.printf("%d", arr[i]);
		}
		System.out.println();
	}

	public static double mean(int[] arr)
	{
		int sum = 0;
		for (int value : arr)
			sum += value;

		return (double)sum / arr.length;
	}

	public static int max(int[] arr)
	{
		int max = Integer.MIN_VALUE;
		for (int value : arr)
			max = Math.max(max, value);

		return max;
	}

	public static void sort(int[] arr)
	{
		for (int n = arr.length; n != 0; --n)
			for (int i = 1; i < n; ++i)
				if (arr[i] < arr[i - 1]) {
					int tmp = arr[i - 1];
					arr[i - 1] = arr[i];
					arr[i] = tmp;
				}
	}

	public static int[] reverse(int[] arr)
	{
		final int n = arr.length;
		int[] dest = new int[n];
		for (int i = 0; i < n; ++i)
			dest[n - i - 1] = Math.abs(arr[i]);

		return dest;
	}

	public static void main(String[] args)
	{
		System.out.println("Führen Sie eine der folgenden "
			+ "Operationen an Ihrem Array aus:");
		System.out.println("[1] Zahlen einlesen.");
		System.out.println("[2] Das Array ausgeben.");
		System.out.println("[3] Den Mittelwert bilden.");
		System.out.println("[4] Die größte Zahl ermitteln.");
		System.out.println("[5] Das Array aufsteigend sortieren.");
		System.out.println("[6] Das Array umdrehen.");
		System.out.println("[7] Programm beenden.");
		
		System.out.printf("%nDas Array muss zuerst befüllt werden.%n");
		int[] ref = read();

		for (boolean loop = true; loop;) {
			System.out.printf("%nAuswahl: ");
			int option = in.nextInt();

			switch (option) {
			case 1: ref = read(); break;
			case 2: print(ref); break;
			case 3: System.out.printf("Der Mittelwert des Arrays "
					+ "lautet %f%n", mean(ref)); break;
			case 4: System.out.printf("Die größte Zahl im Array "
					+ "lautet %d%n", max(ref)); break;
			case 5: sort(ref);
				System.out.println("Das Array wurde sortiert.");
				break;
			case 6: ref = reverse(ref);
				System.out.println("Das Array wurde umgedreht");
				break;
			case 7: loop = false; break;
			default: System.out.println("Fehler: Ungültige "
					+ "Auswahl. Versuchen Sie es erneut.");
			}
		}
	}
}

