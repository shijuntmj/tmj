// #include<iostream>
// #include<WinSock2.h>//�׽���ͷ�ļ�
// #pragma comment(lib,"WS2_32.lib")
// using namespace std;
// int main()
// {
// 	WSADATA data;
// 	WORD w = MAKEWORD(2, 0);//�汾��Ϣ
// 	int result=WSAStartup(w, &data);
// 	//�����׽���
// 	SOCKET s = socket(AF_INET, SOCK_DGRAM, 0);
// 	sockaddr_in addr, addr1;
// 	int n = sizeof(addr);
// 	addr.sin_family = AF_INET;//Э�����
// 	addr.sin_port = htons(1666);//�˿ں�
// 	addr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");//�����ַ
// 	//��
// 	//bind(s, (sockaddr*)&addr, n);
// 	cout << "UDP client ����" << endl;
// 	char recvStr[20] = "";
// 	char sendStr[20] = "";
// 	while (1)
// 	{
// 		cout << "Client input��";
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