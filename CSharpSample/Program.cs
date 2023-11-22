namespace CSharpSample;

internal class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine($"Csharp");
        /*       int a = 12345;
               const int c = 12345;
               //c = c + 1;  //エラー
               a = a + c;  //エラーにならない
               int l1 = 0b11111;//出力値：31    （ 2進リテラル）
               int l2= 010;//出力値：8     （ 8進リテラル）
               int l3 = 10 - 1;//出力値：9     （10進リテラル）
               int l4 = 0x10;//出力値：16    （16進リテラル）
               //int l5= 123'456; // C#ではエラー
               var  height = 167.5f;   //floatになってる
               var weight = 60.0;      //doubleになっている

               weight = height;
               height = (float)weight;

               int[] x = { 10, 2, 300, -4 };
               for (int i = 0; i <= 100; i++)
               {
                   //cout << "x[" << i << "]=" << x[i] << endl;
                   Console.WriteLine($"x[{i}]={x[i]}");
               }*/
        DimentionTest();
    }
    static private void DimentionTest()
    {
        List<int> table = new List<int>{ 1, 2, 7, -3, 5 };
        int sum = 0;
        foreach (var val in table)
        {
            if (val > 0)
            {
                Console.WriteLine(val);
                sum += val;
            }
        }
    }
}