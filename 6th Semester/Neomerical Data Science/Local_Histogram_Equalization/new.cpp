#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[4][4]= {{0,1,4,6},{2,3,5,1},{1,4,3,0},{9,5,2,1}};
    int max_nm = 9;
    int min_num  = 0;
    int counter[10];
    float probability[10];
    cout<< "Enter the Matrix number : \n ";
    for(int i =0; i<4; i++)
    {
        for(int j= 0; j<4; j++)
        {

            cin>> ar[i][j];
        }
    }

    for(int i=0; i<10; i++)
    {
        counter[i]=0;
    }
    for(int x=0; x<10; x++)
    {
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(ar[i][j] == x)
                {
                    counter[x]++;
                }
            }
        }
    }
    cout << "No of pixel: ";
    for(int i=0; i<10; i++)
    {
        cout << counter[i] << " ";
    }
    for(int i=0; i<10; i++)
    {
        probability[i] = counter[i]/16.0;
    }
    cout << "\nProbability: ";
    for(int i=0; i<10; i++)
    {
        cout << probability[i] << " ";
    }
    float cp[10];
    cp[0]=probability[0];

    for(int i=1; i<10; i++)
    {
        cp[i] = cp[i-1]+probability[i];
    }
    cout << "\nCumulative probability (C.P): ";
    for(int i=0; i<10; i++)
    {
        cout << cp[i] << " ";
    }
    cout << "\nC.P * 50 : ";
    for(int i=0; i<10; i++)
    {
        float z = cp[i]*50;
        cout << z << " ";
    }
    cout << "\nFloor rounding: ";
    for(int i=0; i<10; i++)
    {
        float z = cp[i]*50;
        cout << floor(z) << " ";
    }
    return 0;
}

