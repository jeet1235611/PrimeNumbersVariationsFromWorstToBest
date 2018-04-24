printing first 100, 50, 200 and so on prime numbers.

#include <iostream>
using namespace std;
bool isPrime(int n){
        int i;
        if(n == 2 || n == 3){
                cout << n << endl;
                return true;
        }
        for(i = 2; i <= n/2; i++){
                if(n % i == 0){
                        //break;
                        return false;
                }
        }
        cout << n << endl;
        return true;
}
int main(){
        int count = 0;
        bool n = false;

        for(int i = 2; i >= 0; i++){
                n = isPrime(i);
                if(n)
                count++;


                if(count == 100)
                        return 0;
        }
}
