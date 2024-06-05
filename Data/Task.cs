using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Components.Authorization;

namespace TaskManager
{
    public class Task{
         public int Id {get;set;}
         
         public string? Content {get;set;}

        public bool  IsDone {get;set;}

    
    }
}