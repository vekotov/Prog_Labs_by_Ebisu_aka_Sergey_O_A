//https://repl.it/@Ebisu02/Proglabs#main.cpp
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <stdbool.h>
#include <stdint.h>
using namespace std;
int main ()
{
int Lab_Number;
cout << "Enter a number of lab\n";
cin >> Lab_Number;
switch (Lab_Number)
{
  case 1:
    {
      cout << "Ur lab #" << Lab_Number;
      float x, y, z, t;
      // t=1, z=3; Result ~ 0,04
	    cout << "Enter variables t & z " << endl;
	    cin >> t >> z;
	    y = sin(t);
	    x = (4*y*y)/(4*y*exp(z) - 2*t*t*t);
	    cout << "Result " << x;
      break;
    }
  case 2:
  {
    cout << "Ur lab #" << Lab_Number;
    float x1,x2,x3,x4,x5,Result;
    Result = 0;
    cout << "Enter number" << endl;
    cin >> x1;
    if (x1 > 0)
        Result = Result + x1;
    cout << "Enter number" << endl;
    cin >> x2;
    if (x2 > 0)
        Result = Result + x2;
    cout << "Enter number" << endl;
    cin >> x3;
    if (x3 > 0)
        Result = Result + x3;
    cout << "Enter number" << endl;
    cin >> x4;
    if (x4 > 0)
        Result = Result + x4;
    cout << "Enter number" << endl;
    cin >> x5;
    if (x5 > 0)
        Result = Result + x5;
    cout << "Result :  " <<  Result;
    break;
  }
  case 3:
    {
      cout << "Ur lab #" << Lab_Number;
      int c;
      cout << "Enter a C variable\n";
      cin >> c;
      switch(c)
      {
        case -9:cout << "Minus nine";break;
        case -8:cout << "Minus eight";break;
        case -7:cout << "Minus seven";break;
        case -6:cout << "Minus six";break;
        case -5:cout << "Minus five";break;
        case -4:cout << "Minus four";break;
        case -3:cout << "Minus three";break;
        case -2:cout << "Minus two";break;
        case -1:cout << "Minus one";break;
        case 0:cout << "Nule";break;
        case 1:cout << "One";break;
        case 2:cout<<"Two";break;
        case 3:cout<< "Three";break;
        case 4:cout<<"Four";break;
        case 5:cout<<"Five";break;
        case 6:cout<<"Six";break;
        case 7:cout<<"Seven";break;
        case 8:cout<<"Eight";break;
        case 9:cout << "Nine";break;
        default:cout<<"\nUnknown number, please enter a correct number from -9 to 9, thx";
      }
      break;
    }
    case 4:
    {
      cout << "Ur lab #" << Lab_Number;
      float s;
      int i;
      s=0;
      //s~-0,058
      for (i=1;i<=25;i++)
        s+=sin(i);
      cout << "Result :"<< s;
      break;
    }
    case 5:
    {
      
    }  
    default:cout<<"Unknown Lab_Number\nU have 2 variants:\n1.I still haven't done it\n2.It's a incorrect Number of Lab ;D";
  }
return 0;
}
