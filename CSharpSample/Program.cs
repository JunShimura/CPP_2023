namespace CSharpSample
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine($"Csharp");
            int[] x = { 10, 2, 300, -4 };
            for (int i = 0; i <= 4; i++)
            {
                //cout << "x[" << i << "]=" << x[i] << endl;
                Console.WriteLine($"x[{i}]={x[i]}");
            }
        }
    }
}