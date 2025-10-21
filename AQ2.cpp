// 1024031084   Lakshya Gupta

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_set<int> s;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end())
        { // if not already present
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }
    cout << endl;
}
