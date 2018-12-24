// -------- Input Example --------
// 5            #NumberOfElements
// 2 3 1 4 5    #Numbers

#include <iostream>
#include <vector>

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

int solution(vector<int> &A) {
    int length = A.size();
    int result = 0;

    for(int i=0; i<length; i++) result ^= A[i];

    return result;
}