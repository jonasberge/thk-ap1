public class Exercise38
{
	public static void main(String[] args)
	{
		Pig pig = new Pig("Fritz", 10, 10);
		Potato potato1 = new Potato(10), potato2 = new Potato(20);

		pig.grunt();
		
		pig.feed(potato1);
		pig.grunt();
		
		pig.move();
		pig.grunt();

		pig.feed(potato2);
		pig.grunt();

		pig.move();
		pig.grunt();
	}
}

