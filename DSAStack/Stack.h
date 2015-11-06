
#include "MyVector.h"

template <typename T>
class Stack:public MyVector<T>
{
	public:
	Stack() {};
	~Stack() {};
	int table[1000];
	int count = 0;
	void push(T const & e)
	{ 
		insert(getSize(), e); 
		table[count] = 1;
		count++;

	}  //»Î’ª
	T pop() {table[count] = 0; count++; return remove(getSize() - 1);  }  //≥ˆ’ª
	int StackLen() { return getSize(); }
	
private:
	
};

