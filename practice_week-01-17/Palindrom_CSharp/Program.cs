using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
  class Program
  {
    static bool check_for_palindrom(string str)
    {
      str = str.ToLower();
      str = System.Text.RegularExpressions.Regex.Replace(str, @"([^a-zA-Z0-9_]|^\s)", string.Empty);
      int length = str.Length - 1;
      for (int i = 0; i < length; i++) {
        if (str[i] != str[length - i]) {
          return false;
        }
      }
      return true;
    }
    static void Main(string[] args)
    {
      string word = "A!n!!  _na";
      if (check_for_palindrom(word))
      {
        Console.WriteLine("Yes, that's a palindrom.");
      } else {
        Console.WriteLine("No, that's not.");
      }
    }
  }
}
