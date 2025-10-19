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
            string strFirstNumber = Console.ReadLine();

            Console.WriteLine("Podaj drugą liczbę");
            string strSecondNumber = Console.ReadLine();

            int firstNumber = int.Parse(strFirstNumber);
            int secondNumber = int.Parse(strSecondNumber);

            while(firstNumber != secondNumber)
            {
                if (firstNumber > secondNumber)
                {
                    firstNumber = firstNumber - secondNumber;
                }
                else
                {
                    secondNumber = secondNumber - firstNumber;
                }
            }

            Console.WriteLine("Największy wspólny dzielnik to: " + firstNumber);
        }
    }
}
