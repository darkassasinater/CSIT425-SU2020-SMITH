#include <iostream>

using namespace std;

//sprint 1: Take in numbers and convert to arrays
int main()
{
     string num1 = " ";
     int num1Length = 0;
     string num2 = " ";
     int num2Length = 0;
     int count = 1;
    
    cout << "Input first number: ";
    cin >> num1;
    num1Length = num1.length();
    int num1End = num1Length;
    int Array1[num1Length] = {0};

    cout << "Input second number: ";
    cin >> num2;
    num2Length = num2.length();
    int Array2[num2Length] = {0};
    int num2End = num2Length;
    for(count = 0; count < num1Length; count++)
    {
        Array1[count] = num1[num1End];
        num1End--;
        cout << Array1[count];
    }
    count = 0;
   /* for(count = 0; count < num2Length; count++)
    {
        Array2[count] = num2[num2End];
        num2End--;
    }
    */
   system("pause");
   return 0;
}

void combineArray(int Array1[], int Array2[])
{

}