#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10] = { 6, 1, 9, 567, 123, 67, 123, 98, 80, 200 };
    int len = sizeof(arr)/sizeof(int);

    do
    {
        int pass = 0;

        for (int i = 1; i < len; ++i)
        {
            if (arr[i-1] > arr[i])
            {
                swap (arr[i-1], arr[i]);
                pass = i;
            }
        }
        len = pass;
    }
    while (len);

    for (int i = 0; i < 10; ++ i)
        cout << arr[i] << endl;

    return 0;
}
