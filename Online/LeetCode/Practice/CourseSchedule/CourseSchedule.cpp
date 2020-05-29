#include<bits/stdc++.h>
using namespace std;

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> inDegree(numCourses);

        int  count=0;

        for(int i=0;i<prerequisites.size();i++){
            inDegree[prerequisites[i][0]]++;
        }
        stack<int> sta;

        for(int i=0;i<inDegree.size();i++){
            if(inDegree[i]==0){
                sta.push(i);
            }
        }
        while(!sta.empty()){
            int curr=sta.top();
            sta.pop();
            count++;

            for(int i=0;i<prerequisites.size();i++){
                if(prerequisites[i][1]==curr){
                    inDegree[prerequisites[i][0]]--;
                    if(inDegree[prerequisites[i][0]]==0){
                        sta.push(prerequisites[i][0]);
                    }
                }
            }
        }
        return (count==numCourses);

}

int main(){

vector<vector<int>> v={{1,0},{0,1}};
cout<<canFinish(2,v)<<endl;
return 0;


}
