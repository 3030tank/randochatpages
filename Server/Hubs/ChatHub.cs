using Microsoft.AspNetCore.SignalR;


namespace BlazorWasmChat.Server.Hubs
{
    public class ChatHub : Hub
    {
        private static Dictionary<string, string> User = new Dictionary<string, string>();
        public override async Task OnConnectedAsync()
        {
            string username = Context.GetHttpContext().Request.Query["username"];
            User.Add(Context.ConnectionId, username);
            await AddMessageToChat(string.Empty,$"{username} has joined the chat!");
            await base.OnConnectedAsync();
        }

        public override async Task OnDisconnectedAsync(Exception? exception)
        {
            string username = User.FirstOrDefault(u => u.Key == Context.ConnectionId).Value;
            await AddMessageToChat(string.Empty, $"{username} has left the chat!");
        }
        public async Task AddMessageToChat(string user,string message)
        {
            await Clients.All.SendAsync("RecieveMessage",user, message);
        }
    }
}
