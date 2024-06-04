using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;

namespace TaskManager
{
    public class TaskService : ITaskService
    {
         private readonly HttpClient _httpClient;

         public Task<List<Task>> GetTasks()
        {
            throw new NotImplementedException();
        }
    }
}