#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;

int main(){
  string s; // for input
  vector<string> V;


  while(cin>>s){
    V.push_back(s);
  }

  for(size_t  i = 0; i<V.size(); i++)
  {
    if(i==V.size()-1)
      cout<< V[i] << "\n";
    else
      cout << V[i] << ", ";
  }

  // Now print in reverse order
  for(size_t  i = V.size()-1; i>=0; i--)
  {
    if(i==0)
      cout<< V[i] << "\n";
    else
      cout << V[i] << ", ";
  }

  return 0;
}

/*
size_t : range is from 0 to 264...
         Cant store negative numbers
*/