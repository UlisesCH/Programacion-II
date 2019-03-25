//programa: pila01.c
// un simple ejemplo del uso de la platilla stack

#include <cstdlib>
#include <iostream>
#include <stack>

using namespace std;

int main (int argc, char *argv[])
{
	stack<char> s;
	for (int i = 'A'; i <= 'Z'; i++)
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
