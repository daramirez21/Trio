#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE


void greatestToLeast(int &, int &, int &);



int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

  // <-- ADD YOUR FUNCTION CALL HERE

    greatestToLeast(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE

void greatestToLeast(int &a, int &b, int &c)
{
   int temp = 0;

    if( a < b) 
    {
     temp = a;
     a = b;
     b = temp;
    }
    if(a < c)
    {
     temp = a;
     a = c;
     c = temp;
    }
    if( b < c)
    {
     temp = b;
     b = c;
     c = temp;
    }
}

