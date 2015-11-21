#include "sorts.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void DirectSelection()
{
    int a[20];
    int n ,k;
    int minEl ,swapEl;
    cin >> n;
    for(int i = 0; i< n; i++)
        cin >> a[i];

    for(int i = 0; i < n - 1; i++)
    {
        k = i;
        minEl = a[i];
        for(int j = i + 1; j < n; j++)
            if(a[j] < minEl)
        {
            minEl = a[j];
            k = j;
        }
        swapEl = a[k];
        a[k] = a[i];
        a[i] = swapEl;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] <<endl ;
    //return 0;
}



using namespace std;

void InsertionSort()
{
    // Insertion sort
    int arr[10] = {9, 1, 6, 8, 2, 3, 0, 7, 4, 5};
    int sizeArr = sizeof(arr)/sizeof(int);
    int currVal, ind;

    for (int k = 1; k < sizeArr; ++k)
    {
        currVal = arr[k];
        ind = k;

        while (ind > 0 && arr[ind-1] > currVal)
        {
            swap(arr[ind], arr[ind-1]);
            --ind;
        }
    }

    for (int j = 0; j < sizeArr; ++j)
        cout << arr[j] << " " << endl;


}



using namespace std;

void BubbleSort(){
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
}


