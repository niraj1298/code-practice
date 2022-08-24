//Not my first program in c++
#include <iostream>
using namespace std;

double stdev(double *arr, int size)
{
    double sum = 0;
    double mean = 0;
    double stdev = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    mean = sum / size;
    for (int i = 0; i < size; i++)
    {
        stdev += (arr[i] - mean) * (arr[i] - mean);
    }
    stdev = stdev / size;
    return stdev;
}

int main(){
double arr[0];
int size;
cout << "Enter the size of the array: ";
cin >> size;
for (int i = 0; i < size; i++)
{
    cin >> arr[i];
}
cout << "The standard deviation is: " << stdev(arr, size) << endl;

return 0;
}