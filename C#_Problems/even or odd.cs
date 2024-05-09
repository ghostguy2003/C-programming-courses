using System;

namespace Solution
{
  public class SolutionClass
  {
    public static string EvenOrOdd(int number)
    {
      string s="Even";
      string b="Odd";
      if (number%2==0){
        return s;
      }
      return b;
    }
  }
}
