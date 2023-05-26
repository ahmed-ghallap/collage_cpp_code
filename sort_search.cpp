#include <iostream>

using namespace std;

void printList(int arr[], int end);
void swap(int &n1, int &n2);
void sort(int arr[], int end);
int search(int el, int arr[], int start, int end);

int main()
{
    int list[] = {5, 4, 3, 2, 1};
    int length = sizeof(list) / sizeof(list[0]);

    sort(list, length);

    cout << "After: ";
    printList(list, length);


    cout << "Iteam: ";
    int item;
    cin >> item;
    
    int iteam_index = search(item, list, 0, length-1);
    if (iteam_index == -1)
        cout << "Not Found!" << endl;
    else 
        cout << "Found at " << iteam_index << endl;

}

int search(int el, int arr[], int start, int end)
{
    int mid;
    while (start <= end)
    {
        mid = (start+end) / 2;

        if (arr[mid] == el)
            return mid;
        else if (el < arr[mid])
        {
            start = start;
            end = mid-1;   
        }
        else
        {
            start = mid+1;
            end = end;
        }
    }
    return -1;
    
}

void sort(int arr[], int end)
{
    for (int i = 0; i < end; i++)
    {
        int smallest = i;
        for (int j = i; j < end; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        swap(arr[smallest], arr[i]);
    }
}

void swap(int &n1, int &n2)
{
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}


void printList(int arr[], int end)
{
    for (int i = 0; i < end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
