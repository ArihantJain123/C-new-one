#include<iostream>

using namespace std ;

int  main()
{

    int n ,m;
    cout<<"enter the number of row ";
    cin>>m;
    cout<<"enter the number of column ";
    cin>>n;
    int ARR[m][n];

    for(int i=0; i<m; i++)
    {

        for(int j=0; j<n; j++)
            {
            cin>>ARR[i][j];
            }
    }

    for(int i=0; i<m; i++)
    {

        for(int j=0; j<n;j++)
            {
            cout<<ARR[i][j];
            }
    }


    return 0;


}
