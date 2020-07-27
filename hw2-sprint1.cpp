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
        //Debug Array1
        //cout << Array1[count] << endl;
    }
    count = 0;
   for(count; count < num2Length; count++)
    {
        Array2[count] = num2[num2End] -48;
        num2End--;
        //Debug Array2
        //cout << Array2[count] << endl;
    }
    combineArray(Array1, num1Length, Array2, num2Length);
}

//sprint two, combine arrays and export value
void combineArray(int Array1[],int length1,int Array2[],int length2)
{
    int fullLength = 0;
    if (length1 >= length2)
    {
    fullLength = length1;
    }
    else
    {
     fullLength = length2;
    }
    //Debug Length
    /*
    cout << "Length 1" << length1 << endl;
    cout << "Length 2" << length2 << endl;
    cout << "total length:" << fullLength << endl;
    */

   int combinedArray[fullLength] = {0};
    for(int count = 0; count < fullLength; count ++)
    {
        if((combinedArray[count] + Array1[count] + Array2[count]) >= 10)
        {
            combinedArray[count] = combinedArray[count] + Array1[count] + Array2[count] - 10;
            combinedArray[count+1] = 1;
            //Debug Tens Place
            //cout << "Tens Moved" << endl;
        }
        else
        {
            {
                combinedArray[count] = combinedArray[count] + Array1[count] + Array2[count];
                //Debug Typical Case
                //cout << "value kept!" << endl;
            }
        }
    }
        for(int output = 0; output < fullLength; output++)
        {
            cout << combinedArray[output] << ",";
            if (combinedArray[output+1] != 0 && output == fullLength - 1)
            {
                cout << combinedArray[output + 1];
            }
        }
    
    
}
