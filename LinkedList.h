#include <iostream>
 
template <class T> class LinkedList {
    private:
        T *myObj;
        LinkedList<T> *myList;
        LinkedList<T> *myNext;
        LinkedList<T> *myLast;
    public:
        ~LinkedList();
 
        LinkedList();
        LinkedList(T *t);
 
        void add(T *t);
        void addFirst(T *t);
        void addLast(T *t);
        void print();
        void clear();
        int count();
};
 
template<class T> inline LinkedList<T>::~LinkedList() {
    delete myObj;
    delete myNext;
    delete myList;
    delete myLast;
}
 
template<class T> inline LinkedList<T>::LinkedList() {
    myLast, myList, myNext = nullptr;
    myObj = nullptr;
}
 
template<class T> inline LinkedList<T>::LinkedList(T *t) {
    myLast, myList, myNext = nullptr;
    myObj = &t;
}
 
template<class T> inline void LinkedList<T>::add(T *t) {
    LinkedList<T> *temp = new LinkedList<T>(&t);
    if (myList == nullptr) {
        myList = temp;
        myLast = temp;
    }
    else {
        myLast->myNext = temp;
        myLast = temp;
    }
}
 
template<class T> inline void LinkedList<T>::addFirst(T *t) {
    LinkedList<T> *temp = new LinkedList<T>(&t);
    temp->myNext = myList;
    myList = temp;
}
 
template<class T> inline void LinkedList<T>::addLast(T *t) {
    myLast = myList;
    while (myLast->myNext != nullptr) {
        myLast = myLast->myNext;
    }
 
    LinkedList<T> &temp = new LinkedList<T>(&t);
    myLast->myNext = temp;
}
 
template<class T> inline void LinkedList<T>::print() {
    myLast = myList;
    while (myLast != nullptr) {
        std::cout << myObj;
        myLast = myLast->myNext;
    }
}
 
template<class T> inline void LinkedList<T>::clear() {
    myLast = nullptr;
    myList = nullptr;
    myNext = nullptr;
    myObj = nullptr;
}
 
template<class T> inline int LinkedList<T>::count() {
    int cnt = 0;
    myLast = myList;
    while (myLast != nullptr) {
        cnt++;
        myLast = myLast->myNext;
    }
    return cnt;
}
