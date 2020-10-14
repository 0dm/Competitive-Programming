/*
 * CodingBat Java Activity "countHi" from Recursion-1 section.
 * codingbat.com
 */

 /*
 * INSTRUCTIONS
 * Given a string, compute recursively (no loops) the number of times 
 * lowercase "hi" appears in the string.
 * 
 * countHi("xxhixx") -> 1
 * countHi("xhixhix") -> 2
 * countHi("hi") -> 1
 */

public class CountHi 
{
  public int countHi(String str)
  {
    int count = 0;

    if (str.length() < 2)
      return 0;

    if (str.substring(0, 2).equals("hi"))
      count++;

    return countHi(str.substring(1)) + count;
  }
}
