/**
 * vim: set cindent:
 * author: jachermocilla@gmail.com
 * url: https://www.codechef.com/status/ALGFACT,jachermocilla
 * help: https://discuss.codechef.com/questions/7349/computing-factorials-of-a-huge-number-in-cc-a-tutorial 
*/

#include <iostream>
#include <sstream>
using namespace std;

#define ull unsigned long long


int main(){
    ull n,i,j,k;
    ull T,N,M;
    long double fact;
    int result[1000],l;
    ull current, carry, prod;

    cin >> T;

    for (i=0;i<T;i++){
        cin >> N;
        result[0]=1;
        current=1;
        carry=0;
        for(j=1;j<=N;j++){
            for (k=0;k<current;k++){
                //cout << j << ":" << result[k] << ":" << carry << ":" << prod << endl;
                prod=result[k]*j+carry;
                result[k]=prod%10;
                carry=prod/10;
            }
            while(carry > 0){
                //cout << j << ":" << result[k] << ":" << carry << ":" << prod << endl;
                result[current]=carry%10;
                carry = carry/10;
                current++;
            }
        }
        //cout << current << endl;
        for (l=current-1;l>=0;l--){
            cout << result[l];
        }
        cout << endl;
    }

    return 0;
}
