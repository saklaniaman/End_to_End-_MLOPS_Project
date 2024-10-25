// there are n friends playing game while sitting In a circle numbered from 1 
// to n in clockwise order, the game begins at the m th friend and every kth friend 
// is eliminated as you move clockwise around the circle . the elimination continues 
// until one friend remains . Your task is to determine the winner of the game 

// n --> total number of an friends
// k --> step count ( every kth element is eliminated )
// m --> postion of the friend

#include <iostream>
using namespace std;



int findTheWinner( int n, int k, int m){

    int winner = 0;

    for (int i = 2; i <= n; i++) {
        winner = (winner + k) % i;
        cout << winner  << endl;
    }

    int ans = (winner + m - 1) % n + 1 ;
    
    return ans;


}

 int main (){

    int n = 7;
    int k = 4;
    int m = 3;

    int answer =  findTheWinner( n,k,m);

    cout << " the winner of the game is " << answer ; 
 }


















































 
