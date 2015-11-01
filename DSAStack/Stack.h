
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
		
	}  //»Î’ª
	T pop() {  return remove(getSize() - 1); }  //≥ˆ’ª
	int StackLen() { return getSize(); }
private:
	
};

