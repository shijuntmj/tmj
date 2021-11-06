#include<iostream>
using namespace std;
class Stack
{
    public:
        virtual void push(int data) = 0;
        virtual void pop() = 0;
        virtual int top() const = 0;
        virtual bool empty() const = 0;
        virtual int size() const = 0;
        virtual ~Stack() { cout << "stack" << endl; };
};
class Arraystack:public Stack
{
    public:
        Arraystack(int capacity=10)
        {
            array = new int[capacity];
            stackTop = -1;
        }
        void push(int data)
        {
            array[++stackTop] = data;//�������ݵ�����
        }
        void pop() 
        {
            stackTop--;//�±����
        }
        int top() const
        {
            return array[stackTop];//�������ݽӿ�
        }
        bool empty() const
        {
            return stackTop==-1;//��ǰ�±��Ƿ�Ϊ-1
        }
        int size() const
        {
            return stackTop + 1;//�����С
        }
        ~Arraystack()
        {
            cout << "arraystack" << endl;
        }
    protected:
        int *array; //����ָ��
        int stackTop;//��ǰ�����±�
};
class Liststack:public Stack
{
    public:
};
void testStack(Stack *pstack)
{
    for (int i = 0; i < 3;i++)
        pstack->push(i);
    while (!pstack->empty())
    {
        cout << pstack->top()<<"\t";
        pstack->pop();
    }
    cout << endl;
}
int main()
{
    testStack(new Arraystack);
    {//������
        Stack *pstack = new Arraystack;
        delete pstack;
    }
    while (1){}
    return 0;
}