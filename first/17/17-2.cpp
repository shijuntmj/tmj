#include<iostream>
#include<memory>
#include<string>
using namespace std;
/*
    weak_ptr为解决share_ptr循环引用导致内存未被释放
    不能用*或者->访问对象，只能通过share_ptr访问数据lock()
    weak_ptr不能造成计数改变    
    
*/

int main()
{
    shared_ptr<int> pShare(new int(100));
    cout << "count:" << pShare.use_count() << endl;
    weak_ptr<int> pWeak(pShare);
    cout << "count:" << pWeak.use_count() <<endl;
    cout << pWeak.lock().get()[0] << endl;
    // pWeak.reset();
    cout << pShare.use_count() << endl;
    //访问数据通过lock()
    cout << pWeak.lock().get()[0] << endl;
    system("pause");  
    return 0;
}

