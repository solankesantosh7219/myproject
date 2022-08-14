#include<iostream>
using  namespace std;

 class Calculator
 {
  public:

  int Addition(int no1, int no2)
   {
    int ireslut;
    ireslut = no1 + no2;

    cout<<ireslut<<" Addition is";
  }

  int subtraction(int no1, int no2)
  {

    int ireslut;
    ireslut = no1 - no2;

    cout<<ireslut<<" subtraction is";

  }
   int multiplication (int no1, int no2)
   {
    int ireslut;
    ireslut = no1 * no2;

    cout<<ireslut<<" Multiplication is";
   }
   int division(int no1, int no2)
   {
    int ireslut;
    ireslut = no1 / no2;

    cout<<ireslut<<" Multiplication is";
 }
 };

int main()
{
    cout<<" {{{{<<<wELCOME  IN Calculator AAPLICATION !!!!!!!!!}}";
  Calculator c;
  int ino1 = 0, send;
  int ino2 = 0;
  cout<<" Enter fisrt  Number";
  cin>>ino1;

  cout<<" Enter Scond  Number";
  cin>>ino2;
  
  cout<<" Enter Case Number type >>1 For Addition   >>2 For Subtraction >>3 for multiplication >>4 For division";
                                                  
  cin>>send;

  switch (send)
  {
  case 1: 
    c.Addition(ino1,ino2);
    break;
  
   case 2:
   c.subtraction(ino1,ino2);
    break;

    case 3:
   c.multiplication(ino1,ino2);
    break;
   
   case 4:
   c.division(ino1,ino2);
    break;

  }

  return 0;
 }
 
 
