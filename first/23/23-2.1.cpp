#include"tcpsocket.h"
int main()
{
    TcpSocket server;
    server.Bind(1588);
    server.Listen(5);
    cout << "服务器部分" << endl;
    while (1)
    {
        if(server.Aceept()!=INVALID_SOCKET)
        {
            cout << server.getAddress() << "连接上服务器" << endl;
            server.sendData("ctp");
        }
        if(getchar())
        {
            break;
        }
    }
    system("pasue");
    return 0;
}