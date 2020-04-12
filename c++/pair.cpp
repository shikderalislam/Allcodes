#include<stdio.h>
#include<iostream>
#include<utility>
#include<vector>
#include<iterator>
#include<algorithm>
#include<map>
#include<string>
 using namespace std;
 int main()
{
    vector < pair < int,string > > v;
     vector < pair <int,string> >:: iterator it;
    v.push_back(make_pair(1,"Alislam"));
    v.push_back(make_pair(2,"Nayeem"));
    v.push_back(make_pair(3,"Ruble"));
    v.push_back(make_pair(4,"Robin"));
    for(it=v.begin();it!=v.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
}
