template<class _ty>
struct Node
{
    _ty data;
    Node<_ty> *next;
    Node(_ty data):data(data),next(nullptr){}
};
template<class _ty>
class myList
{
    public:
        myList() : curSize(0), headNode(nullptr), backNode(nullptr){}
        _ty front() { return headNode->data; }
        _ty back() { return backNode->data; }
        int size() { return curSize; }
        bool empty() { return curSize == 0; }
        void push_front(_ty data)
        {
            Node<_ty> *newNode = new Node<_ty>(data);
            newNode->next = headNode;
            if (curSize == 0)
            {
                backNode = newNode;
            }
            headNode = newNode;
            curSize++;
    }
    public:
        class iterator
        {
            public:
                iterator() = default;
                iterator(Node<_ty>* pmove):pmove(pmove){}
                iterator operator++()
                {
                    this->pmove = this->pmove->next;
                    return *this;
                }
                bool operator!=(iterator object)//不能传引用
                {
                    return this->pmove != object.pmove;
                }
                _ty operator*()
                {
                    return this->pmove->data;
                }
            protected:
                Node<_ty> *pmove;
        };
        iterator begin()
        {
            return iterator(headNode);
        }
        iterator end()
        {
            return iterator(backNode->next);
        }
    protected:
        Node<_ty> *headNode;
        Node<_ty> *backNode;
        int curSize;
};