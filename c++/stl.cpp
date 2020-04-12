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
    int n,i,v;
    vector <int> vec;
    vector <int>::iterator it;
    scanf("%d",&n);

    for(i=0;i<n;i++)
   {      cin>>v;
        vec.push_back(v);

   }

      sort(vec.begin(),vec.end());
      it=find(vec.begin(),vec.end(),5);
      cout<<*it<<endl;

  for(it=vec.begin();it<vec.end();it++)
   {
       cout<<*it<<"\t";
   }




}
