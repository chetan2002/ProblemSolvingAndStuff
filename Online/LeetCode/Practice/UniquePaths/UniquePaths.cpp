class Solution {
public:
    int uniquePaths(int m, int n) {

        vector<vector<int>> v;
        for(int i=0;i<=m;i++){
            vector<int> a(n+1,0);
            v.push_back(a);
        }


        for(int i=1;i<=m;i++){
            v[i][1]=1;
        }
        for(int i=1;i<=n;i++){
            v[1][i]=1;
        }

        for(int i=2;i<=m;i++){
            for(int j=2;j<=n;j++){
                v[i][j]=v[i-1][j]+v[i][j-1];
            }
        }

        return v[m][n];
    }

};
