using System.Security.Claims;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Components.Authorization;

public class DummyAuthStateProvider : AuthenticationStateProvider
{
    public async override Task<AuthenticationState> GetAuthenticationStateAsync()
    {
      

        var identity = new ClaimsIdentity(new List<Claim>{
                      new Claim(ClaimTypes.Name,"Fellipe")
        },"test");
        
        return await Task.FromResult(new AuthenticationState(new ClaimsPrincipal(identity)));
    }
}
