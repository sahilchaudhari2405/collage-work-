
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
            
    cout << "sort array print" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}



// Driver code
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = *(&arr + 1) - arr;
    bubbleSort(arr, n);
    return 0;
}

// This code is contributed by rathbhupendra
