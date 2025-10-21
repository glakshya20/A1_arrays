#include <iostream>
using namespace std;

#define MAX 100

int arr[MAX], size = 0;

// Create array
void create()
{
    cout << "Enter number of elements: ";
    cin >> size;

    if (size > MAX)
    {
        cout << "Too many elements!\n";
        size = 0;
        return;
    }

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

// Display array
void display()
{
    if (size == 0)
    {
        cout << "Array is empty!\n";
        return;
    }
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Insert element
void insert()
{
    if (size == MAX)
    {
        cout << "Array full!\n";
        return;
    }

    int pos, val;
    cout << "Enter position (1 to " << size + 1 << "): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;

    if (pos < 1 || pos > size + 1)
    {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = size; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = val;
    size++;
    cout << "Inserted!\n";
}

// Delete element
void remove()
{
    if (size == 0)
    {
        cout << "Array empty!\n";
        return;
    }

    int pos;
    cout << "Enter position (1 to " << size << "): ";
    cin >> pos;

    if (pos < 1 || pos > size)
    {
        cout << "Invalid position!\n";
        return;
    }

    cout << "Deleted: " << arr[pos - 1] << endl;
    for (int i = pos - 1; i < size - 1; i++)
        arr[i] = arr[i + 1];
    size--;
}

// Linear search
void search()
{
    if (size == 0)
    {
        cout << "Array empty!\n";
        return;
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Found at position " << i + 1 << endl;
            return;
        }
    }
    cout << "Not found!\n";
}

int main()
{
    int choice;
    do
    {
        cout << "\n---- MENU ----\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            remove();
            break;
        case 5:
            search();
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
