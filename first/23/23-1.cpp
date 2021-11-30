#include<winsock.h>
#include<iostream>
#pragma comment(lib,"WS2_32.lib")
using namespace std;

int main()
{
    WSADATA data;
    WORD w = MAKEWORD(2, 0);
    int result=WSAStartup(w, &data);
    SOCKET s = socket(AF_INET, SOCK_STREAM, 0);
    system("pause");
    return 0;
}