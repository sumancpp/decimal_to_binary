#include <iostream>
using namespace std;
 
int decToBin(int decNum){
  int ans=0, pow=1;
  while(decNum>0){
    int rem = decNum % 2;
    decNum = decNum / 2;
    ans += (rem * pow);
    pow = pow * 10;
  }
  return ans;
}
int main() {
  // int decNum = 50;
  // cout<<"The binary number is "<<decToBin(50);

  for(int i=1;i<=10;i++){
    cout<<"The binary number of "<< i << " is "<<decToBin(i)<<endl;
  }
  return 0;
}
