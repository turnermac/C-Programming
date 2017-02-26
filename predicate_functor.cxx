#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv){
  
  vector<string> ss;
  
  ss.push_back("C++...");
  ss.push_back("is...");
  ss.push_back("a qt 3.14...");
  
  
  for (size_t i = 0; i < ss.size(); i++) /*normal for loop (mind the "size_t" tipe for i)*/
  {
      cout << "Hello /g/" << endl;
  }
  
  vector<string>::const_iterator constant_iterator; /*a const iterator*/
  
  for (constant_iterator=ss.begin(); constant_iterator!=ss.end(); constant_iterator++)
  {
    cout << *constant_iterator << endl << endl;
  }
  
  vector<string>::reverse_iterator rii; /*a reverse iterator. (mind the "r" for reverse in "rbegin()" and "rend()")*/
  
  for (rii=ss.rbegin(); rii!=ss.rend(); ++rii)
  {
    cout << *rii << endl;
  }
  
  cout << ss.size() << endl;
  cout << ss[2] << endl;
  swap(ss[0], ss[2]);
  cout << ss[2];
  
  return 0;
}
