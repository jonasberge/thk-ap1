public class Rational
{
	private int numerator;
	private int denominator;

	public Rational(int numerator, int denominator)
	{
		this.numerator = numerator;
		this.denominator = denominator;
	}

	public void print()
	{
		simplify();
		System.out.printf("%d/%d",
			numerator, denominator);
	}

	private void simplify()
	{
		int divisor = gcd(numerator, denominator);
		numerator /= divisor;
		denominator /= divisor;
	}

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
