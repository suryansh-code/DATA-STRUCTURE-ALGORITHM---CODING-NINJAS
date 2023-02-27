#include<iostream>
#include<vectord>
#include<unordered_map>
using namespace std;

vector<int> removeDuplicates(int *arr,int size)
{
    vector<int> output;
    unordered_map<int,bool> seen;
    for(int i=0;i<size;i++)
    {
        if(seen.count(arr[i] > 0))
        {
            continue;
        }

        seen[a[i]]=true;
        output.push_back(a[i]);
    }

    return output;
}

int main()
{
    int a = {1,2,3,4,2,4,45,6,3,5,6,6,6}
    vector<int> output=removeDuplicates(a,13);

    for(int i=0;i<13;i++)
    {
        cout<<output[i]<<endl;
    }


}