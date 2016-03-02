/**
 * vim: set cindent:
 * author: jachermocilla@gmail.com
 * url: https://www.codechef.com/viewsolution/9524029 
*/

#include <iostream>
#include <sstream>

using namespace std;

#define ull unsigned long long


int main(){
    ull n,i,j,k;
    ull T,N,M,len,sum,max;
    ull map[26];
    string S;


    cin >> T;

    for (i=0;i<T;i++){

        for (j=0;j<26;j++)
            map[j]=0;

        cin >> S;
        len = S.size();
        for (j=0;j<len;j++){
            k=S.at(j)-'a';
            //cout << S.at(j) << " "; 
            map[k]++;
        }
        //cout << endl;
        max=0;
        for (j=0;j<26;j++){
            if(map[j] > 0 && map[j]==len-map[j])
                break;
        }
        if (j==26)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
