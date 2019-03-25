#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

int main(){

	queue<char> s;

	char *puntero;

	for (int i='A';i<= 'Z';i++)
	s.push(i);

	puntero=&s.front();
	for(int i=0; i<s.size();i++)
	{
		cout<<*puntero<<" ";
		puntero++;
	}

	/*while(! s.empty())
	{
		cout<<s.front()<<" ";
		s.pop();
	}*/

	cout<<endl;
	system("pause");
	return EXIT_SUCCESS;
}
