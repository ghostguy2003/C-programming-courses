using System;
using System.Runtime.InteropServices;
using System.Transactions;



namespace omar
{
    class Program
    {
        public static void Main(string[] args)
        {
            int total = 0;
            
            int[] grades = new int[1000];
            Console.WriteLine("How many students do you have?");
            int input = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter their grades:");
            for (int i = 0; i < input; i++)
            {
                grades[i] = int.Parse(Console.ReadLine());
                total = total + grades[i];
            }
            Console.WriteLine("-------------------------------------------------------");
            int average = total / input;
            Console.WriteLine("Student average is:");
            Console.WriteLine(average);
        }
    }
