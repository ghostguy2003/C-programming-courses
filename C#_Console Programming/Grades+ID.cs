using System;



namespace omar
{
    class Program
    {
        public static void Main(string[] args)
        {
            double max = 0;
            Console.WriteLine("How many students do you have?");
            int input = int.Parse(Console.ReadLine());
            int [] id=new int[input];
            double[] score = new double[input];

            for (int i = 0; i < input; i++)
            {
                Console.WriteLine("Enter student ID:");
                id[i] = int.Parse(Console.ReadLine());
                Console.WriteLine("Enter their grade:");
                score[i] = double.Parse(Console.ReadLine());
            }

            for (int i = 0; i < input; i++)
            {
                if (score[i] < 50)
                {
                    id[i] = i + 2;
                }

                if (score[i] >= 50)
                {
                    Console.WriteLine("Student {0} has passed with grade of {1}", id[i], score[i]);
                }

                
                
                if (max < score[i])
                {
                    max = score[i];
                }

            }

            Console.WriteLine("Highest grade in class is {0}", max);
        }
    }
}
