//Prime numbers between two numbers.

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
        int low, high;
        //Prime number between 60 to 100
        cout << "Enter the two values in between which the prime number has to be calculated\n";
        cin >> low >> high;


        int count = 0;
        bool n = false;

        for(int i = low; i >= 0; i++){
                n = isPrime(i);
                low++;
               
                if(low == high)
                        return 0;
        }
}
