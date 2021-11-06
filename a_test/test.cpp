#include<iostream>
#include<iterator>
#include<array>
using namespace std;

int main()
{
    int* array1[2][3] = {0};
    int* array2[2][3] = {0};
    int* result[2][3] = {0};
    cin >> array1 >> array2;
    // result = array1 + array2;
	cout << "½á¹û" << endl;
	cout << result << endl;
	system("pause");
	return 0;
}