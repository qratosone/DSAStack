
#include "MyVector.h"

template <typename T>
class Stack:public MyVector<T>
{
	public:
	Stack() {};
	~Stack() {};
	void push(T const & e)
	{ 
		insert(getSize(), e); 
		
	}  //��ջ
	T pop() {  return remove(getSize() - 1); }  //��ջ
	int StackLen() { return getSize(); }
private:
	
};

