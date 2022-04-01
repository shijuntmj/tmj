// #include <functional>
// #include <iostream>
// using namespace std;
// //bind减少或者增加函数形参
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
	//将lamda函数包装起来
	std::function<int(int, int)>func =[](const int a, const int b) {return a + b; };
	cout << func(1, 2) << endl;      // 3
	system("pause");
	return 0;
}
