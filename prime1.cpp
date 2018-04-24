#include <iostream>
using namespace std;
int isPrime(int n){
        int i;
        if(n == 0 || n == 1){
                cout << "Not Prime" << endl << n << endl;
                return 0;
        }
        if(n == 2){
                cout << "Prime = Yes "<< n << endl;
                return 0;
        }
        for(i = 2; i < n; i++){
                if(n % i == 0){
                        cout << "NOT prime" << endl;
                        return 0;
                }
        //      cout << "pRIME = yESSS" << endl;
        }
        cout << "Prime = YESSS" << i <<  endl;
}
int main(){
        int n;
        cout << "Enter the value of n\n";
        cin >> n;

        isPrime(n);
        return 0;
}
