// DSAStack.cpp : �������̨Ӧ�ó������ڵ㡣
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
		if (i < A[A_pos]) //AposС��i����i������ջֱ����Ȼ����Apos
		{
			if (m < S.StackLen() + 1)break;
			S.push(i);
			i++;
		}
		else if (i>A[A_pos]) {
			int temp_pop = S.pop();
			while (temp_pop==A[A_pos]&&S.StackLen()) //��ջû�����pop=Apos ���������ջ��ʣ��Ԫ��
			{
				A_pos++;
				if (temp_pop > A[A_pos])temp_pop = S.pop();
			}
			if (A[A_pos] < temp_pop)break;  //ֻҪ��Apos<pop��ʧ��
			if (i > n || !S.StackLen())A_pos++; //��i��Խ����ջ����Ԫ��ʱAposǰ��
		}
		else {
			if (m < S.StackLen() + 1)break; //���ʱ����ջ���ջ
			S.push(i);
			S.pop();
			A_pos++; i++;
		}
	}
	if (A_pos<n)  //������û������ͽ���
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

