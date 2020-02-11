#include <iostream>
using std::cout;
using std::cin;

/* Making a program that sums up numbers from a list*/

int doSomething(){
  int input;
  int sumSoFar = 0;
  while(cin >> input){
    sumSoFar += input;
  }
  return sumSoFar;
}

/* Compute the GCD of 2 given (nonnegative) integers*/
int GCD(int num1, int num2){
  int gcd = 0;

  for(int i = 1; i<num1/2; i++)
  {
    int factor1 = 0;
    int factor2 = 0;

    if(num1%i == 0){
      factor1 = i;
      factor2 = num1/i;
    }

    for(int j=1; j<num2/2; j++){
      int f1 = 0;
      int f2 = 0;

      if(num2%j == 0){
        f1 = j;
        f2 = num2/j;
      }

      if((f1 == factor1 || f1 == factor2) && f1>gcd)
      {
        gcd = f1;
      }
      else if((f2 == factor1 || f2 == factor2) && f2>gcd)
      {
        gcd = f2;
        break;
      }
    }
  }
  return gcd;
}

int main(){

  /*
  int input;
  int sum_so_far = 0;

  while(cin >> input){
    sum_so_far+=input;
  }
  */

  //cout<<doSomething()<<"\n";
  int num1, num2;
  cout<<"Enter the first number: ";
  cin>>num1;
  cout<<"Enter the 2nd number: ";
  cin>>num2;

  cout<<"The GCD is: "<<GCD(num1,num2)<<"\n";
  return 0;

}

/* Notes from Lecture:
  If you have a Makefile, it runs the g++ commands for you and you just run the file
  using ./[ NAME ]

*/

