#include <iostream>
#include <vector>
using namespace std;

int main(){


  int n;


  cout<<"Enter the size of array you want to sort:";
  cin>>n;

  vector<int> a(n);

  for(int i = 0; i < a.size(); i++){
    cout<<"Number "<<i<<"=";
    cin>>a[i];
  }
  for(int j = 0; j < a.size()-1; j++){
    for(int k = 0; k < a.size()-1; k++){
    if(a[k] > a[k+1]){
        swap(a[k],a[k+1]);
    }
    }
  }
  for(int i = 0; i < n; i++){
    cout<<a[i]<<" ";
  }


  return 0;
}
