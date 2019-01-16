public class Exercise40
{
	public static int binsearch(int[] arr, int val)
	{
		final int n = arr.length;
		if (n == 0) return -1;

		int begin = 0, mid = 0;
		for (int end = n - 1; true;) {
			mid = (begin + end) / 2;
			if (begin >= end) break;
			if (arr[mid] == val) break;
			if (arr[mid] < val)
				begin = mid + 1;
			else	end = mid - 1;
		}

		int prev = mid - 1;
		while (mid > begin && arr[prev] == val)
			mid = prev--;

		return arr[mid] == val ? mid : -1; 
	}
	
	public static void main(String[] args)
	{
		int arr[] = { 1, 4, 5, 8, 9, 10, 10, 11, 14 };
		int index = binsearch(arr, Integer.parseInt(args[0]));
		System.out.printf("Index: %d%n", index);
	}
}

