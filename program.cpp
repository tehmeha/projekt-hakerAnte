#include<iostream>
 using namespace std;

 int main()
 {
     bool sit=true;
     int stupac,red;
     int polje2d[9][9]={(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0)};
    do{
        cout << "unesite stupac u koji zelite unijeti krizic/kruzic: ";
        cin >> stupac;
        cout << "unesite red u koji zelite unijeti krizic/kruzic: ";
        cin >> red;
        if(stupac<=8 &&stupac >0 && red <=8 && red>0 )
        {
            cin >> polje2d[stupac][red];
            for(int i=0; i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    cout<<polje2d[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
        else
        {
            cout << "unijeli ste krive podatke";
        }
     } while(sit=true);
 }
