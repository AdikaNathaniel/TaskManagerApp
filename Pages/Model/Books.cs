using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;

namespace TaskManager
{
    public class Books
    {
           public int Id { get; set; }

    public string? Title { get; set; }

   //  [DataType(DataType.Date)]
    public DateTime ReleaseDate { get; set; }

    public string? Genre { get; set; }
    
    public decimal Price { get; set; }
    }
}