namespace PracticalTaskConsoleApp.Styczeń2023_1
{
    /**********************************************
    nazwa funkcji: Task
    opis funkcji: Oblicza największy wspólny dzielnik (NWD) dwóch liczb całkowitych dodatnich metodą Euklidesa.
    parametry: a - pierwsza liczba całkowita dodatnia (int), b - druga liczba całkowita dodatnia (int)
    zwracany typ i opis: int - największy wspólny dzielnik (NWD) dwóch liczb całkowitych
    autor: Dawid Strzelecki
    ***********************************************/

    internal class Task1
    {
        //Algorytm Euklidesa
        public int Task(int a, int b)
        {
            if (a <= 0 || b <= 0)
            {
                throw new ArgumentException("Liczby muszą być dodatnie.");
            }

            while (a != b)
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

            return a;
        }
    }
}
