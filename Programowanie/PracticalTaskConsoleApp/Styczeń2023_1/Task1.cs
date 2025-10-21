namespace PracticalTaskConsoleApp.Styczeń2023_1
{
    /**********************************************
    nazwa funkcji: Task
    opis funkcji: Oblicza największy wspólny dzielnik (NWD) dwóch liczb całkowitych metodą Euklidesa.
    parametry: brak – dane pobierane są z konsoli.
    zwracany typ i opis: void – nie zwraca wartości, funkcja wypisuje wynik w konsoli.
    autor: Dawid Strzelecki
    ***********************************************/

    internal class Task1
    {
        //Algorytm Euklidesa
        public void Task()
        {
            Console.WriteLine("Podaj pierwszą liczbę");
            string strA = Console.ReadLine();

            Console.WriteLine("Podaj drugą liczbę");
            string strB = Console.ReadLine();

            int a = int.Parse(strA);
            int b = int.Parse(strB);

            while(a != b)
            {
                if (a > b)
                {
                    a = a - b;
                }
                else
                {
                    b = b - a;
                }
            }

            Console.WriteLine("Największy wspólny dzielnik to: " + a);
        }
    }
}
