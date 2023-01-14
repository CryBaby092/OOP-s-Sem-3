/*Write a C++ program to print all the repeated numbers with their frequency in an array in minimum time
complexity*/

#include <bits/stdc++.h>
using namespace std;
 
void countFreq(int arr[], int n)
{
    // Mark all array elements as not visited
    vector<bool> visited(n, false);
 
    // Traverse through array elements and count frequencies
    for (int i = 0; i < n; i++) {
 
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
 
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
 
int main()
{
    int n;
        cout << "Enter the no. of Elements: ";
        cin>>n;

    int arr[n];
        cout << "Enter the Elements: ";
        for(int i=0; i<n ;i++)
        cin>>arr[i];
        cout << "Repeated No.: Frequency:\n";
        countFreq(arr, n);
    return 0;
}
