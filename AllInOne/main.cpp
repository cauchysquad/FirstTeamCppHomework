#include "BubbleSort.h"
#include "InsertionSort.h"
#include <iostream>
using namespace std;

int main()
{
    int task;
    cout<<"Enter the task number[1-2]: ";
    cin>>task;
    switch(task){
     case 1:
         int sortChoice;
         cout<<"Please choose between bubble(1),insertion(2) sort: ";
         cin>>sortChoice;
         switch(sortChoice){
          case 1:
              BubbleSort();
              break;
          case 2:
              InsertionSort();
            break;

         }
         break;

     default:
         cout<<"Error! The number should be between 1 and 2";

         return main();
         break;
    }

    return 0;
}
