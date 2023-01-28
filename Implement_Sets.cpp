#include <iostream>
#include <cmath>
using namespace std;
void rre(int st[], int &s);
class Sets{
    public:
          int size;
          int arr[100];
          string name;
          void userinput();
          void remove_elements();
          void display();
          bool isMember();
          void cardinality();
          void power_set();
          void Union();
          void intersection();
          void difference();
          void symdif();
};
void Sets::userinput()                                      //USER INPUTS
{
    cout << "ENTER THE NAME OF THE SET: " << endl;
    cin >> name;
    cout << "ENTER THE SIZE OF THE SET " << endl;
    cin >> size;
    cout << "ENTER THE ELEMENTS OF THE SET: " << endl << name << " = {";
    for(int i = 0; i < size; i++)
    {
    cin >> arr[i];
    }
    cout << "}" << endl;
}
void rre(int arr[], int &size )                             //REMOVE REPEATED ELEMENTS
{
    int i,j,k = 0;
    for(i = 0;i < size; i++)
    {
    for( j = i+1; j < size; j++)
        {
        if(arr[i] == arr[j])
        {
        for(k = j; k < size; k++)
        {
        arr[k] = arr[k+1];
        }
        size--;
                }}}}
void Sets::remove_elements()
{
    rre(arr, size);
}
void Sets::display()                                  //DISPLAYING OF THE SET
{
    cout << name << " = {";
    for(int i = 0;i < size; i++)
    {
    cout << arr[i] << ",";
    }
    cout << "\b" << "}" << endl;
}
bool Sets::isMember()                                    //BOOLEAN
{
    int count = 0;
    cout << "ENTER THE NUMBER WHICH IS GOING TO BE CHECKED FOR BOOLEAN: " << endl;
    int num;
    cin >> num;
    for(int i = 0;i < size; i++)
    {
    if(num == arr[i])
    {
    count++;
    }}
    if(count == 0)
    {
    cout << "THE NUMBER IS NOT PRESENT IN THE SET!" << endl;
    return false;
    }
    else
    {
    cout << "THE NUMBER IS PRESENT IN THE SET!" << endl;
    return true;
    }}
void Sets::cardinality()                                    //CARDINALITY
{
    cout << "CARDINALITY: " << size << endl;
}
void Sets::power_set()                                     //POWER SET
{
    int sizeofpowerset = pow(2,size);
    cout<<"{{";
    for(int a = 0; a < sizeofpowerset; a++)
    {
    cout<<"{";
    for(int j = 0;j < size; j++)
    {
    if(a & (1 << j))
    {
    cout << arr[j] << ",";
    }}
    cout << "\b" << "}";
    if(a<sizeofpowerset-1)
    {
    cout << ",";
    }}
    cout << "}" << endl;
}
void Sets::Union()                               //UNION
{
    Sets s1;
    Sets s2;
    cout << "FIRST SET: " << endl;
    s1.userinput();
    cout << "SECOND SET: " << endl;
    s2.userinput();
    int newset = s1.size + s2.size;
    int arrtemp[newset];
    for(int i = 0;i < s1.size; i++)
    {
    arrtemp[i] = s1.arr[i];
    }
    for(int i = 0;i < s2.size; i++)
    {
    arrtemp[i + s1.size] = s2.arr[i];
    }
    cout << "UNION: {";
    rre(arrtemp,newset);
    for(int i = 0;i < newset; i++)
    {
    cout << arrtemp[i] << ",";
    }
    cout << "\b" << "}";

}

void Sets::intersection()                                  //INTERSECTION
{
    Sets s1;
    Sets s2;
    cout << "FIRST SET: " << endl;
    s1.userinput();
    cout << "SECOND SET: " << endl;
    s2.userinput();
    cout << "INTERSECTION: {";
    for(int i = 0;i < s1.size; i++)
    {
    for(int j = 0;j < s2.size; j++)
    {
    if(s1.arr[i] == s2.arr[j])
    {
    cout << s1.arr[i] << ",";
    }}}
    cout << "\b" << "}" <<endl;
}
void Sets::difference()                                       //DIFFERENCE
{
    Sets s1;
    Sets s2;
    cout << "FIRST SET: " << endl;
    s1.userinput();
    cout << "SECOND SET: " << endl;
    s2.userinput();
    s1.remove_elements();
    s2.remove_elements();
    int i,j,k=0;
    char y;
    do
    {
    cout << "PRESS 1 FOR " << s1.name << " - " << s2.name << "." << endl;
    cout << "PRESS 2 FOR " << s2.name << " - " << s1.name << "." << endl;
    cout << "PLEASE ENTER YOUR CHOICE: ";
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        {
        int flag;
        int arrtemp[s1.size];
        for(i = 0;i < s1.size; i++)
        {
        flag = 0;
        for(j = 0;j < s2.size; j++)
        {
        if(s1.arr[i] == s2.arr[j])
        {
        flag = 1;
        }}
        if(flag == 0)
        {
        arrtemp[k++] = s1.arr[i];
        }}
        cout << "THE DIFFERENCE IS: " << s1.name << " - " << s2.name << " = {";
        for(i = 0;i < k; i++)
        {
        cout << arrtemp[i] << ",";
        }
        cout << "\b" << "}" << endl;
        }
        break;
    case 2:
        {
        int flag;
        int arrtemp[s2.size];
        for(i = 0;i < s2.size; i++)
        {
        flag = 0;
        for(j = 0;j < s1.size; j++)
        {
        if(s2.arr[i] == s1.arr[j])
        {
        flag = 1;
        }}
        if(flag == 0)
        {
        arrtemp[k++] = s2.arr[i];
        }}
        cout << "THE DIFFERENCE IS: " << s2.name << " - " << s1.name << " = {";
        for(i = 0;i < k; i++)
        {
        cout << arrtemp[i] << ",";
        }
        cout << "\b" << "}" << endl;
        }
        break;
    default:
        cout << "SORRY!!!" << endl;
        cout << "CAN'T PROCEED FURTHER...." << endl;
        cout << "YOU ENTERED AN INVALID INPUT....." << endl;
        break;
        }
        cout << "PREES y TO CONTINNUE MORE: " << endl << "PLEASE ENTER YOUT CHOICE....: ";
        cin >> y;
        }
        while (y == 'y');
}
void Sets::symdif()                    //SYMMETRIC DIFFERENCE
{
    Sets s1;
    Sets s2;
    cout << "FIRST SET: " << endl;
    s1.userinput();
    cout << "SECOND SET: " << endl;
    s2.userinput();
    s1.remove_elements();
    s2.remove_elements();
    int i,j,k = 0;
    int flag;
    int arrtemp[s1.size + s2.size];
    for(i = 0;i < s1.size; i++)
    {
    flag = 0;
    for(j = 0;j < s2.size; j++)
    {
    if(s1.arr[i] == s2.arr[j])
    {
    flag = 1;
    }}
    if(flag == 0)
    {
    arrtemp[k++] = s1.arr[i];
    }}
    for(i = 0;i < s2.size; i++)
    {
    flag = 0;
    for(j = 0;j < s1.size; j++)
    {
    if(s2.arr[i] == s1.arr[j])
    {
    flag = 1;
    }}
    if(flag == 0)
    {
    arrtemp[k++] = s2.arr[i];
    }}
    cout << "THE SYMMETRIC DIFFERENCE IS: " << endl << "ONLY " << s1.name << " + ONLY " << s2.name << " = {";
    for(i = 0;i < k; i++)
    {
    cout << arrtemp[i] << ",";
    }
    cout << "\b" << "}" << endl;

}
//DRIVER CODE
int main()
{
Sets s1;
int c;
int k;
do
{
    cout << "THE OPERATION YOU CAN PERFORM ON THIS PROGRAM ARE....: " << endl;
    cout << "1. DISPLAY THE SET." << endl;
    cout << "2. CHECK THE BOOLEAN OF THE ENTERED NUMBER." << endl;
    cout << "3. POWER SET." << endl;
    cout << "4. CARDINALITY OF THE SET." << endl;
    cout << "5. UNION OF TWO USET ENTERED SETS." << endl;
    cout << "6. INTERSECTION OF TWO USER ENTERED SETS." << endl;
    cout << "7. DIFFERENCE OF TWO USER ENTERED SETS." << endl;
    cout << "8. SYMMETRIC DIFFERENCE OF TWO USER ENTERED SETS." << endl << endl;
    cout << "DEAR USER, " << endl;
    cout << "PLEASE ENTER YOUR CHOICE TO PROCEED THE PROGRAM......" << endl;
    cin >> k;
    switch (k)         //SWITCH CASE
        {
        case 1:              //DISPLAY
            {
            s1.userinput();
            cout << "THE DISPLAYED SET IS: " << endl;
            s1.display();
            }
            break;
        case 2:            //BOOLEAN
            {
            s1.userinput();
            cout << "BOOLEAN: " << endl;
            s1.display();
            s1.isMember();
            }
            break;
        case 3:            //POWER SET
            {
            s1.userinput();
            s1.remove_elements();
            cout << "POWER SET: " << endl << "P(" << s1.name << ") = ";
            s1.power_set();
            }
            break;
        case 4:            //CARDINALITY
            {
            s1.userinput();
            cout << "SET: " << endl;
            s1.display();
            s1.remove_elements();
            s1.display();
            s1.cardinality();
            }
            break;
        case 5:            //UNION
            {
                s1.Union();
            }
            break;
        case 6:           //INTERSECTION
            {
                s1.intersection();
            }
            break;
        case 7:          //DIFFERENCE
            {
                s1.difference();
            }
            break;
        case 8:                 //SYMMETRIC DIFFERENCE
            {
                s1.symdif();
            }
            break;
        default:
            cout << "SORRY!!!" << endl;
            cout << "CAN'T PROCEED FURTHER...." << endl;
            cout << "YOU ENTERED AN INVALID INPUT....." << endl;
            break;
        }
        cout << "WOULD YOU LIKE TO CONTINUE THE PROGRAM..." << endl;
        cout << "THEN PRESS '1'" << endl;
        cin >> c;
        }
         while (c == 1);
        return 0;
}






