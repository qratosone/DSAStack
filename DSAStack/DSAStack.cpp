// DSAStack.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Stack.h"
#include <iostream>

using namespace std;



int main()
{
	Stack<int> S;
	int n, m;
	cin >> n >> m;
	int *A=new int[n];
	int k;
	
	for (k = 0; k < n; k++) {
		cin >> A[k];
	}
	int i;
	
	int A_pos = 0;
	for (i = 1; i < n;)
	{
		if (i < A[A_pos])
		{
			if (m < S.StackLen() + 1)break;
			S.push(i);
			i++;
		}
		else if (i>A[A_pos]) {
			int temp_pop = S.pop();
			while (temp_pop==A[A_pos]&&S.StackLen())
			{
				A_pos++;
				if (temp_pop > A[A_pos])temp_pop = S.pop();
			}
			if (A[A_pos] < temp_pop)break;
			if (i > n || !S.StackLen())A_pos++;
		}
		else {
			if (m < S.StackLen() + 1)break;
			S.push(i);
			S.pop();
			A_pos++; i++;
		}
	}
	if (A_pos<n)
	{
		cout << "NO" << endl;
	}
	else {
		
	}
	delete A;
    return 0;
}

