//https://github.com/Ebisu02/Prog_Labs_by_Ebisu_aka_Sergey_O_A/commit/66696bf564953b2cb4f30fb8ce26d3dd82f1a1c9
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <stdbool.h>
#include <stdint.h>
#include <ctime>
using namespace std;
bool prime (int j)
{
  //Проверка на Натуральность числа и отсев вариантов от 0 до 2
  if (j<2)
    return false;
  // 2 - Простое число
  else if (j==2)
    return true;
  else if (j%2 == 0)
  //Четные числа, кроме 2 - НЕ простые числа
    return false;
  int f=3;
  //Перебор делителей
  while (f*f <= j)
  {
    if (j%f == 0)
    {
      return false;
    }
  //Каждый последующий делителей увеличивается на 2.
    f+=2;
  }
  return true;
}
int main ()
{
int Lab_Number;
cout << "Enter a number of lab\n";
cin >> Lab_Number;
switch (Lab_Number)
{
  case 1:
    {
      cout << "Ur lab #" << Lab_Number<<endl;
      float x, y, z, t;
      // t=1, z=3; Result ~ 0,04
	    cout << "Enter variables t & z " << endl;
	    cin >> t >> z;
	    y = sin(t);
	    x = (4*y*y)/(4*y*exp(z) - 2*t*t*t);
	    cout << "Result " << x;
      return 0;
    }
  case 2:
  {
    cout << "Ur lab #" << Lab_Number<<endl;
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
    return 0;
  }
  case 3:
    {
      cout << "Ur lab #" << Lab_Number<<endl;
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
      return 0;
    }
    case 4:
    {
      cout << "Ur lab #" << Lab_Number<<endl;;
      float s;
      int i;
      s=0;
      //s~-0,058
      for (i=1;i<=25;i++)
        s+=sin(i);
      cout << "Result :"<< s;
      return 0;
    }
    case 5:
    {
      cout << "Ur lab #" << Lab_Number<<endl;
      int Lab_Ex_Number;
      cout << "Enter a Number of Ex.\n";
      cin >> Lab_Ex_Number;
      switch (Lab_Ex_Number)
      {
        case 3:{
        cout << "Ex. #" << Lab_Ex_Number<<endl;
        int N,i;
        //Ввод диапазона
        cout << "\t\t\t\tEnter N\n";
        cin >> N;
        //Вывод надписи "Простые Числа"
        cout << "\t\t\t\tPrime numbers: \n";
        i=0; 
        while (i<=N)
          {
            if(prime(i))
              {
                //Вывод Чисел простых
                cout<<" "<<i;   
              }
            ++i;
          }
        cout << "  \n";
        return 0;
        }
        case 1:
        {
          cout << "Ex. #" << Lab_Ex_Number<<endl;
          double pi;
          int n;
          n=0;
          while (n<=10000000) 
            {
              pi+=(pow(-1,n)/(2*n+1));
              n++;
            }
          pi*=4;   
          cout << "\t\t\tNumber Pi with an accurate to 0.00001 is - " << pi;
	        return 0;
        }
        case 2:
        {
          cout << "Ex. #" << Lab_Ex_Number<<endl;
          float a,b,c,x,h,y,Ymin,Ymax;     
	        a=2.14;b=-4.21;c=3.25;h=0.5;x=-4.5;Ymin=0;Ymax=0;   
	        while (x>=-13.5)        
		      {           
		        y=((a*x*x)+(b*x)+c)*sin(x);           
		        x-=h;           	
		        if (y>Ymax)               
			        Ymax=y;            
		        else             
			      if (y<Ymin)                 
				      Ymin=y;      
		      }        
	        cout << " Y_min =  " << Ymin<<endl;       
	        cout << " Y_max =  " << Ymax<<endl;      
	        return  0; // min=-361.783, max=308.497
        }
      return 0;
      }  
    }
    case 6:
    {
      cout << "Ur lab #" << Lab_Number<<endl;
      int Lab_Ex_Number;
      cout << "Enter a Number of Ex.\n";
      cin >> Lab_Ex_Number;
      switch (Lab_Ex_Number)
      {
        case 1:
        /*Сформировать с помощью датчика случайных чисел в диапазоне [-10,10] массив из 20 элементов целого типа. Вывести его на экран.  Затем вывести на экран  все положительные элементы массива, и все отрицательные элементы.*/
        {
          cout << "Ex. #" << Lab_Ex_Number<<endl;
          srand(time(NULL));
          int Random_Numbers[20];
          for (int i=0;i<20;i++)
          {  
            Random_Numbers[i]=rand()%21 - 10;
            cout << "Massiv Element" << "[" << i+1<<"] = "<<Random_Numbers[i]<<endl;
          }
          return 0;
        }
        case 2:
        {
        /*Для значений i=1, 2,..,n вычислить число сочетаний из n по
        i и занести результаты в массив  С={С1,С2,..,Сn}, используя
        Ci= n!/(i!(n - i)!).  Число n>0 ввести с клавиатуры.Полученный массив       вывести на экран.*/
          int i,n;
          
        }
      }
    }  
    default:{cout<<"Unknown Lab_Number\nU have 2 variants:\n1.I still haven't done it\n2.It's a incorrect Number of Lab ;D";return 0;}
  }
return 0;
}
