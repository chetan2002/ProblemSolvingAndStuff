#include <bits/stdc++.h>
using namespace std;

long long int check1(long long int X,long long int Y,long long int L,long long int R){
    int Base2 = log2(R);

	    long long int MyL,MyR;
	    MyL=pow(2,Base2-1);
	    MyR=pow(2,Base2)-1;
	    long long int MyCheck=pow(2,Base2+1)-1;
	    if(MyCheck==R){
	        return R;
	    }
	    if(L>MyR){
	        MyL=L;
	        MyR=R;
	    }
	    if(MyR>=L && MyR<=R){
	        return MyR;
	    }
	    if(MyR>R){
            MyR=R;
	    }
	    if(MyL<L){
            MyL=L;
	    }

        long long int max=0,maxi=L;
	    for(int i=MyL;i<=MyR;i++){
	        long long int val = (X&i)*(Y&i);

	        if(val>max){
	            max=val;
	            maxi=i;
	        }
	    }
	    return maxi;
}
long long int check2(long long int X,long long int Y,long long int L,long long int R){
      long long int max=0,maxi=L;
	    for(int i=L;i<=R;i++){
	        long long int val = (X&i)*(Y&i);
	        cout<<endl<<"FOR "<<i<<" = "<<val<<endl;
	        if(val>max){
	            max=val;
	            maxi=i;
	        }
	    }
	    return maxi;

}

int main() {
    srand(time(0));
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
	//long long int t;
	//int t=(rand()+2)%1000;
	//while(t--){
	    long long int X,Y,L,R;
	    Y=(rand()+2)%100;
        X=(rand()+2)%Y;

        R=(rand()+2)%100;
        L=(rand()+2)%R;
        cout<<"X="<<X<<" Y="<<Y<<" L="<<L<<" R="<<R<<endl;
        long long int v1,v2;
        v1=check1(X,Y,L,R);
        v2=check2(X,Y,L,R);
        cout<<v1<<" "<<v2<<endl;

        if(v1==v2){
            cout<<"OK"<<endl<<endl<<endl;

        }else{
            cout<<"NOT OK"<<endl;
            break;
        }

    //}
	}
	return 0;
}

