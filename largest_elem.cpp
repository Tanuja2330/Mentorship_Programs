#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int largest(int arr[], int n, int i)
{
    
    if (i == n - 1) {
        return arr[i];
    }
    int recMax = largest(arr, n, i + 1);
    return max(recMax, arr[i]);
}
 

int main()
{
    int arr[] = { 10, 50,78,84,13 };
    int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Largest in given array is " << largest(arr, n, 0);
    return 0;
}