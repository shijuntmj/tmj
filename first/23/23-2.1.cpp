#include"tcpsocket.h"
int main()
{
    TcpSocket server;
    server.Bind(1588);
    server.Listen(5);
    cout << "����������" << endl;
    while (1)
    {
        if(server.Aceept()!=INVALID_SOCKET)
        {
            cout << server.getAddress() << "�����Ϸ�����" << endl;
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