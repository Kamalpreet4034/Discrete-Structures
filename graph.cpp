#include <iostream>
#include <fstream>
using namespace std;
class Graph {
    private:
            int vertex;
            int ar[25][25];
    public:
            void readData (string file);
            void OutData (string file);
            bool is_Directed (string file);
            bool is_Simple (string file);
            bool is_Complete (string file);
            bool is_Cycle (string file);
            void Union (string file1,string file2);
            void degree (string file);
            void Indegree (string file);
            bool ECircuit (string file);
            bool EPath (string file);
            bool Hamiltonian (string file);
};
bool Graph::EPath (string file)
{
    fstream input;
    int vertices;
    int edges;
    input.open (file);
    input >> vertices;
    input >> edges;
    for (int i = 0;i < vertices; i++)
    {
    for (int j = 0;j < edges; j++)
    {
    input >> ar[i][j];
    }
    }
    int deg[vertices] = {0};
    for(int i = 0;i < vertices; i++)
    {
    int sum = 0;
    for(int j = 0;j < edges; j++)
    {
    sum+= ar[i][j];
    deg[i] = sum;
    }}
    int odd = 0;
    for(int i = 0;i < vertices; i++)
    {
    if(deg[i]%2!=0)
    odd++;
    }
    if(odd==2)
    return true;
    else
    return false;
}
bool Graph::ECircuit (string file)
{
    fstream input;
    int vertices;
    int edges;
    input.open(file);
    input >> vertices;
    input >> edges;
    cout << " ";
    int e = 1;
    for(int i = 0;i < edges;i++)
    {
    cout << " " << e;
    e++;
    }
    char a1 = 'a';
    cout << endl;
    for(int i = 0;i < vertices; i++)
    {
    cout << a1 << " ";
    a1++;
    for(int j = 0;j < edges; j++)
    {
    input >> ar[i][j];
    cout << ar[i][j]<<" ";
    }
    cout << endl;
    }
    int deg[vertices] = {0};
    for(int i = 0;i < vertices; i++)
    {
    int sum = 0;
    for(int j = 0;j < edges; j++)
    {
    sum+=ar[i][j];
    deg[i] = sum;
    }}
    for(int i = 0;i < vertices; i++)
    {
    if(deg[i]%2 != 0)
    return false;
    }
    return true;
}
void Graph::Indegree (string file)
{
    fstream input;
    int vertices;
    int edges;
    input.open(file);
    input >> vertices;
    input >> edges;
    cout << " ";
    int e = 1;
    for(int i = 0;i < edges; i++)
    {
    cout << " " << e;
    e++;
    }
    char a1 = 'a';
    cout << endl;
    for(int i = 0;i < vertices; i++)
    {
    cout << a1 << " ";
    a1++;
    for(int j = 0;j < edges; j++)
    {
    input >> ar[i][j];
    cout << ar[i][j]<<" ";
    }
    cout << endl;
    }
    input.close();
    char a = 'a';
    for(int i = 0;i < vertices; i++)
    {
    int out = 0;
    int in = 0;
    for(int j = 0;j < edges; j++)
    {
    if(ar[i][j] == 2)
    out++;
    else if(ar[i][j] == 1)
    in++;
    }
    cout << "In-Degree:\n " << a << " is " << in;
    cout << "Out-Degree:\n" << a << " is " << out;
    a++;
    }
    }
void Graph::degree(string file)
{
    fstream input;
    int vertices;
    int edges;
    input.open(file);
    input >> vertices;
    input >> edges;
    cout << " ";
    int e = 1;
    for(int i = 0;i < edges; i++)
    {
    cout << " " << e;
    e++;
    }
    char a1 = 'a';
    cout << endl;
    for(int i = 0;i < vertices; i++)
    {
    cout << a1 << " ";
    a1++;
    for(int j = 0;j < edges; j++)
    {
    input >> ar[i][j];
    cout << ar[i][j] << " ";
    }
    cout << endl;
    }
    int deg[vertices] = {0};
    for(int i = 0;i < vertices; i++)
    {
    int sum = 0;
    for(int j = 0;j < edges; j++)
    {
    sum+=ar[i][j];
    deg[i] = sum;
    }}
    char a = 'a';
    for(int i = 0;i < vertices; i++)
    {
    cout << "\nDegree of " << a << " is " << deg[i];
    a++;
    }}
void Graph::Union(string file1,string file2)
{
    readData(file1);
    int arr[25][25];
    int vertex2;
    fstream input;
    input.open(file2);
    input >> vertex2;
    for(int i = 0;i < vertex2; i++)
    {
    for(int j = 0;j < vertex2; j++)
    input >> arr[i][j];
    }
    for(int i = 0;i < vertex; i++)
    {
    for(int j = 0;j < vertex; j++)
    {
    arr[i][j] = arr[i][j]|ar[i][j];
    cout << arr[i][j] << " ";}
    cout << endl;
    }
}
bool Graph::is_Cycle(string file)
{
    readData(file);
    int A = 0;
    int sum = 0;
    int vertices = vertex;
    for(int i = 0;i < vertices; i++)
    {
    sum = 0;
    for(int j = 0;j < vertices; j++)
    {
    sum = sum+ar[i][j];
    }
    int k = i;
    if( k == i )
    {
    if(sum == 2)
    {
    if( i == 0 && k == 0 )
    {
    if(ar[0][0] == 0)
    {
    if(ar[0][1] == 1)
    {
    if(ar[0][vertices-1] == 1)
    A++;
    break;
    }}}
    else if(i == (vertices - 1) && k == (vertices - 1))
    {
    if(ar[i][k] == 0)
    {
    if(ar[i][0] == 1)
    {
    if(ar[i][k-1] == 1)
    A++;
    break;
    }}}
    else
    {
    if(ar[i][k] == 0)
    {
    if(ar[i][k-1] == 1)
    {
    if(ar[i][k+1] == 1)
    {
    A++;
    break;
    }
     }}}}}
    if(A == vertices)
    return true;
    else
    return false;
    }
    return true;
}
bool Graph::is_Complete(string file)
{
    readData(file);
    int flag = 0;
    for(int p = 0;p < vertex; p++)
    {
    for(int q = 0;q < vertex; q++)
    {
    if(( p != q ) && ( p < q ))
    {
    if( ar[p][q] != 1 )
    {
    flag = 1;
    break;
    }}}}
    if( flag == 1 )
    {
    return false;
    }
    else
    {
    return true;
    }
}
bool Graph::is_Simple(string file)
{
    readData(file);
    for(int i = 0;i < vertex; i++)
    {
    for(int j = 0;j < vertex; j++)
    {
    if(i == j)
    {
    if( ar[i][j] )
    return false;
    }}}
    return true;
}
bool Graph::is_Directed(string file)
{
    readData(file);
    int A = 0;
    int newadj[vertex][vertex];
    for(int i = 0;i <  vertex; i++)
    {
    for(int j = 0;j < vertex; j++)
    {
    newadj[i][j] = ar[j][i];
    }}
    for(int i = 0;i < vertex; i++)
    {
    for(int j = 0;j < vertex; j++)
    {
    if(ar[i][j] == newadj[i][j])
    A++;
    }}
    if(A == vertex*vertex)
    return false;
    else
    return true;
}
void Graph::readData(string file)
{
    fstream inputt;
    inputt.open(file,std::ios::in);
    if(!inputt.is_open())
    {
    cout << "NO FILE FROM THIS NAME IF FOUND....PLEASE CREATE A FILE FROM SUCH NAME..";
    exit(100);
    }
    inputt >> vertex;
    ar[vertex][vertex];
    while(inputt)
    {
    for(int i = 0;i < vertex; i++)
    {
    for(int j = 0;j < vertex; j++)
    {
    inputt >> ar[i][j];
    }}}
}
void Graph::OutData(string file)
{
    readData(file);
    for(int i = 0;i < vertex; i++)
    {
    for(int j = 0;j < vertex; j++)
    {
    cout << ar[i][j];
    }
    cout << endl;
    }
}
int main()
{
    Graph g;
    char ch;
    do
    {
    cout << "THIS PROGRAM SHOWS THE OPERATION APPLIED ON THE GRAPH..." << endl;
    cout << "1. Output... " << endl;
    cout << "2. Directed or Not..." << endl;
    cout << "3. Simple or Not..." << endl;
    cout << "4. Complete or Not.." << endl;
    cout << "5. Cycle or Not.." << endl;
    cout << "6. Union.." << endl;
    cout << "7. Degree of vertices in an undirected graph" << endl;
    cout << "8. In-degree and out degree of all the vertices in a directed graph" << endl;
    cout << "9. Checking Euler Path and Circuit" << endl;
    cout << "10. Hamiltonian or not..." << endl;
    cout << "Please enter any one number...";
    int op;
    cin >> op;
    switch(op)
    {
    case 1:{
            g.OutData("Matrix.txt");
           }
            break;
    case 2:{
            bool m=g.is_Directed("Matrix.txt");
            if(m)
            cout << "The graph is Directed...";
            else
            cout << "This graph is not Directed...";
            }
            break;
    case 3:
            {
            if(g.is_Simple("Matrix.txt"))
            cout << "It is a Simple graph";
            else
            cout << "The graph is not Simple...";
            }
            break;
    case 4:
            {
            if(g.is_Complete("Matrix.txt"))
            cout << "It is a Complete graph...";
            else
            cout << "Not a Complete graph...";
            }
            break;
    case  5:
            {
            if(g.is_Cycle("Matrix.txt"))
            cout << "It is a Cycle graph...";
            else
            cout << "Not a Cycle graph...";
            }
            break;
    case 6:
            {
            g.Union("Union1.txt","Union2.txt");
            }
            break;
    case 7:
            {
            g.degree("Matrix.txt");
            }
            break;
    case 8:
            {
            g.Indegree("Matrix.txt");
            }
            break;
    case 9:
            {
            if(g.ECircuit("Matrix.txt"))
            cout << "Having Euler Circuit";
            else
            cout << "Not having Euler Circuit";
            if(g.EPath("Matrix.txt"))
            cout << "Having Euler Path";
            else
            cout << "Not having Euler Path";
            }
            break;
            default :
                 cout << "This option is not valid...\nPlease enter the option given above in the menu...";
                 break;
            }
            cout << "\nDo you want to continue....?? enter y ";
            cin >> ch;
            }
            while( ch == 'y' );
            return 0;
}
