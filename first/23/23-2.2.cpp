#include"tcpsocket.h"
int main()
{
    TcpSocket client;
    client.Request(1588);
    cout << "�ͻ�������" << endl;
    cout << "server:" << client.RecvData(1024) << endl;
    return 0;
}