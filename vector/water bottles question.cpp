#include<iostream>
 using namespace std;
    int numWaterBottles(int numBottles, int numExchange) {
        int totalBottles = numBottles;

        while (numBottles >= numExchange) {//
            totalBottles += numBottles / numExchange;
            numBottles = (numBottles / numExchange) + (numBottles % numExchange);
        }

        return totalBottles;
    }
int main(){
    int numBottles=15;
    int numExchange=4;
int b=numWaterBottles(numBottles,numExchange);
cout<<b;
return 0;
}