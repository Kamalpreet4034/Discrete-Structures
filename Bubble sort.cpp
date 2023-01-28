#include<iostream>
using namespace std;
int main()
{
    int n, i, arr[100], j,last;
    cout<<"Enter the Size: ";
    cin>>n;

    cout<<"Enter Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<(n-1); i++)
        {
            for(j=0; j<(n-i-1); j++)
            {
                if(arr[j]>arr[j+1])
                {
                    last= arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = last;
                    }
                    }
                    }
    cout<<"\nThe Sorted Array using BUBBLE SORT is: \n";
    for(i=0; i<n; i++)
            cout<<arr[i]<<" ";
            cout<<endl;
    return 0;
}
