#include"tcpsocket.h"
int main()
{
    TcpSocket client;
    client.Request(1588);
    cout << "¿Í»§¶ËÆô¶¯" << endl;
    cout << "server:" << client.RecvData(1024) << endl;
    return 0;
}