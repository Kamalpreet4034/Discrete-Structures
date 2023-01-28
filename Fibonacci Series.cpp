#include <iostream>
using namespace std;
int f( int x )
{
   if(( x == 1 ) || ( x == 0 ))
    {
      return( x );
   }
   else
    {
      return(f(x-1) + f(x-2));
   }
}
int main()
{
   int x,i = 0;
   cout << "Fibonacci Series\n";
   cout << "Enter number: ";
   cin >> x;
   cout << "Fibonacci Series till " << x << " times: ";
   while(i < x)
    {
      cout << " " << f(i);
      i++;
   }
   return 0;
}
