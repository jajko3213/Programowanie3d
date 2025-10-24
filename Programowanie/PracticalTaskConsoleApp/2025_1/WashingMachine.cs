namespace PracticalTaskConsoleApp._2025_1
{
    internal class WashingMachine : Device
    {
        private int washingProgramNumber = 0;

        public int SetWashingProgram(int number)
        {
            if (number >= 1 && number <= 12)
            {
                washingProgramNumber = number;
            }
            else
            {
                washingProgramNumber = 0;
            }
            return washingProgramNumber;
        }
    }
}
