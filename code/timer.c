#include<iostream>
using namespace std;
class Cuboid
{
public:
	Cuboid(int x, int y, int z) :x(x), y(y), z(z) {};
	int Volume();
protected:
	int x;
	int y;
	int z;
};
int Cuboid::Volume()
{
	return x * y * z;
}
int main()
{
	Cuboid cu[3] = { {10,12,15},{15,18,20},{16,20,26} };
	cout << cu[0].Volume() <<"\t" << cu[1].Volume() <<"\t" << cu[2].Volume() << endl;
	while(1){
	};
	return 0;
}