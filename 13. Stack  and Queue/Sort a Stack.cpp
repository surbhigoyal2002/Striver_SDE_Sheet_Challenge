#include <bits/stdc++.h> 
void sortinsert(int num,stack<int> &stack){
	if(stack.empty()||(!stack.empty()&& stack.top()<num)){
		stack.push(num);
		return;
	}
	int n=stack.top();
	stack.pop();
	sortinsert(num,stack);
	stack.push(n);

}

void sortStack(stack<int> &stack)
{
	if(stack.empty())return;
	int num=stack.top();
	stack.pop();
	sortStack(stack);
	sortinsert(num,stack);

}
