/**
 * CodingBat Java Activity "max1020" from Warmup1.
 * codingbat.com
 */

 /**
 * INSTRUCTIONS: Given 2 positive int values, return the larger value that is in
 * the range 10..20 inclusive, or return 0 if neither is in that range.
 * 
 * max1020(11, 19) -> 19 max1020(19, 11) -> 19 max1020(11, 9) -> 11
 * 
 */

public class Max1020 
{
	public int max1020(int a, int b)
	{
	  return a > 9 && a < 21 || b > 9 && b < 21 ? a > b && a > 9 && a < 21 ? a : b > 9 && b < 21 ? b : a :0;
	}
}