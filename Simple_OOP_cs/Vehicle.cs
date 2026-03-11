using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Vehicle_Managing;

namespace Vehicle_Managing
{
    public class Vehicle : ITrasnsport_Method
    {
        //private
        private string Fuel_Type { get; set; }
        private string Poluation { get; set; }
        private double Year_Of_Fabrication { get; set; }
        private double Kilometres { get; set; }
        private double Cubic_Capacity { get; set; }
        private Owner _g;
        //protected
        protected double Value;
        //public
        public string Vehicle_Type;
        public void Transport()
        {
            Console.WriteLine("Interface from Itransport_Method");
        }
        public void Plate(string pl)
        {
            Console.WriteLine("(Method from Vehicle) plate number: " + pl);
        }
        public void Greetings(string g)
        { 
            _g.Greetings(g);
        }
        public void Top_Speed(int speed)
        {
            Console.WriteLine("(Vehicle) Top Speed is: " + speed);
        }
        public virtual void Tire_Size(int size)
        {
            Console.WriteLine("(Vehicle) Tire Size is: "+ size);
        }
        public Vehicle()
        {
            _g = new Owner();
            Vehicle_Type = "Empty";
            Fuel_Type = "Empty";
            Poluation = "Empty";
            Year_Of_Fabrication = 0;
            Kilometres = 0;
            Cubic_Capacity = 0;
            //Console.WriteLine("No parameters(Vehicle)");
        }
        public Vehicle(string vt, string ft, string pol, double yf)
        {
            _g = new Owner();
            this.Vehicle_Type = vt;
            this.Fuel_Type = ft;
            this.Poluation = pol;
            this.Year_Of_Fabrication = yf;
            Kilometres = 0;
            Cubic_Capacity = 0;
            //Console.WriteLine("Four parameters(Vehicle)");
        }
        public Vehicle(string vt, string ft, string pol, double yf, double km, double cc)
        {
            _g = new Owner();
            this.Vehicle_Type = vt;
            this.Fuel_Type = ft;
            this.Poluation = pol;
            this.Year_Of_Fabrication = yf;
            this.Kilometres = km;
            this.Cubic_Capacity = cc;
            //Console.WriteLine("Six parameters(Vehicle)");
        }
    }
}