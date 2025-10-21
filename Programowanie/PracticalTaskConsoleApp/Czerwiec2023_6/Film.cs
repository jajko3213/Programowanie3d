namespace PracticalTaskConsoleApp.Czerwiec2023_6
{
    internal class Film
    {
        protected string tytul;
        protected int liczbaWypozyczen;

        public Film() {
            tytul = "";
            liczbaWypozyczen = 0;
        }

        public void UstawTytul(string nowyTytul)
        {
            if (nowyTytul.Length <= 20)
            {
                tytul = nowyTytul;
            }
            else
            {
                throw new ArgumentException("Tytuł może mieć maksymalnie 20 znaków.");
            }
        }


        public string PobierzTytul()
        {
            return tytul;
        }

        public int PobierzLiczbeWyporzyczen()
        {
            return liczbaWypozyczen;
        }

        public void DodajWypozyczenie()
        {
            liczbaWypozyczen++;
        }
    }
}
