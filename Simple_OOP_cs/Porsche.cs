using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Vehicle_Managing
{
    public class Porsche : Vehicle
    {
        private string Tunning_Type { get; set; }
        private double Tunning_Price { get; set; }
        public void Plate(string pl)
        {
            Console.WriteLine("(Method from Porsche) plate number: " + pl);
        }
        public void Top_Speed(int speed)
        {
            Console.WriteLine("(Porsche) Top Speed is: " + speed);
        }
        public virtual void Tire_Size(int size)
        {
            Console.WriteLine("(Porsche) Tire Size is: " + size);
        }
        public Porsche()
        {
            Tunning_Price = 0;
            Tunning_Type = "Empty";
            //Console.WriteLine("No parameters(Porsche)");
        }
        public Porsche(string tt, double tp)
        {
            Tunning_Type = tt;
            Tunning_Price = tp;
            //Console.WriteLine("Two parameters(Porsche)");
        }
    }
}
