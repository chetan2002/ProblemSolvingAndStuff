class Solution {
public:
    // double dist(vector<int>& point) {
    //     return sqrt(pow(point.at(0), 2) + pow(point.at(1),2));
    // }

    // O(n) time
    // O(1) space

    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        nth_element(points.begin(), points.begin() + K-1, points.end(),
             [](vector<int> &a, vector<int> &b){
                 return a[0]*a[0]+a[1]*a[1] < b[0]*b[0]+b[1]*b[1];
             });
        return vector<vector<int>>(points.begin(), points.begin()+K);
    }

};
