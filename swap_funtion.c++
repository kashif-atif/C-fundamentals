#include <iostream>
using namespace std;

int swap(int a , int b ){
 
cout << "the value of a is " << a << " the value of b is "<< b << endl;

a = a + b ;  // swap using two variales 
b = a - b ;
a  = a - b  ;



cout << "the values after swapping " << endl;
cout<< "the value of a  is "<< a << " and " <<"the value of b is "<<  b ;

}




int main (){

int a ;

cout << "enter first number " << endl;
cin >> a ;

int b ;
cout<< "enter second number " << endl;
cin >> b ;

cout << swap( a ,  b );



}