using System;



namespace omar
{
    class Program
    {
        public static void Main(string[] args)
        {
            int[] arr = new int[1000];
            int max=0;
            for (int i = 0; i < 1000; i++)
            {
                arr[i] = i;
            }


            for (int i = 0; i < 1000; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
            }
            Console.WriteLine(max);

      
        }
    }
}
