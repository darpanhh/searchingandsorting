#include <iostream>
using namespace std;

int BinarySearch(int *arr, int n, int data)
{
    int f = 0, l = n - 1;

    while (f <= l)
    {
        int mid = (f + l) / 2; 

        if (data == arr[mid])
        {
            return mid;
        }
        else if (data > arr[mid])
        {
            f = mid + 1;
        }
        else
        {
            l = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    int index = BinarySearch(arr, n, 9);
    cout << "Element found at index: " << index << endl;
    return 0;
}
