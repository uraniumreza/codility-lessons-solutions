// -------- Input Example --------
// 5            #NumberOfElements
// 2 3 1 4 5    #Numbers
// 3            #RotationCount

#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> &A, int K);

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
        int K; cin>>K;
        
        vector<int> result = solution(A, K);
        for(int i=0; i<result.size(); i++) cout<< result[i] << ' ';
        cout<<endl;
    }
    return 0;
}

vector<int> solution(vector<int> &A, int K) {
    int length = A.size();
    int numberOfRotations = K % length;
    vector<int> result;

    for(int i=numberOfRotations; i>0; i--) result.push_back(A[length - i]);
    for(int i=0; i<length-numberOfRotations; i++) result.push_back(A[i]);

    return result;
}