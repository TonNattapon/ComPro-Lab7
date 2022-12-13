#include<iostream>
using namespace std;

double adiff(int a,int b){
  int c;
  a = a % 360, b = b % 360;
  c = a - b;
    if (c < 0){
     c = c * -1;
    }
    if (c > 180)
    {
      c = 360 - c;      
    }
    return c;
}


int main(){
  cout << adiff(180,270);
  cout << endl;
  cout << adiff(210,45);
  cout << endl;
  cout << adiff(0,360);
  cout << endl;
  cout << adiff(10,350);
  cout << endl;
  cout << adiff(95,260);
  cout << endl;
  cout << adiff(90,-90);
  cout << endl;
  cout << adiff(1000,280);
  cout << endl;
  cout << adiff(60,244);
  cout << endl;
}
