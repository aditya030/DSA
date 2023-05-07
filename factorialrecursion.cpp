#include<iostream>
using namespace std;

int factorial(int n){
    cout<<"function is called for n: "<<n<<endl;
    //base case
    if(n==1){
        return 1;
    }
    // recursive relation.
    int chotiproblemans = factorial(n-1);
    int badiproblemans = n*chotiproblemans;

    return badiproblemans;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;


    int ans = factorial(n);

    cout<<"ans is: "<<ans<<endl;

    return 0;
}