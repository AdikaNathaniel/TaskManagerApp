using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.ComponentModel.DataAnnotations;

namespace TaskManager
{
    public class Task
    {
          [Key]
        public int? Id {get ; set; }

         public  String? Content { get ; set; }

         public  Boolean IsDone { get ; set; }
    }
}