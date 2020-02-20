#include <iostream>
#include <typeinfo>
using namespace std;

int sumFirstNOddCubes(int n);

// Call methods here
int main(){
  int input = 0;
  cout<< "This program will sum the cube of values leading to your input. \n"
         "Please enter a max: ";

  bool keepGoing = true;
  while(keepGoing){
    cin>>input;
    if()
    {
      cout<<"Input wasn't recognized. Please reenter a number: ";
    }
    else if(input<0)
    {
      cout<<"Input is negative!, please reenter a positive number: ";
    }
    else
      keepGoing=false;
  }

  int ans = sumFirstNOddCubes(input);
  cout<<"Sum of first "<<input<<" cubes is: "<<ans<<"\n";
}

int sumFirstNOddCubes(int n){
  int output=0;
  for(int i=1; i<=n; i++){
    output = output + (i*i*i);
  }

  return output;
}