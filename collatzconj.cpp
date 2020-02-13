#include <iostream>
using std::cin;
using std::cout;

int main(){
  int start;
  //cout<<"Enter a starting number: ";
  //cin>>start;

  while(cin>>start){
    int count = 0;
    int store=start;
    //cout<<start;

    while(start != 1){
      if(start%2 == 0)
        start = start/2;
      else
        start =  (start*3)+1;

      count++;
    }
    //cout<<" done in :"<<count<<" steps\n";
    //cout<<"n changed to: "<<start<<"\n";

    cout<<"hello "<<count<<" steps needed for: "<<store<<"\n";
  }

  return 0;
}

/*
Class Notes:
  - size_t:
  -
*/