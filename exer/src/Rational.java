/**
 * Klasse zur Darstellung eines Bruchs bzw. einer rationalen Zahl.
 * @author Tadeg Jonas van den Berg
 * @author www.gm.fh-koeln.de/~inf1424
 */
public class Rational
{
	private int numerator;
	private int denominator;

	/**
	 * Erstellt einen Bruch mit entsprechendem Zähler und Nenner.
	 * @param numerator der Zähler.
	 * @param denominator der Nenner.
	 */
	public Rational(int numerator, int denominator)
	{
		this.numerator = numerator;
		this.denominator = denominator;
	}

	/**
	 * Gibt den Bruch gekürzt auf der Konsole aus.
	 */
	public void print()
	{
		simplify();
		System.out.printf("%d/%d",
			numerator, denominator);
	}

	/**
	 * Kürzt den Bruch.
	 */
	private void simplify()
	{
		int divisor = gcd(numerator, denominator);
		numerator /= divisor;
		denominator /= divisor;
	}

	/**
	 * Berechnet den größten gemeinsamen Teiler (ggT) zweier Zahlen.
	 * @param a die erste Zahl.
	 * @param b die zweite Zahl.
	 */
	private int gcd(int a, int b)
	{
		while (b != 0) {
			int tmp = b;
			b = a % b;
			a = tmp;
		}

		return a;
	}
}
