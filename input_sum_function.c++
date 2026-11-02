// print 5 numbers and find out the sum of only odd numbers 

#include <iostream>
using namespace std ;

int odd (int n ){
int sum = 0;
 cout<< "enter number "<< endl;
for (int i = 1 ; i <= 5 ; i ++  ){
   
    cin >>n;

     if (n%2 == 1){
   sum+=n;

     }
}
cout <<  "the sum of odd numbers is : " << sum ;


}
int main (){
int n ;

cout  <<  odd(n);

}