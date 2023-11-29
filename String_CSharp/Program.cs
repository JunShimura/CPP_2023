namespace String_CSharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str1 = "Hello"+10;
            Console.WriteLine(str1);
            var str2 = "Hello, " + "World!";
            Console.WriteLine("Hello, " + "World!");
            string cstr = "hello";                      //Cスタイルの文字列
            var c = cstr[5];
            // cstr[5] = 0x40; ERROR 

        }
    }
}