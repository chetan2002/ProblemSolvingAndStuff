#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    string st="hackerrank..";
    int counter=0;
    for(char c: s){
        if(c==st.at(counter)){
            counter++;
        }
    }
    if(counter>=10){
        return "YES";
    }else{
        return "NO";
    }

}

int main()
{

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        cout << result << "\n";
    }



    return 0;
}
