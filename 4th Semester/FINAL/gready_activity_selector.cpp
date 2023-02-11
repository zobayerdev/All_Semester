#include<bits\stdc++.h>
#include<conio.h>
using namespace std;

void gready_activity_selector(int s[],int f[],int n)
{
    int a[n];
    a[0]=1;
    int k=0,i=1;
    for(int m=1;m<n;m++)
    {
        if(s[m]>=f[k])
        {
            a[i++]=m+1;
            k=m;
        }
    }

    cout << endl << "\nFollowing activities are selected:\n";
    for(int j=0;j<i;j++)
    {
        cout << "A[i] = " <<a[j];
        cout << "\nS[i],F[i] = (" << s[a[j]-1] << "," << f[a[j]-1] << ")" <<endl<<endl;
    }
}

int main()
{
    int n;
    cout << "Enter limit of activities: ";
    cin>>n;
    int a[n],s[n],f[n];

    cout << "Enter "<<n<<" starting time of activities: "; //1 3 0 5 3 5 6 8 8 2 12
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
        cin>>s[i];
    }
    cout << "Enter "<<n<<" finishing time of activities: "; //9 10 11 12 14 4 5 6 7 9 16
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }

    sort(f,f+n);//sorting the finishing time array

    cout << "A(i) | ";
    for(int i=0;i<n;i++)
    {
        cout<< a[i] << " ";
    }
    cout << "\n-----|--------------------------";
    cout << "\nS(i) | ";
    for(int i=0;i<n;i++)
    {
        cout << s[i] << " ";
    }
    cout << "\nF(i) | ";
    for(int i=0;i<n;i++)
    {
        cout << f[i] << " ";
    }

    gready_activity_selector(s,f,n);

    getch();
    return 0;
}
