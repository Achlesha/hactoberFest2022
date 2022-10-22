using System;
using System.Reflection;
using System.Security.Cryptography.X509Certificates;

namespace LinQ2SQL
{
    public class rec
    {
        public string name, pos;
        public long id;
        public rec(string name, long id, string pos)
        {
            this.name = name;
            this.id = id;
            this.pos = pos;
        }   
    }
    public class main
    {
        public static void Main()
        {
            // public partial class DataClasses1DataContext : System.Data.Linq.DataContext
            // this class of designer file, is the entry point for the Database.

            string Connection_String = "Data Source = LAP-55436; Initial Catalog=WG2; Integrated Security=true";
            DataClasses1DataContext db = new DataClasses1DataContext(Connection_String);


            // 1. Select the data from DB
            var data = from s in db.Emps
                       orderby s.Id
                       select new rec(s.Name, s.Id, s.Position);
            foreach (var v in data)
                Console.WriteLine(v.id + " " + v.pos + " " + v.name);
            //or
            var data2 = db.Emps.Select(x => new rec(x.Name, x.Id, x.Position));
            foreach (var v in data)
                Console.WriteLine(v.id + " " + v.pos + " " + v.name);

            //2.Insert data in DB.
            using (DataClasses1DataContext db2 = new DataClasses1DataContext(Connection_String))
            {
                Emp e1 = new Emp();
                // got this Emp name from the designer.cs class
                e1.Name = "PQR";
                e1.Id = 3;
                e1.Position = "Intern";
                db2.Emps.InsertOnSubmit(e1);
                db2.SubmitChanges();
            }
            //OR directly.
            //Emp e1 = new Emp();
            //e1.Name = "MMPQR";
            //e1.Id = 4;
            //e1.Position = "Intern";
            //db.Emps.InsertOnSubmit(e1);
            //db.SubmitChanges();

            // 3. Update in DB
            Emp e2 = db.Emps.Single(x => x.Id == 1);
            e2.Name = "BHASKAR";
            db.SubmitChanges();

            // 4. Delete in DB
            Emp e3 = db.Emps.Single(x => x.Id == 2);
            db.Emps.DeleteOnSubmit(e3);
            db.SubmitChanges();
        }
    }
}
