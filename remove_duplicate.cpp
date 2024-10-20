#include <iostream>
using namespace std;

void deleteRepeats(int *arr, int arraySize, int& posUsed);
void printArray(int *arr, int arraySize);

int main()
{
    int arr[10] = { 1, 2, 2, 5, 6, 1};
    int posUsed = 6;
    int arraySize = 10;
    deleteRepeats(arr, arraySize, posUsed);
    printArray(arr, arraySize);
    return 0;
}

void deleteRepeats(int *arr, int arraySize, int& posUsed)
{
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i; j < arraySize; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < arraySize; k++)
                {
                    arr[k] = arr[k + 1];
                }
                posUsed--;
            }
            else
                j++;
        }
    }
}

void printArray(int *arr, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << "  ";
    }
}