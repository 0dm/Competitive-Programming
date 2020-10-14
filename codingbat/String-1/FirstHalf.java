/*
 * CodingBat Java Activity "firstHalf" from String-1 section.
 * codingbat.com
 */

 /*
 * INSTRUCTIONS
 * 
 * Given a string of even length, return the first half. So the string 
 * "WooHoo" yields "Woo".
 * 
 * firstHalf("WooHoo") -> "Woo"
 * firstHalf("HelloThere") -> "Hello"
 * firstHalf("abcdef") -> "abc"
 */

public class FirstHalf 
{
	public String firstHalf(String str)
	{
		return str.substring(0, str.length() / 2);
	}
}

