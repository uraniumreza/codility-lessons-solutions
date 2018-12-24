#include <iostream>

using namespace std;

int solution(in N) {
    int pointer = -1, maxDiff = 0;
    for(int i=0; N; i++){
        int bit = N & 1;
        if(bit){
            if(pointer == -1){
                pointer = i;
            } else {
                int diff = i - pointer - 1;
                if (diff > maxDiff) maxDiff = diff;
                pointer = i;
            }
        }
        N >>= 1;
    }
    
    return maxDiff;
}

int main()
{ 
    int number;
    while(cin>>number){    
        cout << solution(N) << endl;
    }
    return 0;
}