#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int i=1;
  while(i<=n){
      int j=1;
      while(j<=n){
          cout<<i;
          i++;
      }
      cout<<endl;
      j++;
  }
  return 0;
}
#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int i=1;
  int cnt=0;
  while(i<=n){
      int j=1;
      while(j<=n){
          cnt=cnt+1;
          cout<<cnt;
          j++;
      }
      cout<<endl;
      i++;
  }
  return 0;
}
