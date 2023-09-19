#include <bits/stdc++.h>
using namespace std;
void insertion(int arr[], int size, int data, int pos)
{
    if (pos <= 0 || pos < size + 1)
        cout << "Invalid Position";
    else
    {
        for (int i = size - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = data;
        size++;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[50], size, data, pos;
    cout << "Enter size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter data: ";
    cin >> data;
    insertion(arr,size,data,pos);

    return 0;
}