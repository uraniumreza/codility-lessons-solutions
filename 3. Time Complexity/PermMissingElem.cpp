// -------- Input Example --------
// 5            #NumberOfElements
// 2 3 1 6 5    #Numbers

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A);

int main()
{ 
    int number;
    while(cin>>number){
        vector <int> A;
        while(number--){
            int elem;
            cin>>elem;
            A.push_back(elem);
        }
        
        cout<<solution(A)<<endl;
    }
    return 0;
}

int solution(vector<int> &A){
    int length = A.size();
    if(length>0){
        sort(A.begin(), A.end());
    
        for(int i=0; i<length; i++)
            if(A[i]^(i+1)) return (i+1);
    } else return 1;
    
    return length + 1;
}