using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Vehicle_Managing
{
    public class S8 : Audi
    {
        private string S_Line { get; set; }
        private string Quattro { get; set; }
        public void Plate(string pl)
        {
            Console.WriteLine("(Method from S8) plate number: " + pl);
        }
        public void Top_Speed(int speed)
        {
            Console.WriteLine("(S8) Top Speed is: " + speed);
        }
        public virtual void Tire_Size(int size)
        {
            Console.WriteLine("(S8) Tire Size is: " + size);
        }
        public S8()
        {
            S_Line = "Empty";
            Quattro = "Empty";
            //Console.WriteLine("No parameter(S8)");
        }
        public S8(string sline, string qt)
        {
            S_Line = sline;
            Quattro = qt;
            //Console.WriteLine("Two parameters(S8)");
        }
    }
}
