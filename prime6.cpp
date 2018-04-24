//Check if this program can be modiefied and improve further too.

#include <iostream>
using namespace std;
int main(){
        int n;
        int isPrime[100000];
        cout << "Enter the value of n\n";
        cin >> n;

        for(int i = 1; i <= 100; i++){
                isPrime[i] = 1;
        }

        for(int i = 2; i <= 10; i++){
                for(int j = 2; j <= n/2 ; j++){
                        isPrime[i*j] = 0;
                }
        }

        for(int i = 2; i <= 100; i++){
                if(isPrime[i])
                        cout << i << endl;
        }
}
