//programa: pila01.c
// un simple ejemplo del uso de la platilla stack

#include <cstdlib>
#include <iostream>
#include <stack>

using namespace std;

int main (int argc, char *argv[])
{
	stack<int> s;
	for (int i = 1; i <= 10; i++)
	s.push(i);
	
	while(! s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
	cout<<endl;
	system("pause");
	return EXIT_SUCCESS;
}
