using PracticalTaskConsoleApp.Czerwiec2023_6;
using PracticalTaskConsoleApp.Styczeń2023_1;

/*
Task1 task1 = new Task1();
task1.Task();

Notatka notatkaPierwsza = new Notatka("Zakupy", "Kupić mleko, chleb i jajka.");
Notatka notatkaDruga = new Notatka("Praca", "Zakończyć raport do piątku.");

Console.WriteLine("Pierwsza notatka:");
notatkaPierwsza.WyswietlNotatke();
notatkaPierwsza.Diagnostyczna();

Console.WriteLine("\nDruga notatka:");
notatkaDruga.WyswietlNotatke();
notatkaDruga.Diagnostyczna();
*/

Film film = new Film();
Console.WriteLine("Początkowa liczba wypożyczeń: " + film.PobierzLiczbeWyporzyczen() + ". Początkowy tytuł: " + film);
film.UstawTytul("Piraci z karaibów 1");
Console.WriteLine("Tytuł po ustawieniu: " + film.PobierzTytul());


