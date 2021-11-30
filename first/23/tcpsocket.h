
#include<string>
#include<winsock2.h>
#include<iostream>
#pragma comment(lib,"WS2_32.lib")
using namespace std;
class TcpSocket
{
    public:
        TcpSocket():m_usocket(0),m_uAddr({0}),m_csocket(0),m_cAddr({0}),m_clen(0)
        {
            WSADATA data;
            WORD w = MAKEWORD(2, 0);
            if(WSAStartup(w,&data)!=0)
            {
                cout << "初始化套接字库失败！" << endl;
            }
        }
        int Bind(u_short port,string ip="")
        {
            m_usocket = socket(AF_INET, SOCK_STREAM, 0);//本地套接字m_usocket初始化
            //初始化m_uAddr结构体
            m_uAddr.sin_family = AF_INET;
            m_uAddr.sin_port = htons(port);
            if(ip.size()==0)
            {
                m_uAddr.sin_addr.S_un.S_addr = INADDR_ANY;
            }
            else
            {
                m_uAddr.sin_addr.S_un.S_addr = inet_addr(ip.c_str());//本地测试
            }
            //bind 绑定套接字符
            return bind(m_usocket, (sockaddr *)&m_uAddr, sizeof(m_uAddr));
        }
        int Listen(int num)
        {
            return listen(m_usocket, num);
        }
        SOCKET Aceept()
        {
            m_clen = sizeof(m_cAddr);
            m_csocket = accept(m_usocket, (sockaddr*)&m_cAddr, &m_clen);
            //错误代码
            //cout<<WSAGetLastError()<<endl;
            return m_csocket;
        }
        int Request(int port,string ip="")
        {
            m_usocket = socket(AF_INET, SOCK_STREAM, 0);//本地套接字m_usocket初始化
            //初始化m_uAddr结构体
            m_uAddr.sin_family = AF_INET;
            m_uAddr.sin_port = htons(port);
            if(ip.size()==0)
            {
                m_uAddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
            }
            else
            {
                m_uAddr.sin_addr.S_un.S_addr = inet_addr(ip.c_str());//本地测试
            }
            return connect(m_usocket, (sockaddr *)&m_uAddr, sizeof(m_uAddr));
        }
        string getAddress()const
        {
            return inet_ntoa(m_cAddr.sin_addr);
        }
        SOCKET sendData(string message)
        {
            return send(m_csocket, message.c_str(), message.size() + 1, 0);
        }
        string RecvData(int messageLen)
        {
            char *message = new char[messageLen];
            memset(message, 0, messageLen);
            recv(m_usocket, message, messageLen, 0);
            string data = string(message);
            delete[] message;
            return data;
        }
        ~TcpSocket()
        {
            closesocket(m_usocket);
            closesocket(m_csocket);
            WSACleanup();
        }
    protected:
        SOCKET m_usocket;
        sockaddr_in m_uAddr;

        SOCKET m_csocket;
        sockaddr_in m_cAddr;
        int m_clen;
};