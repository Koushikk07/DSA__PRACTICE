#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   //comment
   /*
   MUlti line comment
   */

   //input

   int a ;
   cin>>a;

   //output
   cout<<"x";

  //constants
  const int age = 21;
  
  /*
  Like this:

const int minutesPerHour = 60;
This however, will not work:

const int minutesPerHour;
minutesPerHour = 60; // error
  */

  //auto

  auto x =8; // automatically identif

//OPERATORS

//arithmetic operators
int a =10, b=15;
cout<<a+b;
cout<<a-b;
cout<<a*b;
cout<<a%b;
cout<<a++;
cout<<++a;
cout<<a--;
cout<<--a;


//assignment operators
int x =1;
x+=5;
x-=5;
x*=5;
x/=5;
x%=5;
x&=5;
x|=5;
x^=5;
x>>=5;
x<<=5;

//comparison operator

cout<<(a==b);
cout<<(a!=b);
cout<<(a>b);
cout<<(a<b);
cout<<(a<=b);
cout<<(a>=b);

//Logical operator

cout<<(a&&b); //and
cout<<!(b); //not
cout<<(a||b); //OR

/*
 highest to lowest priority:

() - Parentheses
*, /, % - Multiplication, Division, Modulus
+, - - Addition, Subtraction
>, <, >=, <= - Comparison
==, != - Equality
&& - Logical AND
|| - Logical OR
= - Assignment
*/

//STRING 

string name ="koushik";

cout<<name;
//concatenation

string fn = "gudapur";
string ln = "koushik";
string fullname = fn+ln;
cout<<fullname; // also we can do fn.append(ln);

int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
cout << ((time < 18) ? "Good day." : "Good evening.");

    return 0;

    
}