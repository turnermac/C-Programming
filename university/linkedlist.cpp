//source: https://boards.4chan.org/g/thread/57224975
//it's bad code
#include<stdio.h>
#include<iostream>
#include"LinkedList.h"

using namespace std;

int main(){
	
	LinkedList<char> *cool = new LinkedList<char>();
	
	string st = "abcdefghijklmnopqrstuvwxyz";
	
	for (int i = 0; i < st.length(); i++)
	{
		cool->add(&st[i]);
		
	}
	
	cool->print();
	
	getchar();
	
	return 0;
}
