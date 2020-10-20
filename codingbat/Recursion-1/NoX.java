/*
 * CodingBat Java Activity "noX" from Recursion-1 section.
 * codingbat.com
 */

 /*
 * INSTRUCTIONS
 * Given a string, compute recursively a new string where all the 'x' chars 
 * have been removed.
 * 
 * noX("xaxb") -> "ab"
 * noX("abc") -> "abc"
 * noX("xx") -> ""
 */

public class NoX 
{
	public String noX(String str)
	{
		return !str.contains("x") ? str : noX(str.replace("x",""));
	}
}