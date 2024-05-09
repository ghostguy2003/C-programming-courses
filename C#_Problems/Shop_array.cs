namespace omar
{
    class Program
    {
        public static void Main(string[] args)
        {


            
            
            Console.WriteLine("How many products do you want to add:");
            int input = int.Parse(Console.ReadLine());
            int[] id = new int[1000];
            double[] price = new double[1000];
            int[] quantity = new int[1000];

            for (int i = 0; i < input; i++)
            {
                Console.WriteLine("Product ID:");
                id[0] = int.Parse(Console.ReadLine());

                Console.WriteLine("Product Price:");
                price[0] = double.Parse(Console.ReadLine());

                Console.WriteLine("Product Qunatity:");
                quantity[0] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine("---------------------------------------");
            Console.WriteLine("Products with prices greater than 500:");

            for (int i = 0; i < input; i++) 
            {
                if (price[i] > 500)
                {
                    Console.WriteLine(id[i]);
                }
            }
            Console.WriteLine("---------------------------------------");

            Console.WriteLine("Products with quantites less than 10;");

            for (int i = 0; i < input; i++)
            {
                if (quantity[i] < 10)
                {
                    Console.WriteLine(id[i]);
                }
            }
        }
    }
}
