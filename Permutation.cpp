#include <iostream>
using namespace std;
int permutation(string s, int first, int last)
{
    if (first == last)
        {
            cout << s << " ";
            }
            else
                {
                    for(int i = first;i <= last; i++)
                    {
                        swap(s[first], s[last]);
                        permutation(s, first+1, last);
                    }
                }
}
int main()
{
int n;
cout << "Permutations\n";
cout << "Enter the size of elements which are going to permuted: " << endl;
cin >> n;
string str;
cout << "Enter the values: \n" << endl;
cin >> str;
permutation(str, 0, n-1);
return 0;
}
