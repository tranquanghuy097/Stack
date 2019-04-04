#ifndef _STACK_
#define _STACK_

#include <iostream>
#include <vector>

class stack
{
private:
	std::vector<int> vec;
	int top, max_size;

public:
	stack(){ top = -1;}

	stack(int size) 
	{
		vec.resize(size);
		top = -1;
		max_size = size;
	}

	bool isEmpty() {return (vec.size() > 0)? true : false;}

	int size() 
	{
		
		return top + 1;
	}

	int pop()
	{
		if(top == -1)
		{
			std::cout << "Stack underflow" << std::endl;
			return 0;
		}
		int data = vec[top--];
		return data;
	}

	void push(int data)
	{
		if(top == max_size)
		{
			std::cout << "Stack overflow" << std::endl;
			return;
		}
		vec[++top] = data;
	}
};

#endif