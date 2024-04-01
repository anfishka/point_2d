using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {

            //1) Написать консольное приложение, принимающе 2 числа и выводящее их сумму 

            Console.WriteLine($"Sum: {int.Parse(Console.ReadLine()) + int.Parse(Console.ReadLine())} ");
            Console.WriteLine("---------------------------");

            //2) Написать консольное приложение,принимающее 2 числа КАК АРГУМЕНТЫ КОММАНДНОЙ СТРОКИ и выводящее их сумму  в консоль
            string[] allArgs = Environment.GetCommandLineArgs();
            Console.BackgroundColor = ConsoleColor.Magenta;
            Console.BackgroundColor = ConsoleColor.Black;
            Console.WriteLine("Args:");

            Console.BackgroundColor = ConsoleColor.Blue;
            for (int i = 0; i < allArgs.Length; i++)
            {
                Console.WriteLine(allArgs[i]);
            }

            Console.BackgroundColor = ConsoleColor.Green;
            if (allArgs.Length >= 3)
            {
                Console.WriteLine($"{allArgs[1]} + {allArgs[2]} = {int.Parse(allArgs[1]) + int.Parse(allArgs[2])}");
            }
            else
            {
                Console.WriteLine($"Please provide two valid integer arguments.");
            }

            Console.BackgroundColor = ConsoleColor.Black;
            Console.WriteLine("Out sys_cmd_args.exe");
            Console.WriteLine("---------------------------");

            //3) Переделать прошлое задание дав именные параметры в формате имя:значение
            string[] allArguments = Environment.GetCommandLineArgs();
            int firstNumber;
            int secondNumber;
            Console.BackgroundColor = ConsoleColor.Magenta;
            Console.BackgroundColor = ConsoleColor.Black;
            Console.WriteLine("Arguments:");

            Console.BackgroundColor = ConsoleColor.Blue;
            for (int i = 0; i < allArguments.Length; i++)
            {
                Console.WriteLine(allArguments[i]);
            }

            if (allArguments.Length >= 3)
            {
                firstNumber = int.Parse(allArguments[1]);
                secondNumber = int.Parse(allArguments[2]);
                Console.BackgroundColor = ConsoleColor.Green;
                Console.WriteLine($"first value : {firstNumber}\nsecond value :{secondNumber} \n{firstNumber} + {secondNumber} = {firstNumber + secondNumber}");
            }
            else
            {
                Console.WriteLine($"Please provide two valid integer arguments.");
            }

            Console.BackgroundColor = ConsoleColor.Black;
            Console.WriteLine("Out sys_cmd_args.exe");
            Console.WriteLine("---------------------------");

            //4) Запустить гуглХром в инкогнито режиме на полный экран с страницей майстата
            // myApp --Calc --Notepad

            string url = "https://mystat.itstep.org";
            string configs = "--kiosk";
            try
            {
                Process.Start("\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\"", $"{configs} {url}");
            }
            catch (Exception ex)
            {
                Console.WriteLine($"An error occurred while trying to launch Google Chrome browser: {ex.Message}");
            }



            Console.WriteLine("---------------------------");





        }
    }
}
