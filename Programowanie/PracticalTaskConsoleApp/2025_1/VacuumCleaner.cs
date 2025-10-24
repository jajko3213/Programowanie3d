namespace PracticalTaskConsoleApp._2025_1
{
    internal class VacuumCleaner : Device
    {
        private bool isTurnedOn = false;

        public void on()
        {
            if (!isTurnedOn)
            {
                isTurnedOn = true;
                base.ShowInfo("Odkurzacz jest już włączony");
            }
        }

        public void off()
        {
            if (isTurnedOn)
            {
                isTurnedOn = false;
                base.ShowInfo("Odkurzacz wyłączono");
            }   
        }
    }
}
