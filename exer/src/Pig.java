/**
 * Ein Schwein.
 */
public class Pig
{
	private static final int MIN_MOVE_SATURATION = 4;
	private static final int MIN_MOVE_WEIGHT = 11;
	private static final int MOVE_SATURATION_LOSS = 4;
	private static final int MOVE_WEIGHT_LOSS = 1;
	private static final int MAX_SATURATION = 100;

	private String name;
	private int weight;
	private int saturation;

	/**
	 * Erstellt ein Schwein mit einem Namen, Gewicht und Sättigungsgrad.
	 * @param name der Name.
	 * @param weight das Gewicht.
	 * @param saturation der Sättigungsgrad.
	 */
	public Pig(String name, int weight, int saturation)
	{
		this.name = name;
		this.weight = weight;
		this.saturation = saturation;
	}

	/**
	 * Das Schwein macht bewegt sich und bekommt Hunger oder
	 * verliert an Gewicht. Falls es keine Kraft dazu hat wird
	 * eine entsprechend Nachricht ausgegeben.
	 */
	public void move()
	{
		if (saturation >= MIN_MOVE_SATURATION) {
			saturation -= MOVE_SATURATION_LOSS;
			return;
		}

		if (weight >= MIN_MOVE_WEIGHT) {
			weight -= MOVE_WEIGHT_LOSS;
			return;
		}

		System.out.println("Ich bin zu schlapp!");
	}

	/**
	 * Füttert das Schwein mit einer Kartoffel, wobei die
	 * Dicke der Kartoffel dessen Nährwert entspricht.
	 */
	public void feed(Potato potato)
	{
		int nutritionalValue = potato.pick();
		if (nutritionalValue <= 0) {
			System.out.println("Schade! Wieder nix zu fressen.");
			return;
		}

		saturation += nutritionalValue;
		if (saturation > MAX_SATURATION) {
			weight += (saturation - MAX_SATURATION) / 2;
			saturation = MAX_SATURATION;
		}
	}

	/**
	 * Das Schwein grunzt seinen Namen, Gewicht und Sättigungsgrad.
	 */
	public void grunt()
	{
		System.out.printf("Hallo, ich bin %s.%n", name);
		System.out.printf("Mein Gewicht ist: %d.%n", weight);
		System.out.printf("Mein Sättigungsgrad ist: %d.%n", saturation);
	}
}

