#ifndef MY_VECTOR_H
#define MY_VECTOR_H

template <class T>
class my_vector{
  private:
    int m_size;
    T *p_data;
    int MAX_CAP;
    static const int MAX;
  public:
    vector(int a_size=MAX);
    ~vector();
    void push_back();
};
template <class T>
  int my_vector<T>::MAX=10;

template <class T>
  my_vector::vector(int a_size){
    p_data= new T(a_size);
  }








#endif //MY_VECTOR_HS
