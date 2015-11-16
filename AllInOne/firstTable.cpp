#include "firstTable.h"
#include <iostream>

using namespace std;

void firstTable(){
  int limit;
  cout<<"Enter the limit:"<<endl;
  cin>>limit;
  int n = 1;
  for(int i = 0; i < 4; i++){
    if(i > 0) n += 4;
    for(int j = n; j < n+4; j++){
        cout<<j<<" ";
    }
    cout<<endl;
  }

}
