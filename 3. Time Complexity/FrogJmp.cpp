// -------- Input Example --------
// 10 85 80     # X Y D

#include <iostream>

using namespace std;

int solution(int X, int Y, int D);

int main()
{ 
    int X, Y, D;
    while(cin>>X>>Y>>D){
        cout<<solution(X, Y, D)<<endl;
    }
    return 0;
}

int solution(int X, int Y, int D) {
    return (abs(Y-X)+D-1)/(D*1.0);
}