using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BinarySearch_CSharp
{
  class Program
  {
    public static string binarySearch(int[] inputArray, int myNum)
    {
      int min = 0;
      int max = inputArray.Length - 1;
      do
      {
        int mid = (min + max) / 2;
        if (myNum > inputArray[mid])
          min = mid + 1;
        else
          max = mid - 1;
        if (inputArray[mid] == myNum)
          return "The index of the given number: " + mid + ".";
      } while (min <= max);
      return "Array does not contain this number.";
    }
    static void Main(string[] args)
    {
      int[] numbers = new int[7] {55, 65, 98, 88, 4, 2, 1};
      Array.Sort(numbers);
      int num = 4;
      Console.WriteLine(binarySearch(numbers, num));
    }
  }
}
