using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace Vehicle_Managing
{
    public class Audi : Vehicle
    {
        private string Tunning_Type { get; set; }
        private double Tunning_Price { get; set; }
        protected string Manufacturer_Location;
        public void Plate(string pl)
        {
            Console.WriteLine("(Method from Audi) plate number: " + pl);
        }
        public void Top_Speed(int speed)
        {
            Console.WriteLine("(Audi) Top Speed is: " + speed);
        }
        public virtual void Tire_Size(int size)
        {
            Console.WriteLine("(Audi) Tire Size is: " + size);
        }
        public Audi()
        {
            Tunning_Price = 0;
            Tunning_Type = "Empty";
            //Console.WriteLine("No parameters(Audi)");
        }
        public Audi(string tt, double tp)
        {
            Tunning_Type = tt;
            Tunning_Price = tp;
            //Console.WriteLine("Two parameters(Audi)");
        }
    }
}