/*
 * CodingBat Java Activity "dividesSelf" from AP-1 section.
 * codingbat.com
 */

 /*
 * INSTRUCTIONS
 * We'll say that a positive int divides itself if every digit in the number 
 * divides into the number evenly. So for example 128 divides itself since 1, 2, 
 * and 8 all divide into 128 evenly. We'll say that 0 does not divide into anything 
 * evenly, so no number with a 0 digit divides itself. Note: use % to get the 
 * rightmost digit, and / to discard the rightmost digit.
 * 
 * dividesSelf(128) -> true
 * dividesSelf(12) -> true
 * dividesSelf(120) -> false
 */

public class DividesSelf 
{	
  public boolean dividesSelf(int n)
  {
    int initial = n;
    while (n > 0)
    {
      int middle = n % 10;
      if (middle == 0 || initial % middle != 0)
      {
        return false;
      }
      n /= 10;
    }
    return true;
  }
}
