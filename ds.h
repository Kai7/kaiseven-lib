template <class T>
class knode
{
public:
    T *item;
    knode *next;

    knode();
    ~knode();

};

template <class T>
class kstack
{
private:
    knode<T> *top;
public:
    kstack();
    ~kstack();

    void push(knode<T> *);
    knode<T> * pop();
    bool isEmpty();
    //bool isFull();
};

template <class T>
class kqueue
{
private:
    knode<T> *front;
    knode<T> *rear;
public:
    kqueue();
    ~kqueue();
}
