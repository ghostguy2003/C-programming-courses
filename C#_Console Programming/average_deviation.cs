using System;
using System.Runtime.InteropServices;
using System.Transactions;



namespace omar
{
    class Program
    {
        public static void Main(string[] args)
        {
            float[] arr = new float[10];
            float total = 0;
            Console.WriteLine("Enter your numbers:");
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = int.Parse(Console.ReadLine());
                total = total + arr[i];
            }
            
            float average = total / (arr.Length);
            
            for (int i = 0; i < arr.Length; i++)
            {
                float farav = Math.Abs(arr[i] - average);
                Console.WriteLine("The number {0} is far off the average by {1}", arr[i], farav);
            }




        }
    }
}
