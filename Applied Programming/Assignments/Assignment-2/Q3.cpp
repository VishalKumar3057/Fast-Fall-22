#include <bits/stdc++.h>
using namespace std;
  
void printHistogram(int arr[], int n)
{
    int maxEle = *max_element(arr, arr + n);
  
    for (int i = maxEle; i >= 0; i--) {
        cout.width(2);
        cout << right << i << " | ";
        for (int j = 0; j < n; j++) 
		{
            if (arr[j] >= i)
                cout << " x ";
            else
                cout << "   ";
        }
        cout << "\n";
    }
  
    for (int i = 0; i < n + 3; i++)
        cout << "---";
  
    cout << "\n";
    cout << "     ";
  
    for (int i = 0; i < n; i++) 
	{
        cout.width(2); 
        cout << right << arr[i] << " ";
    }
}
  
int main()
{
    int arr[4] = { 8,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printHistogram(arr, n);
    return 0;
}
