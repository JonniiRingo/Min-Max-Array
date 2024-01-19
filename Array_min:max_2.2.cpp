#include <iostream> 
using namespace std;






int main(){


int sum = 0;
int size;
int numbers[size];
int max = numbers[0];
int min = numbers[0];

cout << "Enter a size of array: ";
cin >> size;
cout << "" << endl;
for (int i = 0; i < size; i++)
{
    cout << "Enter a number: ";
    cin >> numbers[i];
    sum += numbers[i];

    if (numbers[i] <= min ){
        min = numbers[i];
    }

    if (numbers[i] >= max){
        max = numbers[i];
    }
}


cout << "" << endl;
cout << "The finite sum of the sereies is: " << sum << endl; 
cout << "" << endl; 
cout << "The minimum value in the array is " << min << endl;
cout << "" << endl; 
cout << "The maximum value of the array is: " << max << endl; 
cout << "" << endl;


    return 0;
}