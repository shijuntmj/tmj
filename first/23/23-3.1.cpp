// #include<iostream>
// #include<WinSock2.h>
// #pragma comment(lib,"WS2_32.lib")
// using namespace std;
// int main()
// {
// 	////��ʼ��
// 	//WSADATA data;
// 	//WORD w = MAKEWORD(2, 0);//�汾��Ϣ
// 	//WSAStartup(w, &data);
// 	//WSACleanup();
// 	//��ʼ��
// 	WSADATA data;
// 	WORD w = MAKEWORD(2, 0);//�汾��Ϣ
// 	int result=WSAStartup(w, &data);
// 	//�����׽���
// 	SOCKET s = socket(AF_INET, SOCK_DGRAM, 0);
// 	sockaddr_in addr, addr1;
// 	int n = sizeof(addr);
// 	addr.sin_family = AF_INET;//Э�����
// 	addr.sin_port = htons(1666);//�˿ں�
// 	addr.sin_addr.S_un.S_addr = INADDR_ANY;//�����ַ
// 	//��
// 	bind(s, (sockaddr*)&addr, n);

// 	cout << "UDP server ����" << endl;
// 	char recvStr[20] = "";
// 	char sendStr[20] = ""; 
// 	while (1)
// 	{
// 		if (recvfrom(s, recvStr, 20, 0, (sockaddr*)&addr1, &n) != 0)
// 		{
// 			cout << inet_ntoa(addr1.sin_addr) << "������Ϣ" << endl;
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