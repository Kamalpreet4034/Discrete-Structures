/**Project on Food web in Marine life**/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
class FoodWeb{
    private:
        int arr[100][100],arrr[1000];
        int Stations;
    public:
        void readData(string Filename);
        void outputData(string Filename);
        void Biomaghigh(string Filename);
        void Biomaglow(string Filename);
        void claim(string Filename);
        void trueclaim(string Filename);
        void trophiclevel(string Filename,string Filename1);
        void relation(string Filename);
        void energyflow(string Filename,string Filename1);
        void preypred(string Filename);
        void change_prey(string Filename);
        void attract_predators(string Filename);
        void simple_ornot(string Filename);
        void indeg_outdeg(string Filename);
        void euler_pathorcircuit(string Filename);
        void endcase();
};


void FoodWeb::endcase()
 {
   cout<<" ---------------------------------------------------------------------------\n";
        char ch=4;
        for(int i=0;i<76;i++){if(i%2==0)
            {cout<<ch;}else {cout<<" ";}}

cout<<"\n----------------------------------------------------------------------------\n\n";
 }


void FoodWeb::readData(string Filename)
{
    fstream input;
    input.open(Filename,std::ios::in);
    if(!input.is_open())
    {
        cout<<"error";
        exit(100);
    }
    input>> Stations;
    arr[Stations][Stations];
    while(input){
            for(int i=0;i<Stations;i++)
            {
                for(int j=0;j<Stations;j++)
                {
                    input>>arr[i][j];
    }
    }
    }
}



void FoodWeb::outputData(string Filename){
    readData(Filename);
    cout<<"-------------------------------------------------------------\n";

    for(int i=0;i<Stations;i++)
        {
            for(int j=0;j<Stations;j++)
            {
                cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
      endcase();
    }



void FoodWeb::Biomaglow(string Filename){
    readData(Filename);
    cout<<"\n-------------------------------------\n";
    cout<<" species at the lowest trophic level\n";
    cout<<"-------------------------------------\n";
    int out=0;
    for(int i=0;i<Stations;i++)
        {
            out=0;
            for(int j=0;j<Stations;j++)
                {
                    if (arr[i][j]==1)
                    out++;
            }
            if (out==2)
                {
    cout<<"\n The lowest level of Biomagnification is found in: ";
    switch(i){
        case 0:
            cout<<"\nIN SHARK\n";
            break;
        case 1:
            cout<<"IN OTTERS\n";
            break;
        case 2:
            cout<<"SEA ORCHINS\n";
            break;
        case 3:
            cout<<"LARGE CRABS\n";
            break;
        case 4:
            cout<<"KELP\n";
            break;
        case 5:
            cout<<"SMALL FISHES\n";
            break;
            }
      endcase();
      }
      }
}



void FoodWeb::Biomaghigh(string Filename)
{
    readData(Filename);
    cout<<"\n---------------------------------\n";
    cout<<" species at highest trophic level \n ";
     cout<<"---------------------------------\n";
    int in=0;
    for(int i=0;i<Stations;i++)
        {
            in=0;
            for(int j=0;j<Stations;j++)
                {
                    if(arr[i][j]==1)
                    {
                        in++;
            }}
            if (in==0 ){
                    cout<<"\nThe Highest level of Biomagnification is : ";
            switch(i){
                case 0:
                    cout<<"\nIN SHARK\n";
                    break;
                case 1:
                    cout<<"IN OTTERS\n";
                    break;
                case 2:
                    cout<<"SEA ORCHINS\n";
                    break;
                case 3:
                    cout<<"LARGE CRABS\n";
                    break;
                case 4:
                    cout<<"KELP\n";
                    break;
                case 5:
                    cout<<"SMALL FISHES\n";
                    break;
                    }
                    endcase();
                }}
}



void FoodWeb::claim(string Filename)
{
    readData(Filename);
    int in=0;
    for(int j=0;j<Stations;j++)
        {
            if(arr[1][j]==1)
            {
                in++;
    }}
    if(in==2 )
        {
            cout<<"\n-----------------------------------------------------------------------\n";
            cout<<"CLAIM IS TRUE  ";
            cout<<"\n-----------------------------------------------------------------------\n";
        }
    else {
            cout<<"\n-----------------------------------------------------------------------\n";
            cout<<"CLAIM IS FALSE \n";}
            endcase();
}



void FoodWeb::trueclaim(string Filename)
{
    readData(Filename);
    for(int i=0;i<Stations;i++)
        {
            int on=0;
            for(int j=0;j<Stations;j++)
                {
                    if(arr[i][j]==1)
                    {
                        on++ ;
            }}
    if(on==0)
        {
             cout<<"\n-----------------------------------------------------------------------\n";
             cout<<" THE SPECIES WHICH IS UNABLE TO FOOD ON ANOTHER SPECIES IN THE FOOD WEB IS : ";
             cout<<"\n-----------------------------------------------------------------------\n";
    switch(i)
    {
        case 0:
            cout<<"SHARK\n";
            break;
        case 1:
             cout<<" OTTERS\n";
             break;
        case 2:
            cout<<"SEA ORCHINS\n";
            break;
        case 3:
            cout<<"LARGE CRABS\n";
            break;
        case 4:
            cout<<"KELP\n";
            break;
        case 5:
            cout<<"SMALL FISHES\n";
            break;
            }}}
       endcase();
}




void FoodWeb::trophiclevel(string Filename,string Filename1)
{
    readData(Filename);
    for(int i=0;i<Stations;i++)
        {
            int on=0;
            for(int j=0;j<Stations;j++)
                {
                    if(arr[i][j]==1)
                    {
                        on++;
            }
        }
    if(on==0)
        {
            cout<<"\n-----------------------------------------------------------------------\n";
            cout<<" THE SPECIES WHICH IS AT FIRST TROPIC LEVEL IN THE FOOD WEB IS : ";
            switch(i)
            {
                case 0:
                    cout<<"SHARK\n";
                    break;
                case 1:
                    cout<<" OTTERS\n";
                    break;
                case 2:
                    cout<<"SEA ORCHINS\n";
                    break;
                case 3:
                    cout<<"LARGE CRABS\n";
                    break;
                case 4:
                    cout<<"KELP\n";
                    break;
                case 5:
                    cout<<"SMALL FISHES\n";
                    break;
                    }
                }
            }
readData(Filename1);
 for(int j=0;j<Stations;j++)
    {
         if( arr[4][j]==1)
         {
             cout<<"\n THE SPECIES WHICH IS AT SECOND TROPIC LEVEL IN THE FOOD WEB IS : ";
             switch(j)
             {
                 case 0:
                     cout<<"SHARK\n";
                     break;
                case 1:
                     cout<<" OTTERS\n";
                     break;
                case 2:
                    cout<<"SEA ORCHINS\n";
                    break;
                case 3:
                    cout<<"LARGE CRABS\n";
                    break;
                case 4:
                    cout<<"KELP\n";
                    break;
                case 5:
                    cout<<"SMALL FISHES\n";
                    break;
                }
            }
        }

        readData(Filename1);
        for(int j=0;j<Stations;j++)
            {
                if(arr[5][j]==1||arr[2][j]==1)
                {
                    cout<<"\n THE SPECIES WHICH IS AT THIRD TROPIC LEVEL IN THE FOOD WEB IS : ";
                            switch(j){
                                case 0:
                                    cout<<"SHARK\n";
                                    break;
                                case 1:
                                    cout<<" OTTERS\n";
                                    break;
                                case 2:
                                    cout<<"SEA ORCHINS\n";
                                    break;
                                case 3:
                                    cout<<"LARGE CRABS\n";
                                    break;
                                case 4:
                                    cout<<"KELP\n";
                                    break;
                                case 5:
                                    cout<<"SMALL FISHES\n";
                                    break;
                                }
                            }
                        }

 readData(Filename);
 int on1=0;
 for(int i=0;i<Stations;i++)
    {
        on1=0;
         for(int j=0;j<Stations;j++)
            {
                if(arr[i][j]==-1||arr[i][j]==1)
                {
                    on1+=arr[i][j];
         }
    }
    if(on1>=1 &&i!=1)
        {
            cout<<"\n THE SPECIES WHICH IS AT The TOP TROPIC LEVEL/TOP CARNIVORE IN THE FOOD WEB IS : ";
    switch(i)
    {
        case 0:
            cout<<"SHARK\n";
            break;
        case 1:
             cout<<" OTTERS\n";
             break;
        case 2:
            cout<<"SEA ORCHINS\n";
            break;
        case 3:
            cout<<"LARGE CRABS\n";
            break;
        case 4:
            cout<<"KELP\n";
            break;
        case 5:
            cout<<"SMALL FISHES\n";
            break;
            }
        }
    }
    endcase();
}



void FoodWeb::relation(string Filename)
{
    readData(Filename);
    if(arr[2][3]==1|| arr[3][2]==1)
        {
            cout<<"\n-----------------------------------------------------------------------\n";
            cout<<"YES! THERE IS A RELATION BETWEEN SEA URCHINS AND LARGE CRABS ";
            cout<<"\n-----------------------------------------------------------------------\n";
}
    else
        {
            cout<<"\n----------------------------------------------------------------------------------------------------------------\n";
            cout<<"NO! THERE IS NO RELATION BETWEEN SEA URCHINS AND LARGE CRABS BECAUSE THEIR EDGES ARE NOT CONNECTED WITH EACH OTHER";
            cout<<"\n----------------------------------------------------------------------------------------------------------------\n\n";}
            endcase();
}



void FoodWeb::energyflow(string Filename,string Filename1)
{
    float a=10;
    readData(Filename);
    for(int i=0;i<Stations;i++)
        {
            int on=0;
            for(int j=0;j<Stations;j++)
                {
                    if(arr[i][j]==1)
                    {
                        on++;
            }
        }
    if(on==0)
        {
            cout<<"-----------------------------------------------------------------------\n";
            cout<<" THE ENERGY FLOW  IN : ";
    switch(i)
    {
        case 0:
            cout<<"SHARK "<<"is "<<a<<" JOULE\n";
            break;
        case 1:
             cout<<" OTTERS "<<"is "<<a<<" JOULE\n";
             break;
        case 2:
            cout<<"SEA ORCHINS "<<"is "<<a<<" JOULE\n";
            break;
        case 3:
            cout<<"LARGE CRABS "<<"is "<<a<<" JOULE\n";
            break;
        case 4:
            cout<<"KELP "<<"is "<<a<<" JOULE\n";
            break;
        case 5:
            cout<<"SMALL FISHES" <<"is "<<a<<" JOULE\n";
            break;
            }
        }
    }

readData(Filename1);
 for(int j=0;j<Stations;j++)
    {
         if( arr[4][j]==1)
         {
             cout<<"\n THE ENERGY FLOW IN : ";
              switch(j)
              {
                  case 0:
                      cout<<"SHARK "<<" is "<<a/10.0<<" JOULE\n";
                      break;
                  case 1:
                       cout<<" OTTERS "<<" is "<<a/10.0<<" JOULE\n";
                       break;
                  case 2:
                      cout<<"SEA ORCHINS "<<" is "<<a/10.0<<" JOULE\n";
                      break;
                  case 3:
                      cout<<"LARGE CRABS "<<" is "<<a/10.0<<" JOULE\n";
                      break;
                  case 4:
                      cout<<"KELP "<<" is "<<a/10.0<<" JOULE\n";
                      break;
                  case 5:
                      cout<<"SMALL FISHES "<<"is "<<a/10.0<<" JOULE\n";
                      break;
                }
            }
        }

        readData(Filename1);
        for(int j=0;j<Stations;j++)
            {
                if(arr[5][j]==1||arr[2][j]==1)
                {
                    cout<<"\n THE ENERGY FLOW IN  ";
        switch(j)
        {
        case 0:
            cout<<"SHARKS"<<"is "<<a/100.0<<" JOULE\n";
            break;
        case 1:
             cout<<" OTTERS"<<" is "<<a/100.0<<" JOULE\n";
             break;
        case 2:
            cout<<"SEA ORCHINS "<<"is "<<a/100.0<<" JOULE\n";
            break;
        case 3:
            cout<<"LARGE CRABS "<<"is "<<a/100.0<<" JOULE\n";
            break;
        case 4:
            cout<<"KELP "<<"is "<<a/10.0<<" JOULE\n";
            break;
        case 5:
            cout<<"SMALL FISHES "<<"is "<<a/100.0<<" JOULE\n";
            break;
            }
        }
    }

 readData(Filename);
 int on1=0;
 for(int i=0;i<Stations;i++)
    {
        on1=0;
        for(int j=0;j<Stations;j++)
            {
                if(arr[i][j]==-1||arr[i][j]==1)
                {
                    on1+=arr[i][j];
        }
    }
    if(on1>=1 &&i!=1)
        {
            cout<<"\n THE ENERGY FLOW AT THE TOP LEVEL OF THE FOOD WEB i.e IN ";
    switch(i){
        case 0:
            cout<<"SHARKS "<<"is "<<a/1000.0<<" JOULE\n";
            break;
        case 1:
             cout<<" OTTERS "<<"is "<<a/1000.0<<" JOULE\n";
             break;
        case 2:
            cout<<"SEA ORCHINS "<<"is "<<a/1000.0<<" JOULE\n";
            break;
        case 3:
            cout<<"LARGE CRABS "<<"is "<<a/1000.0<<" JOULE\n";
            break;
        case 4:
            cout<<"KELP "<<"is "<<a/1000.0<<" JOULE\n";
            break;
        case 5:
            cout<<"SMALL FISHES "<<"is "<<a/1000.0<<" JOULE\n";
            break;
        }
    }
}
endcase();
}



 void FoodWeb::preypred(string Filename)
 {
 readData(Filename);
 cout<<"-----------------------------------------------------------------------\n";
 for(int i=0;i<Stations;i++)
    {
        for(int j=0;j<Stations;j++)
        {
            if(arr[i][j]==1)
            {
                switch(i){
                    case 0:
                        cout<<"\n SHARKS        ARE EATEN BY ";
                        break;
                    case 1:
                        cout<<"\n OTTERS        ARE EATEN BY ";
                        break;
                    case 2:
                        cout<<"\n SEA ORCHINS   ARE EATEN BY ";
                        break;
                    case 3:
                        cout<<"\n LARGE CRABS   ARE EATEN BY ";
                        break;
                    case 4:
                        cout<<"\n KELPS         ARE EATEN BY ";
                        break;
                    case 5:
                        cout<<"\n SMALL FISHES  ARE EATEN BY ";
                        break;
                    }
                    switch(j){
                        case 0:
                            cout<<"SHARKS";
                            break;
                        case 1:
                            cout<<"OTTERS";
                            break;
                        case 2:
                            cout<<"SEA URCHINS";
                            break;
                        case 3:
                            cout<<"LARGE CRABS";
                            break;
                        case 4:
                            cout<<"KELPS";
                            break;
                        case 5:
                            cout<<"SMALL FISHES";
                            break;
                        }
                    }
                }
 }
 cout<<endl;
 endcase();
}




void FoodWeb::change_prey(string Filename)
{
    readData(Filename);
    cout<<"---------------------------------------------------------------------------\n";
    for(int i=0;i<Stations;i++)
        {
            int in =0;
            for(int j=0;j<Stations;j++)
                {
                    if(arr[i][j]==1)
                    {
                        in++;
            }
        }
        if(in >=2)
            {
                switch(i)
                {
                    case 0:
                        cout<<" SHARK";
                        break;
                    case 1:
                         cout<<" OTTERS";
                         break;
                    case 2:
                        cout<<"SEA URCHINS";
                        break;
                    case 3:
                        cout<<"LARGE CRABS";
                        break;
                    case 4:
                        cout<<"KELP";
                        break;
                    case 5:
                        cout<<"SMALL FISHES";
                        break;
                    }
                }
            }
            cout<<endl;
            endcase();
}



void FoodWeb::attract_predators(string Filename)
{
    readData(Filename);
    cout<<"---------------------------------------------------------------------------\n";
    for(int i=0;i<Stations;i++)
        {
            int out=0;
            for(int j=0;j<Stations;j++)
                {
                    if(arr[i][j]==1)
                    {
                        out++;
            }
        }
        if(out>=2)
            {
                switch(i){
                    case 0:
                        cout<<" SHARK";
                        break;
                    case 1:
                         cout<<" OTTERS";
                         break;
                    case 2:
                        cout<<"SEA URCHINS";
                        break;
                    case 3:
                        cout<<"LARGE CRABS";
                        break;
                    case 4:
                        cout<<"KELP";
                        break;
                    case 5:
                        cout<<"SMALL FISHES";
                        break;
                        }
                    }
                }
                cout<<endl;
                endcase();
}



void FoodWeb::simple_ornot(string Filename)
{
readData(Filename);
int count1 =0;
int v=Stations;
cout<<"---------------------------------------------------------------------------\n";
for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
            {
                if(arr[i][j]<=1 && arr[i][i] ==0)
                {
                    count1++;
        }
    }
}
        if(count1==v*v)
            {
                cout<<"\n FOOD WEB IS SIMPLE ";
            }
        else
        {
            cout<<"\n FOOD WEB IS NOT SIMPLE  ";
         }
         cout<<endl;
endcase();

}




void FoodWeb::indeg_outdeg(string Filename)
{
readData(Filename);
int in =0,out=0;;
int v=Stations;
cout<<"---------------------------------------------------------------------------\n";
for(int i=0;i<v;i++)
    {
        in=0;out=0;
        for(int j=0;j<v;j++)
            {
                if(arr[i][j]==1)
                {
                    in++;
        }
    }
        switch(i)
        {
            case 0:
                cout<<"IN  DEGREE OF SHARK        IS : "<<in<<endl;
                break;
            case 1:
                cout<<"IN  DEGREE OF OTTERS       IS : "<<in<<endl;
                break;
            case 2:
                cout<<"IN  DEGREE OF SEA URCHINS  IS : "<<in<<endl;
                break;
            case 3:
                cout<<"IN  DEGREE OF LARGE CRABS  IS : "<<in<<endl;
                break;
            case 4:
                cout<<"IN  DEGREE OF KELP         IS : "<<in<<endl;
                break;
            case 5:
                cout<<"IN  DEGREE OF SMALL FISHES IS : "<<in<<endl;
                break;
                }

        for(int j=0;j<v;j++)
            {
                if(arr[i][j]==-1)
                {
                    out++;
        }
    }
        switch(i)
        {
            case 0:
                cout<<"OUT DEGREE OF SHARK        IS : "<<out<<endl;
                break;
            case 1:
                cout<<"OUT DEGREE OF OTTERS       IS : "<<out<<endl;
                break;
            case 2:
                cout<<"OUT DEGREE OF SEA URCHINS  IS : "<<out<<endl;
                break;
            case 3:
                cout<<"OUT DEGREE OF LARGE CRABS  IS : "<<out<<endl;
                break;
            case 4:
                cout<<"OUT DEGREE OF KELP         IS : "<<out<<endl;
                break;
            case 5:
                cout<<"OUT DEGREE OF SMALL FISHES IS : "<<out<<endl;
                break;
                }
        }
cout<<endl;
endcase();

}




void FoodWeb::euler_pathorcircuit(string Filename)
{
    readData(Filename);
    cout<<"---------------------------------------------------------------------------\n";

int v=Stations;
arrr[v];
int degree=0;
int count =0;
for(int i=0;i<v;i++)
    {
        degree=0;
        for(int j=0;j<v;j++)
            {
                degree=degree+arr[i][j];
        }
        arrr[i]=degree;
        }
        for(int k=0;k<v;k++)
            {
                if(arrr[k]%2==0)
                {
                    count++;
        }
    }
        if(count==v)
            {
                cout<<"\n FOOD WEB CONTAINS EULER CIRCUIT";
        }
        else
       {
            cout <<"\n FOOD WEB DOES NOT CONTAINS EULER CIRCUIT";
       }


        //for Euler path
     count=0;
    for(int h=0;h<v;h++)
        {
        if(arrr[h]%2==0)
            {
                count++;
            }
        }
        if(count==v-2 || count==v)
            {
                cout<<"\n FOOD WEB CONTAINS EULER PATH\n";
        }
        else
       {
           cout <<"\n FOOD WEB DOES NOT CONTAINS EULER PATH\n";
       }
       endcase();
       }



int main(){
    FoodWeb f;
    char ch;
    do{
        cout<<" *** MENU FOR THE FOOD WEB PROGRAM ***\n";
        cout<<"ARE YOU READY TO COMPUTE AND KNOW ABOUT THE RELATION BETWEEN SPECIES\n";
        cout<<"------------------------------------------------------------------\n";
        cout<<"1  :  THE ADJACENCY MATRIX REPRESENTATION OF THE GIVEN FOOD WEB IS:\n";
        cout<<"2  :  SPECIES IN WHICH HIGH BIOMAGNIFICATION FOUND IS:\n";
        cout<<"3  :  SPECIES IN WHICH LOW BIOMAGNIFICATION FOUND IS:\n";
        cout<<"4  :  OTTER IS CALIMING THAT HE IS EATEN BY ALL SPECIES IN THE OCEAN BUT HE IS NOT EATING \n";
        cout<<"      ANY SPECIES FOUND IN OCEAN ,LET'S CHECK WHETHER HIS CLAIM IS TRUE OR NOT \n";
        cout<<"5  :  WHAT IS ACTUALLY THE TRUE CLAIM?\n";
        cout<<"6  :  TROPHIC LEVEL OF THE SPECIES IS:\n";
        cout<<"7  :  IS THERE ANY RELATION BETWEEN SEA URCHINS AND LARGE CRABS ?\n";
        cout<<"8  :  ENERGY FLOW OF THE SPECIES IS:\n";
        cout<<"9  :  PREY-PREDATOR RELATION AS PER THE GIVEN FOOD WEB IS:\n";
        cout<<"10 :  THE SPECIES WHICH KEEP CHANGING ITS PREY IS : \n";
        cout<<"11 :  THE SPECIES WHICH ATTRACTS THE PREDATORS MOST IS : \n";
        cout<<"12 :  CHECK WHETHER GIVEN FOOD WEB IS SIMPLE OR NOT : \n";
        cout<<"13 :  IN DEGREE AND OUT DEGREE OF EACH VERTEX OF FOOD WEB : \n";
        cout<<"14 :  DOES FOOD WEB CONTAINS EULER PATH OR EULER CIRCUIT : \n";



        cout<<"\nENTER OPTION OF YOUR CHOICE: ";
        int op;
        cin>>op;
        cout<<"------------------------------------------------------------------\n";

        switch(op){

                case 1:
                    cout<<"THE ADJACENCY MATRIX REPRESENTATION OF THE GIVEN FOOD WEB IS:\n";
                    f.outputData("Adjacency_matrix1.txt");
                    break;

                case 2:
                    cout<<"SPECIES IN WHICH HIGH BIOMAGNIFICATION FOUND IS:\n";
                    f.Biomaghigh("Adjacency_matrix1.txt");
                    break;

                case 3:
                    cout<<"SPECIES IN WHICH LOW BIOMAGNIFICATION FOUND IS:\n";
                    f.Biomaglow("Adjacency_matrix1.txt");
                    break;

                case 4:
                    cout<<"---------CHECKING CLAIM ----------";
                    f.claim("Adjacency_matrix1.txt");
                    break;

                case 5:
                    cout<<" WHAT IS ACTUALLY THE TRUE CLAIM?\n";
                    f.trueclaim("Incidence_matrix1.txt");
                    break;

                case 6:
                    cout<<"TROPHIC LEVEL OF THE SPECIES IS:\n";
                    f.trophiclevel("Incidence_matrix1.txt","Adjacency_matrix1.txt");
                    break;

                case 7:
                    cout<<"\n IS THERE ANY RELATION BETWEEN SEA URCHINS AND LARGE CRABS ? ";
                    f.relation("Adjacency_matrix1.txt");
                    break;

               case 8:
                   cout<<"\nENERGY FLOW OF THE SPECIES IS:\n";
                    f.energyflow("Incidence_matrix1.txt","Adjacency_matrix1.txt");
                    break;

                case 9:
                    cout<<"\n PREY-PREDATOR RELATION AS PER THE GIVEN FOOD WEB IS:\n";
                    f.preypred("Adjacency_matrix1.txt");
                    break;

                case 10:
                    cout<<"\n THE SPECIES WHICH KEEP CHANGING ITS PREY IS : \n";
                    f.change_prey("Incidence_matrix1.txt");
                    break;

                case 11:
                    cout<< " \nTHE SPECIES WHICH ATTRACTS THE PREDATORS MOST IS : \n";
                    f.attract_predators("Adjacency_matrix1.txt");
                    break;

                 case 12:
                     cout<< " \nCHECK WHETHER GIVEN FOOD WEB IS SIMPLE OR NOT : \n";
                     f.simple_ornot("Adjacency_matrix1.txt");
                     break;

                 case 13:
                     cout<<"\n IN DEGREE AND OUT DEGREE OF EACH VERTEX OF FOOD WEB : \n";
                     f.indeg_outdeg("Incidence_matrix1.txt");
                     break;

                case 14:
                    cout<<"\n DOES FOOD WEB CONTAINS EULER PATH OR EULER CIRCUIT : \n";
                    f.euler_pathorcircuit("Adjacency_matrix1.txt");
                    break;



                default:cout<<" WRONG INPUT\n";
        }
        cout<<"\n do you want to continue: 'y' for yes : ";
        cin>>ch;
    }
    while(ch=='y');

        cout<<"\n------------------------------------------------------------------\n";
        cout<<"                    THANK YOU ! , HAVE A GOOD DAY                     ";
        cout<<"\n------------------------------------------------------------------\n";


    return 0;
}
/* In the adjacency matrix and incidence matrix we have started from shark and not kelp
 We took :-
 0A = shark
 1B = Sea Otter
 2C = Urchins
 3D = Crabs
 4E = Kelp
 5F = Fish
 And in edges , we have-:
 E1 = Edge between A and B
 E2 = Edge between B and C
 E3 = Edge between B and D
 E4 = Edge between C and E
 E5 = Edge between D and F
 E6 = Edge between F and E */






