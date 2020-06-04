#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n;
   cin>>n;
   vector<int> arr;
   for(int i=0;i<n;i++){
       int val;
       cin>>val;
       arr.push_back(val);
   }

   sort(arr.begin(),arr.end());
   int min=abs(arr.at(0)-arr.at(1));
   for(int i=0;i<n-1;i++){
       int val=abs(arr.at(i)-arr.at(i+1));
       min=(min>val)?val:min;
   }
   cout<<min<<endl;
   return 0;

}
