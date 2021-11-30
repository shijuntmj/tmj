// #include<iostream>
// #include<WinSock2.h>//套接字头文件
// #pragma comment(lib,"WS2_32.lib")
// using namespace std;
// int main()
// {
// 	WSADATA data;
// 	WORD w = MAKEWORD(2, 0);//版本信息
// 	int result=WSAStartup(w, &data);
// 	//创建套接字
// 	SOCKET s = socket(AF_INET, SOCK_DGRAM, 0);
// 	sockaddr_in addr, addr1;
// 	int n = sizeof(addr);
// 	addr.sin_family = AF_INET;//协议家族
// 	addr.sin_port = htons(1666);//端口号
// 	addr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");//介入地址
// 	//绑定
// 	//bind(s, (sockaddr*)&addr, n);
// 	cout << "UDP client 启动" << endl;
// 	char recvStr[20] = "";
// 	char sendStr[20] = "";
// 	while (1)
// 	{
// 		cout << "Client input：";
// 		cin >> sendStr;
// 		if (sendto(s, sendStr, sizeof(sendStr), 0, (sockaddr*)&addr, n) != 0)
// 		{
// 			recvfrom(s, recvStr, 20, 0, (sockaddr*)&addr1, &n);
// 			cout << "server say" << recvStr << endl;

// 		}
// 	}
// 	closesocket(s);
// 	WSACleanup();
// 	return 0;
// }