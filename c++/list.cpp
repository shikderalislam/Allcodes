
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>
#include<queue>

using namespace std;
int main()
{
    int a[3]={10,2,4};

    list <int> mylist(a,a+3);
    list <int>::iterator it;


   // mylist.reverse();
   //mylist.clear();

  for(it=mylist.begin();it!=mylist.end();it++)
   {
       cout<<*it<<"\t";
   }




}
