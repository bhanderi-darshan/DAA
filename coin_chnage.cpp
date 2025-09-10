#include<bits/stdc++.h>
using namespace std;





// int main(){
//     vector<int> v;
//     int x;
//     cout<<"Enter number of coins";
//     cin>>x;

    // cout<<"Enter coin values";
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // int amount;
    // cout<<"Enter amount";
    // cin>>amount;

    // sort(v.begin(),v.end(),greater<int>());
    // int coin_count=0;
    // for(int i=0;i<n;i++){
    //     while(amount>=v[i]){
    //         amount-=v[i];
    //         coin_count++;
    //     }
    // }
    // cout<<"Minimum coins required are "<<coin_count<<endl;

//     Coin_count(v,x,amount);


//     return 0;

// }




int Coin_count(vector<int> &v, int n, int amount) {
    sort(v.begin(), v.end(), greater<int>()); 
    int coin = 0;
    for (int i = 0; i < n; i++) {
        while (amount >= v[i]) {
            amount -= v[i];
            coin++;
        }
    }
    return coin;
}

int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int amount;
    cout<<"Enetr Amount : ";
    cin>>amount;

    int ans =  Coin_count(v,n,amount);
    cout<<"Minimun Numbers of Coin is : "<<ans<<endl;

}
