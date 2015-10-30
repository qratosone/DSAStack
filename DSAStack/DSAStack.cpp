// DSAStack.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
	Stack<int> test;
	int a;
	int i = 0;
	while (true)
	{
		cin >> a;
		test.push(a);
		i++;
		if (a == 0) break;
	}
	for ( int j= 0; j< i;  j++)
	{
		cout << test.pop() << endl;
	}

	
	
    return 0;
}

