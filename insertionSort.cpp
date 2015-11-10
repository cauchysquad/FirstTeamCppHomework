#include <iostream>
#include <algorithm>
using namespace std;

int main()
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

    return 0;
}
