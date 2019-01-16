import java.util.Scanner;

public class Exercise33
{
	private static final Scanner in = new Scanner(System.in);

	private static final char CHAR_NEEDLE = '*';
	private static final char CHAR_TRUNK = '#';
	private static final char CHAR_AIR = ' ';

	private static void printChar(char c, int n)
	{
		for (int i = 0; i < n; ++i)
			System.out.print(c);
	}

	public static boolean drawTree(int height)
	{
		if (height < 2) return false;

		int crownHeight = height - 1;
		for (int i = 0; i < crownHeight; ++i) {
			int numAir = crownHeight - i - 1;
			int numNeedle = 2 * i + 1;
			printChar(CHAR_AIR, numAir);
			printChar(CHAR_NEEDLE, numNeedle);
			System.out.println();
		}

		printChar(CHAR_AIR, crownHeight - 1);
		System.out.println(CHAR_TRUNK);
		return true;
	}

	public static void main(String[] args)
	{
		int height;

		do {
			System.out.print("Geben Sie eine Höhe ein: ");
			height = in.nextInt();
		} while (!drawTree(height));
	}
}
