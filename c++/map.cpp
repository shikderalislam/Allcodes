#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,int> m;
    map<string,int>::iterator it;
    m.insert(make_pair("Al Islam",2024));
      m.insert(make_pair("Rubel",2025));
        m.insert(make_pair("Siddik",2026));
        for(it=m.begin();it!=m.end();it++)
        {
            cout<< it-> first<<" "<<it->second<<endl;
        }

}
