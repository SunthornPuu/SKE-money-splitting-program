#include "bits/stdc++.h"

using namespace std;


int main(){
    int N;
    cout << "How many people have paid : ";
    cin >> N;
    vector<float> A;
    vector<string> name;
    float x; string y;
    float sum=0;
    for(int i=0;i<N;i++){
        cout << "Name and Amount : ";
        cin >> y >> x;
        A.push_back(x);
        name.push_back(y);
        sum+=x;
    }
    sum=5000-sum;
    int N2;
    cout << "How many people have to pay : ";
    cin >> N2;
    sum/=(float)N2;
    if(sum>=0)cout<<"Every one will earn : "<<sum<<" bath\n";
    else cout<<"Every one will pay : "<<(abs(sum))<<" bath\n";
    for(int i=0;i<N;i++){
        A[i]+=sum;//positive is to earn negative is to pay
        if(A[i]>0)cout<<name[i]<<" have to earn "<<A[i]<<" bath\n";
        if(A[i]<0)cout<<name[i]<<" have to pay "<<-A[i]<<" bath\n";
    }
    cin >> y;
}
