import java.util.Scanner;

public class Exercise32
{
	public static int ackermann(int n, int m)
	{
		if (n == 0) return m + 1;
		if (m == 0) return ackermann(n - 1, 1);
		return ackermann(n - 1, ackermann(n, m - 1));
	}

	public static void main(String[] args)
	{
		System.out.println("Berechnung des Ackermann-Werts "
			+ "a(n, m) zweier ganzer Zahlen n und m.");
		Scanner in = new Scanner(System.in);

		System.out.print("Geben Sie einen Wert für n ein: ");
		int n = in.nextInt();

		System.out.print("Geben Sie einen Wert für m ein: ");
		int m = in.nextInt();
		
		int a = ackermann(n, m);
		System.out.printf("Ackermann-Wert a(%d, %d) = %d%n", n, m, a);
	}
}

