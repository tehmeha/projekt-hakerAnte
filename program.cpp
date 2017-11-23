#include<iostream>
using namespace std;

int main()
 {
     bool sit=true;
     int prvi=0,drugi=0,treci.cetvrti,peti,sesti,sedmi,osmi,deveti,igrac=2;
     int polje2d[9][9]={(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0)};
    do{
            if(igrac%2==0)
            {
                cout<<"igra krizic tj. 1"<<endl;
            }
            else
            {
                cout<<"igra krizic tj. 2"<<endl;
            }
        igrac++;
        cout << "unesite red u koji zelite unijeti krizic/kruzic: ";
        cin >> stupac;
        cout << "unesite stupac u koji zelite unijeti krizic/kruzic: ";
        cin >> red;
        if(stupac<=8 &&stupac >0 && red <=8 && red>0 )
        {
            polje2d[stupac-1][red-1]= igrac%2+1;
            for(int i=0; i<9;i++)
            {
                for(int j=0;j<9;j++)
                {
                    if(j==3 || j==6)cout<<endl;
                    {
                        cout<< "  ";
                    }
                    cout<<polje2d[i][j];
                }
                if(i==2 || i==5)
                {
                    cout<<endl;
                }
                cout<<endl;
            }
            int pobijedio;
             if(polje2d[0][0]!=0 && polje2d[0][1]==polje2d[0][1] && polje2d[0][1]==polje2d[0][2]) //! 1kv. 1red
            {
                pobijedio=polje2d[0][0];
                cout << pobijedio << endl;
            }
             if(polje2d[0][0]==polje2d[1][0]==polje2d[2][0]==1 || polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1)
            {
                pobijedio=polje2d[0][0];
                cout << pobijedio << endl;
            }
             if(polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==1 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==1 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==1)
            {
                pobijedio=polje2d[0][0];
                cout << pobijedio << endl;
            }
             if(polje2d[0][0]==polje2d[3][1]==polje2d[3][2]==2 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==2 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==2)
            {
                pobijedio=polje2d[0][0];
                cout << pobijedio << endl;
            }
            if(polje2d[0][0]==polje2d[1][1]=polje2d[2][2] || polje2d[2][0]==polje2d[1][1]==polje2d[0][2]=1)
            {
                pobijedio=polje2d[0][0];
                cout << pobijedio << endl;
            }
            if(polje2d[0][0]==polje2d[1][1]=polje2d[2][2] || polje2d[2][0]==polje2d[1][1]==polje2d[0][2]=1)
            {
                prvi=2;
            }
             if(polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1)
            {
                drugi=1;
            }
             if(polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1)
            {
                drugi=2;
            }
             if(polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==1 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==1 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==1)
            {
                drugi=1;
            }
             if(polje2d[0][0]==polje2d[3][1]==polje2d[3][2]==2 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==2 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==2)
            {
                drugi=2;
            }
            if(polje2d[0][0]==polje2d[1][1]=polje2d[2][2] || polje2d[2][0]==polje2d[1][1]==polje2d[0][2]=1)
            {
                drugi=1;
            }
            if(polje2d[0][0]==polje2d[1][1]=polje2d[2][2] || polje2d[2][0]==polje2d[1][1]==polje2d[0][2]=1)
            {
                drugi=2;
            }
        }
        else if(polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1)
            {
                prvi=1;
            }
             if(polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1)
            {
                prvi=2;
            }
             if(polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==1 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==1 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==1)
            {
                prvi=1;
            }
             if(polje2d[0][0]==polje2d[3][1]==polje2d[3][2]==2 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==2 || polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==2)
            {
                prvi=2;
            }
            if(polje2d[0][0]==polje2d[1][1]=polje2d[2][2] || polje2d[2][0]==polje2d[1][1]==polje2d[0][2]=1)
            {
                prvi=polje2d[4][1];
            }
        {
            cout << "unijeli ste krive podatke" << endl;
        }
        cout << endl;
     cout<< "prvo polje je: "<<endl;
     } while(sit=true);
 }
