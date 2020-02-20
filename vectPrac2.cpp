#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;

/* Write a function that takes a vector of integers as input and returns another vector containing only the *EVEN* elements */

vector<int> evens(vector<int> V);

int main(){
  //Fill up your starting vector
  int n; //For cin
  vector<int> input;
  while(cin>>n){
    input.push_back(n);
  }

  vector<int> output = evens(input);
  cout<<output<<"\n";
}

vector<int> evens(vector<int> V){
  vector<int> output;

  for(size_t i=0; i<V.size(); i++){
    if(V[i] % 2 == 0) //If element is even
      output.push_back(V[i]);
  }

  return output;
}