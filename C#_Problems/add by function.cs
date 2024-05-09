using System;
namespace omarapp{
public class Program
{
    
    
    
    public static int Sum(int a, int b)
    {
			int sum=a+b;
			return(sum);
			Console.WriteLine(sum);
			
    }
	
	public static void Main(string[]args){
		int x=int.Parse(Console.ReadLine());
		int y=int.Parse(Console.ReadLine());
		int result=Sum(x,y);			
		Console.WriteLine(result);

	}
}
}
