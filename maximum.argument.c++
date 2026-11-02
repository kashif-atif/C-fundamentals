
// find maximum numbers using  arguments

#include <iostream>
using namespace std ;

int max (int a  , int  b , int c  = 2 ){
if (a > b && a > c ){
    cout<< "the larger number is "<< a << endl;

}
else if (b > a && b > c ){
    cout << "the larger number is " <<  b <<endl;
}
else {
    cout<< "the larger number is " << c ;
    }
}


    
int main (){
int a ,b  ;
cout << "enter number "<< endl;
cin >> a  ;
cout<< "enter second number" << endl;
cin>> b ;
\
cout<< "the larger number is :" << max (  a  ,  b   ) << endl;



}

