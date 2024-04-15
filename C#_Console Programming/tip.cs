using System;
using System.Runtime.InteropServices;
using System.Transactions;



namespace omar
{
    class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("How many people in the group?");
            int people = int.Parse(Console.ReadLine());
            Console.WriteLine("What is the bill?");
            double bill = double.Parse(Console.ReadLine());
            double total = 0;
            double tip = 0;

            if (bill < 50)
            {
                 tip = people * 2;
                total = bill + tip;
            }
            else if (bill>=50 && bill <= 300)
            {
                tip = (bill * 0.1) + (3 * people);
                total = bill + tip;
            }
            else
            {
                tip = (bill * 0.15);
                total = bill + tip;
            }

            Console.WriteLine("----------------------------------------");

            Console.WriteLine("Sub-total:{0}",bill);
            Console.WriteLine("Tips:{0}",tip);
            Console.WriteLine("Total:{0}",total);
        }
    }
}
