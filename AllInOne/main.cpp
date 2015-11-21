#include "sorts.h"

#include <iostream>
using namespace std;

int main()
{

         int sortChoice;
         cout<<"Please choose between bubble(1),insertion(2) sort,direct selection(3): ";
         cin>>sortChoice;
         switch(sortChoice){
          case 1:
              BubbleSort();
              break;
          case 2:
              InsertionSort();
            break;

          case 3:
              DirectSelection();
            break;

          default:
            cout<<"Error"<<endl;
            return main();

         }




    return 0;
}
