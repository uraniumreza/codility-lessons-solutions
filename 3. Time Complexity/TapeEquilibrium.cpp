// -------- Input Example --------
// 5            #NumberOfElements
// 2 3 1 6 5    #Numbers

#include <bits/stdc++.h>

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
 
	int totalSum = 0;
	for(int i=0; i<length; i++) totalSum += A[i];
 
	int min = INT_MAX, cumulativeSum = 0;
	for(int i=0; i<length; i++){
		cumulativeSum += A[i];
		int difference = abs(totalSum-2*cumulativeSum);
        if(min > difference) min = difference;
	}
    return min;
}