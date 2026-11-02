#include <iostream> 
using namespace std ;
int fict(int n );  // fict prototype

int main (){

int n ;
cout<< "enter number " ;
cin >>n ;
cout << "the fictorial of a number is " << fict( n );


}

int fict (int n ){  // define fict
    int f = 1 ;

for (int i =1 ; i <= n ; i++){
f = f * i ;


}

return f ;



}