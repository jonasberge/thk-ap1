/**
 * Eine Kartoffel.
 */
public class Potato
{
	private int thickness;

	/**
	 * Erstellt eine Kartoffel mit einer bestimmten Dicke.
	 * @param thickness die Dicke der Kartoffel.
	 */
	public Potato(int thickness)
	{
		this.thickness = thickness;
	}

	/**
	 * Pflückt die Kartoffel und gibt ihre Dicke zurück.
	 * @return die Dicke der Kartoffel.
	 */
	public int pick()
	{
		return thickness;
	}
}
