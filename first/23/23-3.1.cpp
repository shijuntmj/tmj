// #include<iostream>
// #include<WinSock2.h>
// #pragma comment(lib,"WS2_32.lib")
// using namespace std;
// int main()
// {
// 	////初始化
// 	//WSADATA data;
// 	//WORD w = MAKEWORD(2, 0);//版本信息
// 	//WSAStartup(w, &data);
// 	//WSACleanup();
// 	//初始化
// 	WSADATA data;
// 	WORD w = MAKEWORD(2, 0);//版本信息
// 	int result=WSAStartup(w, &data);
// 	//创建套接字
// 	SOCKET s = socket(AF_INET, SOCK_DGRAM, 0);
// 	sockaddr_in addr, addr1;
// 	int n = sizeof(addr);
// 	addr.sin_family = AF_INET;//协议家族
// 	addr.sin_port = htons(1666);//端口号
// 	addr.sin_addr.S_un.S_addr = INADDR_ANY;//介入地址
// 	//绑定
// 	bind(s, (sockaddr*)&addr, n);

// 	cout << "UDP server 启动" << endl;
// 	char recvStr[20] = "";
// 	char sendStr[20] = ""; 
// 	while (1)
// 	{
// 		if (recvfrom(s, recvStr, 20, 0, (sockaddr*)&addr1, &n) != 0)
// 		{
// 			cout << inet_ntoa(addr1.sin_addr) << "发来信息" << endl;
// 			cout << "client say:" << recvStr << endl;
// 			cout << "server input:";
// 			cin >> sendStr;
// 			sendto(s, sendStr, sizeof(sendStr), 0, (sockaddr*)&addr1, n);
// 		}
// 	}
// 	closesocket(s);
// 	WSACleanup();
// 	return 0;
// }