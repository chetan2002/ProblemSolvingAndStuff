
class BrowserHistory {
    vector<string> myHistory;
    int i=0;
public:
    BrowserHistory(string homepage) {
        myHistory.clear();
        myHistory.push_back(homepage);
        i=0;
    }

    void visit(string url) {
        if(myHistory.size()!=i+1){
            while(myHistory.at(i)!=myHistory.at(myHistory.size()-1)){
                myHistory.pop_back();
            }
        }

        myHistory.push_back(url);
        i=myHistory.size()-1;
    }

    string back(int steps) {
        if(i>=steps){
            i=i-steps;
        }else{
            i=0;
        }
        return myHistory.at(i);

    }

    string forward(int steps) {
        if(myHistory.size()>i+steps){
            i=i+steps;
        }else{
            i=myHistory.size()-1;
        }
        return myHistory.at(i);
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
