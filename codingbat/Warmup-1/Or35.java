/**
 * CodingBat Java Activity "or35" from Warmup1.
 * codingbat.com
 */

/**
 * INSTRUCTIONS: Return true if the given non-negative number is a multiple of 3
 * or a multiple of 5. Use the % "mod" operator -- see Introduction to Mod
 * 
 * https://codingbat.com/doc/practice/mod-introduction.html
 * 
 * or35(3) -> true 
 * or35(5) -> true 
 * or35(8) -> false
 */

public class Or35
{
	public boolean or35(int n)
	{
		return n % 3 == 0 || n % 5 == 0 ? true : false;
	}
}
