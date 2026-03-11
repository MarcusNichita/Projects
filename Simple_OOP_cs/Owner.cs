using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Vehicle_Managing
{
    public class Owner
    {
        private string Name { get; set; }
        private double Age { get; set; }
        public void Greetings(string g)
        {
            Console.WriteLine("Greeting from Owner: " + g);
        }
        public Owner()
        {
            Name = "Empty";
            Age = 0;
           //Console.WriteLine("No parameters(Owner)");
        }
        public Owner(string name, int age)
        {
            this.Name = name;
            this.Age = age;
            //Console.WriteLine("Two parameters(Owner)");
        }
    }
}
