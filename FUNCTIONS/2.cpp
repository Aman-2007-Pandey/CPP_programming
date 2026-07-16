#include<iostream>
using namespace std;
int main(){
    int product;
    int sum;
    int n = 10;
    product = 0;
    sum = 0;
    while(n!=0){
         int digit = n%10;
        product = product*digit;
        sum = sum+ digit;
        n = n/10;
    }
    int answer = product-sum;
    return answer;
}