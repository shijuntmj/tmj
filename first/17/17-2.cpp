#include<iostream>
#include<memory>
#include<string>
using namespace std;
/*
    weak_ptrΪ���share_ptrѭ�����õ����ڴ�δ���ͷ�
    ������*����->���ʶ���ֻ��ͨ��share_ptr��������lock()
    weak_ptr������ɼ����ı�    
    
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
    //��������ͨ��lock()
    cout << pWeak.lock().get()[0] << endl;
    system("pause");  
    return 0;
}

