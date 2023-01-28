#include <iostream>
using namespace std;
int BinarySearch( int arr[], int num, int lowest, int highest )
{
    int middle;
    if( lowest > highest )
    {
        return 0;
        }
        else
            {
                middle = ( lowest + highest )/2;
                if(arr[middle] == num)
                    {
                        cout << "Number is found at " << middle << " index \n";
                        return 0;
                        }
                        else if(num > arr[middle])
                            {
                                BinarySearch(arr, num, middle+1, highest);
                                }
                                else if(num < arr[middle])
                                    {
                                        BinarySearch(arr, num, lowest, middle-1);
                                    }
            }
}
int main(){
int arr[100], num, i, n, lowest, highest;
cout << "Program of Binary Search\n";
cout << "Enter the size of an array: " << endl;
cin >> n;
cout << "Enter the sorted values: " << endl;
for(i = 0;i < n; i++)
    {
        cin >> arr[i];
        }
        cout << "Enter a value to be search: " << endl;
        cin >> num;
        lowest = 0;
        highest = n-1;
        BinarySearch(arr, num, lowest, highest);
return 0;
}
