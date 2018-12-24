#include <iostream>

using namespace std;

int main()
{ 
    int number;
    while(cin>>number){    
        int pointer = -1, maxDiff = 0;
        for(int i=0; number; i++){
            int bit = number & 1;
            if(bit){
                if(pointer == -1){
                    pointer = i;
                } else {
                    int diff = i - pointer - 1;
                    if (diff > maxDiff) maxDiff = diff;
                    pointer = i;
                }
            }
            number >>= 1;
        }
        cout << maxDiff << endl;
    }
    return 0;
}