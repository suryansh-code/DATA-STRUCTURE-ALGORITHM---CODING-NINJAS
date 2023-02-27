#include <iostream>
#include <unprdered_map>
#include<string>
using namespace std;

int main()
{
   unordered_map<string,int> ourmap; 

   //insert
   pair<string,int> p("abc",1);
   ourmap.insert(p);
   //insert can be done in this way also
   ourmap["def"]=2;

   //access the element
   cout<<ourmap["abc"]<<endl;
   //another way
   cout<<ourmap.at("abc")<<endl;

   //check if the key is present or not
   if(ourmap.count("ghi") > 0)
   {
     cout<<"presemt"<<endl;
     cout<<ourmap.at("ghi");
   }

   //functio to check the size
   cout<<"size: "<<ourmap.size()<<endl;

   //erase an element
   ourmap.erase("ghi");
}