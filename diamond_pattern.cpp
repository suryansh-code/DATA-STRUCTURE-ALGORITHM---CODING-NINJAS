/* Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5
  *
 ***
*****
 ***
  *


The dots represent spaces.*/

#include<iostream>
using namespace std;
int main()
{
    int i, j, rowNum, space;
    cin>>rowNum;
    for(i=1; i<=(rowNum+1)/2; i++)
    {
        for(j=1; j<=(rowNum+1)/2-i; j++)
            cout<<" ";
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<endl;
    }
    for(i=(rowNum/2); i>=1; i--)
    {
        for(j=1; j<=(rowNum/2)-i+1; j++)
            cout<<" ";
        for(j=1; j<=2*i-1; j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}