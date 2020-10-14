/**
 * CodingBat Java Activity "lessBy10" from Logic1.
 * codingbat.com
 */

 /**
 * INSTRUCTIONS: Given three int values, a b c, return true if one of them is 10
 * or more less than one of the others.
 * 
 * lessBy10(1, 7, 11) -> true 
 * lessBy10(1, 7, 10) -> false
 * lessBy10(11, 1, 7) -> true
 * 
 */

public class LessBy10
{
  public boolean lessBy10(int a, int b, int c)
  {
    return a - 9 > b || a - 9 > c || b - 9 > c || b - 9 > a || c - 9 > a || c - 9 > b;
  }
}
