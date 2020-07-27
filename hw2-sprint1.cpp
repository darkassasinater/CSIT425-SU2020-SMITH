#include <iostream>
#include <string.h>
using namespace std;

void combineArray(int[], int, int[], int);
//sprint 1: Take in numbers and convert to arrays
int main()
{
     string num1;
     int num1Length = 0;
     string num2;
     int num2Length = 0;
     int count = 0;
    
    cout << "Input first number: ";
    cin >> num1;
    num1Length = num1.length();
    int num1End = num1Length - 1;
    int Array1[num1End];

    cout << "Input second number: ";
    cin >> num2;
    num2Length = num2.length();
    int num2End = num2Length - 1;
    int Array2[num2End];

    for(count; count < num1Length; count++)
    {
        Array1[count] = num1[num1End] -48;
        num1End--;
    }
    count = 0;
   for(count; count < num2Length; count++)
    {
        Array2[count] = num2[num2End] -48;
        num2End--;
    }
    cout << "Time to combine!" << endl;
    combineArray(Array1, num1Length, Array2, num2Length);
   system("pause");
   return 0;
}

//sprint two, combine arrays and export value
void combineArray(int Array1[], int length1, int Array2[], int length2)
{
    int fullLength = 0;
    if (length1 > length2)
    {
    int fullLength = length1;
    }
    else
    {
        {
            int fullLength = length2;
        }
    }
    
    int combinedArray[fullLength] = {0};

    for(int count = 0; count < fullLength; count ++)
    {
        if((Array1[count] + Array2[count]) > 10)
        {
            combinedArray[count] = combinedArray[count] + (Array1[count] + Array2[count] - 10);
            combinedArray[count+1] = 1;
        }
        else
        {
            {
                combinedArray[count] = combinedArray[count] + Array1[count] + Array2[count];
            }
        }
        
        for(int output = fullLength; output >= 0; output--)
        {
            if (combinedArray[output] == 0 && output == fullLength)
            {
                output--;
            }
            cout << combinedArray[output] << endl;
        }
    }
}
