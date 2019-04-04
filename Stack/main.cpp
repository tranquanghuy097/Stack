#include "Stack.h"

void main()
{
	stack stk(5);
	stk.push(4);
	stk.push(3);
	stk.push(5);
	std::cout << stk.isEmpty() << std::endl;
	std::cout << stk.size() << std::endl;
	std::cout << stk.pop() << std::endl;
	std::cout << stk.size() << std::endl;
}