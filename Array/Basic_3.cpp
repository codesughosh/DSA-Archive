#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 62, 34, 4, 54};
    int n = sizeof(arr)/sizeof(arr[0]);

    int small = arr[0], second_small = INT_MAX;
    int large = arr[0], second_large = INT_MIN;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if(arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        else if(arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }
    return 0;
}
