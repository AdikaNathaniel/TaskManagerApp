using Microsoft.EntityFrameworkCore;

namespace TaskManager.Data
{
    public class TaskManagerAppContext : DbContext
    {

         public DbSet<Task> Tasks { get; set;}

         /*
        public TaskManagerAppContext(DbContextOptions<TaskManagerAppContext> options)
            : base(options)
        {
        }
        */
/*
        protected override void OnConfiguring(DbContextOptionsBuilder DbContextOptionsBuilder)
        {
            optionsBuilder.UseSqlServer("Server=localhost\\SQLEXPRESS;Database=BookInventorySystem;Trusted_Connection=True");
        }
*/
protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
{
    optionsBuilder.UseSqlServer("Server=localhost\\SQLEXPRESS;Database=BookInventorySystem;Trusted_Connection=True");
}

       

/*
          protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            modelBuilder.Entity<Task>().HasKey(t => t.Id);
        }
        */
    }
}






