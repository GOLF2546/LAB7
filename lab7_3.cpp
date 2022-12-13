#include<iostream>
using namespace std;

int adiff(int a,int b)
{
  int c;
  if(b>a)
  {
    c = b-a;
  }else
  {
    c = a-b;
  }
  if(c%360 > 180)
  {
    return 360-c%360;
  }else
  {
    return c%360;
  }
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244) << endl;
}
