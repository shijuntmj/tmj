// #include <functional>
// #include <iostream>
// using namespace std;
// //bind���ٻ������Ӻ����β�
// int f(int a, int b)
// {
//     return a+b;
// }
// int main()
// {
// 	std::function<int(int, int)>func = bind(f,placeholders::_2,12);
// 	cout<<func(1, 2)<<endl;      // 14
// 	system("pause");
// 	return 0;
// }


#include <functional>
#include <iostream>
using namespace std;
int main()
{
	//��lamda������װ����
	std::function<int(int, int)>func =[](const int a, const int b) {return a + b; };
	cout << func(1, 2) << endl;      // 3
	system("pause");
	return 0;
}
