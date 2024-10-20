#include <iostream>
using namespace std;

int getMissingNumber(int givenArray[], int length)
{
    int sumOfAllNumbers = (length * (length + 1)) / 2;
    int sumOfUserNumbers = 0;

    for (int i = 0; i < length - 1; i++)
    {
        sumOfUserNumbers += givenArray[i];
    }
    int missingNumber = sumOfAllNumbers - sumOfUserNumbers;
    return missingNumber;
}

int main()
{
    int length;
    cout << "Enter the total count of numbers including the missing number :" << endl;
    cin >> length;

    int numArray[length - 1];

    cout << "Enter the numbers excluding the missing number one by one :" << endl;
    for (int i = 0; i < length - 1; i++) {
       cin >> numArray[i];
    }

    cout << "Missing number is : " << getMissingNumber(numArray, length) << endl;
    return 0;
}
