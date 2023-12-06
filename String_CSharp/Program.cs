using System.Security.Cryptography.X509Certificates;

namespace String_CSharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str1 = "Hello" + 10;
            Console.WriteLine(str1);
            var str2 = "Hello, " + "World!";
            Console.WriteLine("Hello, " + "World!");
            string cstr = "hello";                      //Cスタイルの文字列
            var c = cstr[4];
            //cstr[4] = '0';// 0x40; ERROR
            cstr = cstr.Replace('o', '0');
            Console.WriteLine(cstr);
            int x = 10;
            double y = 3.1415926535;
            //printf("x= %d,y=%f\n", x, y);
            Console.WriteLine("x= {0},y={1}", x, y);
            Console.WriteLine($"x= {x},y={y}");
            string s = $"x= {x},y={y}";

        }
    }
}