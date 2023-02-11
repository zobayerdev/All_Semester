#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <int,int> m;
    int mat[4][4], maxInt=-1,t, numPixel[20], Flor[20], fst, lst;
    float prob[20], comPo[20], Cp[20];
    cout << "Enter the matrix:\n";
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin >> t;
            mat[i][j] = t;
            maxInt = max(t, maxInt);
            m[t]++;
        }
    }
    for(int i=0; i<20; i++)
    {
        numPixel[i]=0;
        Flor[i]=0;
        prob[i]=comPo[i]=Cp[i]=0;
    }

    for(auto i=m.begin(); i!=m.end(); i++)
    {
        fst=i->first;
        lst=i->second;


        numPixel[fst]=lst;
        prob[fst]=(float)lst/9.0;
    }

    for(int i=1; i<=maxInt; i++)
    {

        cout<<i<<' ';
    }
    cout<<endl;

    for(int i=1; i<=maxInt; i++)
    {

        cout<<numPixel[i]<<' ';
    }
    cout<<endl;

    for(int i=1; i<=maxInt; i++)
    {
        printf("%3.f ",prob[i]);
        comPo[i]=comPo[i-1]+prob[i];

    }
    cout<<endl;

    for(int i=1; i<=maxInt; i++)
    {
        printf("%3.f ",comPo[i]);
        Cp[i]=comPo[i]*50;
    }
    cout<<endl;

    for(int i=1; i<=maxInt; i++)
    {
        printf("%3.f ",Cp[i]);
        Flor[i]=floor(Cp[i]);
    }
    cout<<endl;

    for(int i=1; i<=maxInt; i++)
    {
        printf("%d ",Flor[i]);

    }
    cout<<endl<<endl;

    cout<<"Enhanced matrix:\n";
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {

            t=mat[i][j];
            cout<<Flor[t]<<' ';
        }
        cout<<endl;
    }

}
