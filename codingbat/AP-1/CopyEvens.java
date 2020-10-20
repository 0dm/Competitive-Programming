 import java.util.Arrays;

/*
 * CodingBat Java Activity "copyEvens" from AP-1 section.
 * codingbat.com
 */

 /*
 * INSTRUCTIONS
 * Given an array of positive ints, return a new array of length "count" containing 
 * the first even numbers from the original array. The original array will contain 
 * at least "count" even numbers.
 * 
 * copyEvens([3, 2, 4, 5, 8], 2) -> [2, 4]
 * copyEvens([3, 2, 4, 5, 8], 3) -> [2, 4, 8]
 * copyEvens([6, 1, 2, 4, 5, 8], 3) -> [6, 2, 4]
 */

public class CopyEvens 
{
  public int[] copyEvens(int[] nums, int count)
  {
    int[] arr = new int[count];
    int x = 0;

    for (int i = 0; x < count; i++)
    {
      if (nums[i] % 2 == 0)
      {
        arr[x] = nums[i];
        x++;
      }
    }
    return arr;
	}
}