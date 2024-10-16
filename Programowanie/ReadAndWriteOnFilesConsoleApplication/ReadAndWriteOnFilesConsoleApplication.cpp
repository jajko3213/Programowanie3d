#include <iostream>
#include <fstream>

void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imiê:\n";
    std::cin >> name;

    std::cout << "Podaj swój wiek:\n";
    std::cin >> age;

    std::ofstream writeInFile;
    writeInFile.open("c:\\dane.txt", std::ios::app);

    if (writeInFile.is_open() == true)
    {
        writeInFile << name;
        writeInFile << "\n";
        writeInFile.flush();
        writeInFile << age << "\n";

        writeInFile.close();
    }
    else
        std::cout << "B³¹d otwarcia pliku\n";
}

//Odczyt zpliku tekstowego
void task2()
{
    std::string name;
    int age;
    std::ifstream readFromFile;
    readFromFile.open("c:\\dane.txt");
    if (readFromFile.is_open())
    {
        while (readFromFile.eof() == false)
        { 
            readFromFile >> name;
            readFromFile >> age;

            std::cout << "Imie: " << name << " ,wiek: " << age << "\n";
            readFromFile.close();
        }
    }
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}

/*
Dane s¹ buforowane, kiedy bufor siê przepe³ni wysy³a dane do pliku.
Metoda flush wymusza opró¿nienie bufora.
Metoda close wywo³uje metode flush.
Kartkówka z tego materia³u 17.10.2024.

-------------------------------------------------------------------

Proste zapisywanie danych do pliku.

Aby zapisaæ jakieœ dane do pliku nale¿y podpi¹æ bibliotekê #include <fstream> ,
stworzyæ zmienne i zapisaæ w nich dane, nastêpnie tworzymy zmienn¹ ze specjaln¹
klas¹ std::ofstream lub std::infstream. Otwieramy plik poprzez wywo³ane metody open 
(w niej ma sie znaleŸæ œcie¿ka do pliku oraz inne parametry w zale¿noœci co chcemy zrobiæ).
Ma ona siedem przeci¹¿eñ -> "overload". Nastêpnie sprawdzamy czy plik zosta³ otwarty 
wywo³uj¹c metodê is_open zwraca on typ logiczny bool. Jeœli uda³o siê otworzyæ plik to 
zapisujemy do plik dane. np. writeInFile << name; Operator "<<" oznacza, ¿e wysy³amy z konsoli
do pliku dane. Po wykonaniu zadañ zamykamy plik metod¹ close.

Proste odczytywanie z pliku.

Nale¿y podpi¹æ bibliotekê #include <fstream> oraz stworzyæ zmienne, które pasuj¹ do struktury 
danych w pliku np w pliku jest: Adam 80 Ewa 20. Oznacza to, ¿e nale¿y stworzyæ zmienn¹ na imiê oraz 
wiek. Tworzymy zmienn¹ o specjalnym typie ifstream. Nastêpnie otwieramy plik metod¹ open.
I sprawdzamy czy uda³o siê otworzyæ plik metod¹ is_open. Jeœli siê uda³o to mo¿na sprawdziæ
czy plik nie jest pusty pêtl¹ while, jeœli jest pusty to plik siê zamknie, a jeœli s¹ dane
to odczyta te dane z pliku poprzez specjaln¹ zmienn¹ 
np. readFromFile >> name. Operator ">>" oznacza, ¿e wysy³amy dane z pliku
na konsolê. Nastêpnie zamykamy plik. Aby sprawdziæ czy plik nie jest pusty wyko¿ystujemy
metodê eof czyli end of file. Warunek readFromFile.eof() == false.
Kursor po otwarciu pliku ustawia siê na pocz¹tku, przeskakuje on, gdy napotka pierwszy znak bia³y.

Jeœli nie ma pliku to zostanie stworzony. Jeœli podamy z³¹ œcie¿kê nie istniej¹cy dysk lub pomylimy
siê w folderach lub jeœli nie mamy uprawnieñ do otwierania, odczytywania lub modyfikacji
pliku to plik siê nie otworzy.
*/


