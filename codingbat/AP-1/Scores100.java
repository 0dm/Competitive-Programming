/*
 * CodingBat Java Activity "scores100" from AP-1 section.
 * codingbat.com
 */

 /*
* INSTRUCTIONS
* Given an array of scores, return true if there are scores of 100 next to each other in the array.  
* The array will be length 2 or more.
* 
* scores100([1, 100, 100]) -> true
* scores100([1, 100, 99, 100]) -> false
* scores100([100, 1, 100, 100]) -> true
*/

public class Scores100 
{
  public boolean scores100(int[] scores)
  {
    for (int i = 0; i < scores.length - 1; i++)
    {
      if (scores[i] == 100 && scores[i + 1] == 100)
      {
        return true;
      }
    }
    return false;
  }

}

