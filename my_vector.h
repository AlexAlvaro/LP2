#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Vector{
  private:
    int MAX_CAP;
    int m_size;
    t *p_data;
    static const int MAX;
  public:
    Vector(int a_size=MAX);
    ~Vector();
    int size()const;
    void push_back(const T &obj);
    T& get(int index);
};
template <class T>
Vector<T>::Vector(int a_size=MAX){
    MAX=10;
    m_size=0;
    p_data=new T(a_size);
    //this->p_data=new T[this<>cap]
}
template <class T>
Vector<T>::~vector(){
    delete[] this->p_data;

}
template <class T>
int Vector<T>::size()const{
    return this->m_size;
}
template <class T>
void Vector <T>:: push_back(const &T){
    if(this->m_size<this->cap)
      this->p_data[this->m_size++]=obj;

}
template <class T>
T& Vector <T>::get(int index){
    if(index <0||index>=this->m_size)
      return this->p_data[index];
}
#endif //MY_VECTOR_HS
