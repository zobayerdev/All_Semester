#include <bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
    float a, b, c, x1, x2, D;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;
    D= (b*b)-(4*a*c);

   cout<<"Your Output D =  "<<D<<endl;

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
       cout << "\nX1 = "<< x1 << endl;
       cout << "\nX2 = " << x2 << endl;
       cout<<"\nUNIQUE SOLUTION"<<endl;
    }
    else if (D == 0)
    {
        x1 = -b/(2*a);
       cout << "\nX1 = " <<x1 << endl;
        cout << "\nX2 = " <<x2 << endl;

    }
   else
    {
        cout << " \nNot A Real Solution " << endl;
    }
    return 0;
}
