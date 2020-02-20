#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;
using std::string;

int main(){
  int num = 0;
  cin>>num;

  string type = typeid(num).name;
  cout<<type;
}