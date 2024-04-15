using System;
using System.ComponentModel;
using System.Runtime.InteropServices;
using System.Transactions;




namespace omar
{
    class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Input number:");
            int input = int.Parse(Console.ReadLine());

            if (input < 0)
            {
                Console.WriteLine("Please enter a positive number!");
            }
            else
            {
                double fact = 1;
                for (int i = 1; i <= input; i++)
                {
                    fact = fact * i;
                }
                Console.WriteLine(fact);
            }
        }
    }
}
