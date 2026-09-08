//Given an array of n integers, find and print the largest element in the array.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 25, 7, 45, 32};
    int n = 5;

    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest element = " << largest << endl;

    return 0;
}