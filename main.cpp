#include<iostream>
#include"Deque.h"

using std::cout;
using std::endl;
using mystruct::deque;

int main()
{	
	deque<int> fd;

	fd.push_back(9);
	fd.push_back(11);
	fd.push_back(21);
	fd.push_back(23);
	
	cout << "pop_front(): " << fd.pop_front() << endl;

	cout << "Size: " << fd.size() << endl;
	for (unsigned i = 0; i < fd.size(); i++)
		cout << fd[i] << " ";
	cout << endl;
	
	
	/* List testing */
	// 55.56MB(11.35s)
	//for (int i = 0; i < 1000000; i++)
	//	l2.push_back(i * 2);

	// 55.92MB(7.76s)
	//for (int i = 0; i < 1000000; i++)
	//	l1.push_back(i * 2);

	return 0;
}