/**
 * vim: set cindent:
 * author: jachermocilla@gmail.com
 * url: https://www.codechef.com/status/FRUITS,jachermocilla 
*/

#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

#define ull unsigned long long


int main(){
    ull n,i,j,k,t;
    long T,N,M,K;
    long L;

    cin >> T;

    for (t=0;t<T;t++){
        cin >> N >> M >> K;
        while(K>0){
            if (N==M)
                break;
            else if (N<M)
                N++;
            else
                M++;
            K--;
        }
        L=(N-M);
        if (L<0)
            L=L*(-1);
        cout << L << endl;

    }

    return 0;
}
