using System;
using System.Xml.Linq;

namespace ext
{
    public sealed class user 
    {
        public int id { get; set; }
        public string name { get; set; }   
        public void print()
        {
            Console.WriteLine($"{id} {name}");
        }
        
    }

    //Extension class and its functions must be static.
    //Extension class function cannot override the base class function,
    //the extension function can be called in case the signature is different.
    //With extension method we don't need to subclass the base class,
    public static class AddFuncToUser
    {
        public static void print(this user u)
        {
            Console.WriteLine("Override");
        }
        public static string userData(this user u)
        {
            string user_rec = "";
            user_rec += Convert.ToString(u.id);
            return user_rec;
        }
        // Extension method cannot access the priavte/ protected fields.
        // we cannot add property as a extension method.
        // also cannot add a new variable/ field, but both can be done by inheritance.
        //public string pro1
        //{
        //    property
        //    get { return name; }
        //    set { name = value; }
        //}
    }

    public class main
    {
        public static void Main()
        {
            user u = new user();
            u.name = "Bhaskar";
            u.id = 1;
            u.print();
        }
    }
}
