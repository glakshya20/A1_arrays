
// 1024031084 Lakshya Gupta

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr, n);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
