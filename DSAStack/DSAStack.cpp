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
	
	for (i = 1; A_pos < n;)
	{
		if (i < A[A_pos]) //Apos小于i，则i依次入栈直到相等或大于Apos
		{
			if (m < S.StackLen() + 1)break;
			S.push(i);
			i++;
		}
		else if (i>A[A_pos]) {
			int temp_pop = S.pop();
			while (temp_pop==A[A_pos]&&S.StackLen()) //若栈没清空且pop=Apos 则依次清除栈内剩余元素
			{
				A_pos++;
				if (temp_pop > A[A_pos])temp_pop = S.pop();
			}
			if (A[A_pos] < temp_pop)break;  //只要有Apos<pop即失败
			if (i > n || !S.StackLen())A_pos++; //当i已越界且栈内无元素时Apos前进
		}
		else {
			if (m < S.StackLen() + 1)break; //相等时先入栈后出栈
			S.push(i);
			S.pop();
			A_pos++; i++;
		}
	}
	if (A_pos<n)  //计数器没有走完就结束
	{
		cout << "NO" << endl;
	}
	else {
		for (int i = 0; i < S.count; i++)
		{
			if (S.table[i]==1)
			{
				cout << "push" << endl;
			}
			else 
			{
				cout << "pop" << endl;
			}
		}
	}
	delete A;
    return 0;
}

