#include<iostream>

using namespace std;

long long int  sqrtInt(long long int x){
    long long int s=0;
    unsigned int  e=x;
    long long int  mid = s+(e-s)/2;

    long long int  ans = -1;
    while(s<=e){
        long long int square = mid*mid;
        
        if(square == x){
            return mid;
        }
        if(square < x){
            ans = mid;
            s = mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

double precise(int n, int precision, int tempSol){
    double factor = 1;
    double temp = tempSol;
    for(int i=0;i<precision;i++){
        factor = factor/10;

        for(double j=temp; j*j<n;j=j+factor){
            temp = j;
        }
    }
    return temp;

}

int main(){

    int n;
    cout<<"enter a number : "<<endl;
    cin>>n;
    int tempSol = sqrtInt(n);
    cout<<precise(n,3,tempSol);
    return 0;
}
