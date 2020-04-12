#include<stdio.h>
#include<iostream>
#include<utility>
#include<vector>
#include<iterator>
#include<algorithm>
#include<map>
#include<string>
#include<set>
 using namespace std;
 int main()
{
    set<string> s;
    set<string>::iterator it;
    s.insert("B");
    s.insert("c");
    s.insert("Alisalam");
    for(it=s.begin();it!=s.end();it++)
    cout<<*it<<endl;
}
