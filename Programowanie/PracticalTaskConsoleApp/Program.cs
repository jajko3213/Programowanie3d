using PracticalTaskConsoleApp.Czerwiec2023_6;
using PracticalTaskConsoleApp.Styczeń2023_1;


Console.WriteLine("Program oblicza NWD dwóch całkowitych liczb dodatnich.");

try
{
    Console.Write("Podaj pierwszą liczbę a: ");
    string strA = Console.ReadLine();
    int a = int.Parse(strA);

    Console.Write("Podaj drugą liczbę b: ");
    string strB = Console.ReadLine();
    int b = int.Parse(strB);

    Task1 task1 = new Task1();

    int nwd = task1.Task(a, b);

    Console.WriteLine($"Największy wspólny dzielnik liczb {a} i {b} wynosi: {nwd}");
}
catch (FormatException)
{
    Console.WriteLine("Błąd: Wprowadzono nieprawidłowe dane");
}
catch (ArgumentException ex)
{
    Console.WriteLine($"Błąd: {ex.Message}");
}

Notatka notatkaPierwsza = new Notatka("Zakupy", "Kupić mleko, chleb i jajka.");
Notatka notatkaDruga = new Notatka("Praca", "Zakończyć raport do piątku.");

Console.WriteLine("Pierwsza notatka:");
notatkaPierwsza.WyswietlNotatke();
notatkaPierwsza.Diagnostyczna();

Console.WriteLine("\nDruga notatka:");
notatkaDruga.WyswietlNotatke();
notatkaDruga.Diagnostyczna();

Film film = new Film();
Console.WriteLine("Początkowa liczba wypożyczeń: " + film.PobierzLiczbaWyporzyczen());
Console.WriteLine("Początkowy tytuł: " + film.PobierzTytul());
film.UstawTytul("Piraci z karaibów 1");
Console.WriteLine("Tytuł po ustawieniu: " + film.PobierzTytul());
Console.WriteLine("Liczba wypożyczeń przed inkrementacją " + film.PobierzLiczbaWyporzyczen());
film.DodajWypozyczenie();
Console.WriteLine("Liczba wypożyczeń po inkrementacji " + film.PobierzLiczbaWyporzyczen());



