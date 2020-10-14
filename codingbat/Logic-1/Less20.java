/**
 * CodingBat Java Activity "less20" from Logic1.
 * codingbat.com
 */

 /**
 * INSTRUCTIONS: Return true if the given non-negative number is 1 or 2 less
 * than a multiple of 20. So for example 38 and 39 return true, but 40 returns
 * false. See also: Introduction to Mod:
 * 
 * https://codingbat.com/doc/practice/mod-introduction.html
 * 
 * less20(18) -> true
 * less20(19) -> true
 * less20(20) -> false
 */

public class Less20
{
	public boolean less20(int n)
	{
	  return (n + 2) % 20 == 0 || (n + 1) % 20 == 0;
	}
}
