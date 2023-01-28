#include <iostream>
using namespace std;
class Relation{
public:
    int arr[4][4]; //creation of a two-d array
    void Input()
    {
        int b = 1;
        cout << "\n*****Enter one as the input if the relation exist zero if it doesn't exist*****";
        for(int i = 0;i < 4; i++)
        {
        int a = 1;
        for(int j = 0;j < 4; j++)
        {
        cout << "\nRelation between " << b << " and " << a << " exist or not" << endl;
        cin >> arr[i][j];
        if((arr[i][j] != 1) && (arr[i][j] != 0))
        {
        cout << "\nPlease enter only 1 and 0 as input values";
        exit(100);
        }
        a++;
        }
        cout << endl;
        b++;
        }}
    void Output()
       {
        int a = 1;
        int b = 1;
        cout << "\nThe relation is : " << endl;
        cout << "  " << a << " " << ++a << " " << ++a << " " << ++a << endl;
        for(int i = 0;i < 4; i++)
        {
            cout << b << " ";
            for(int j = 0;j < 4; j++)
                {
                    cout << arr[i][j] << " ";
        }
        cout << endl;
        b++;
        }}
    bool Reflexive()
       {
        int A = 1;
        for(int i = 0;i < 4; i++)
            {
                for(int j = 0;j < 4; j++)
                {
                    if(i == j)
                    {
                        if(arr[i][j] == 1)
                        A++;
        }}}
        if(A == 5)
        return true;
        else
        return false;
    }
    bool Symmetric()
    {
       int newarr[4][4];
       for(int i = 0;i < 4; i++)
        {
            for(int j = 0;j < 4; j++)
            {
                newarr[i][j] = arr[j][i];
        }}
       int A = 1;
       for(int i = 0;i < 4; i++)
       {
           for(int j =0 ;j < 4; j++)
           {
               if(arr[i][j] == newarr[i][j])
               A++;
        }}
       if(A == 17)
        return true;
       else
        return false;
    }
    bool AntiSymmetric()
    {
        int A;
        int B;
        for(int i = 0;i < 4; i++)
            {
                for(int j = 0;j < 4; j++)
                {
                    if(i == j)
                    {
                        if(arr[i][j] == 1)
                        B = 1;
        }
        else
        {
        if(((arr[i][j] == 1) && (arr[j][i] == 0)) || ((arr[i][j] == 0) && (arr[j][i] == 1)))
        A = 0;
        }}}
        if(A == 0 && B != 1)
        return true;
        else
        return false;
    }
    bool Transitive()
    {
        int A = 1;
        int B = 0;
        for(int i = 0;i < 4; i++)
            {
                for(int j = 0;j < 4; j++)
                {
                    for(int k = 0;k < 4; k++)
                    {
                        if(i != j)
                        {
                            if(j != k)
                            {
                                if(arr[i][j] == 1)
                                {
                                    if(arr[j][k] == 1)
                                    {
                                        if(arr[i][k] == 1)
                                        A = 0;
                                        else
                                            B = 1;
                                    }
                                }
                            }
                        }
                    }
                }
        }
        if(A == 0 && B != 1)
        return true;
        else
        return false;
    }};
int main()
{
    Relation r;
    r.Input();
    char ch;
    do{
            cout << "\n***********Menu*****************" << endl;
            cout << "1. Show Relation matrix" << endl;
            cout << "2. Check Reflexive " << endl;
            cout << "3. Check Symmetry " << endl;
            cout << "4. Check AntiSymmetry" << endl;
            cout << "5. Check Transitivity" << endl;
            cout << "\nEnter the option " << endl;
            int option;
            cin >> option;
            switch(option)
            {
            case 1 :
                r.Output();
                break;
            case 2 :
                {
                    if(r.Reflexive())
                        {
                            cout << "\nThe relation is reflexive";
                    }
                    else
                        cout << "\nRelation is not reflexive";
                    }
                    break;
            case 3 :
                {
                    if(r.Symmetric())
                        cout << "\nThe relation is symmetric";
                    else
                    cout << "\nThe relation is not symmetric";
                    }
                    break;
            case 4 :
                {
                    if(r.AntiSymmetric())
                        cout << "\nThe relation is anti symmetric";
                    else
                        cout << "\nThe relation is not antisymmetric ";
                    }
                    break;
            case 5 :
                {
                    if(r.Transitive())
                        cout << "\nThe relation is transitive";
                    else
                        cout << "\nThe relation is not transitive";
                    }
                    break;
            default : cout << "\nPlease enter valid option";
            break;
            }
            cout << "\nDo you want to continue?? Enter y if yes";
            cin >> ch;
    }
    while(ch == 'y');
   return 0;
}
