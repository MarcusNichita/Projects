using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Vehicle_Managing;

namespace Vehicle_Managing
{
    class Mains
    {
        static void Main(string[] args)
        {
            var Vehicle_1 = new Vehicle("Car", "Diesel", "Euro 5", 2010, 220000, 2000);
            Vehicle_1.Plate("SM 38 MRC");
            var Porsche_1 = new Porsche("Brabus", 120000);
            Porsche_1.Plate("B 777 LCK");
            var Audi_1 = new Audi("MTM", 70000);
            Audi_1.Plate("CJ 01 ZEW");
            var S8_1 = new S8("NO S_Line", "Quattro");
            S8_1.Plate("FearLess");

            dynamic Vehicle_2 = new Vehicle();
            dynamic Porsche_2 = new Porsche();
            dynamic Audi_2 = new Audi();
            dynamic S8_2 = new S8();

            Console.WriteLine("Owner and Vehicle");
            Vehicle_1.Greetings("Hello");
            Console.WriteLine("Owner and Audi");
            Audi_1.Greetings("Hi");
            Console.WriteLine("Owner and Porsche");
            Porsche_1.Greetings("Guten Tag");
            Console.WriteLine("Owner and C63");
            S8_1.Greetings("Salut");

            Console.WriteLine("static");
            Console.WriteLine("Vehicle_1");
            Vehicle_1.Top_Speed(211);
            Console.WriteLine("Porsche_1");
            Porsche_1.Top_Speed(290);
            Console.WriteLine("Audi_1");
            Audi_1.Top_Speed(220);
            Console.WriteLine("S8_1");
            S8_1.Top_Speed(260);

            Console.WriteLine("dynamic");
            Console.WriteLine("Vehicle_2");
            Vehicle_2.Tire_Size(17);
            Console.WriteLine("Porsche_2");
            Porsche_2.Tire_Size(20);
            Console.WriteLine("Audi_2");
            Audi_2.Tire_Size(18);
            Console.WriteLine("S8_2");
            S8_2.Tire_Size(21);

            Vehicle_1.Transport();
            Console.ReadKey();
        }
    }
}
