#include <iostream>
using std::cout;
using std::cin;

// Print a rectangle of '*' characters
int main(){
  int row, col;
  cout<<"Enter amt of rows: ";
  cin>>row;
  cout<<"Enter amt of columns: ";
  cin>>col;

  for(int r=0; r<row; r++)
  {
    for(int c=0;c<row;c++)
    {
      cout<<"*";
    }
  }
}
