#include<bits/stdc++.h>
using namespace std;
void swaped(int &a, int &b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
void bubblesort(int arr[], int n) {
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; i < n - 1; j++) {
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	for (int i = 0; i < n;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n;i++)
	{
		cin >> arr[i];
	}
	bubblesort(arr, n);
	return 0;
}