#include <iostream>
using namespace  std ;
int large(int a , int b , int c);

int main (){
int a , b , c ;
cout<< "enter first number " << endl;
cin >> a ;
cout<< "enter second number "<< endl;
cin >> b ;
cout<< "enter third number "<< endl;
cin >> c ;

cout<< large( a , b ,  c);


}

int large(int a , int b , int c ){
if (a > b  && a > c){
cout << "the larger number is " << a << " which was your first number " ;


}

else if (b > a  && b > c) {
    cout << "the larger number is " << b<< " which was your second number "  ;

}


else if ( a==b==c  ){
cout<< "all enter numbers are eqaul" << endl;
}
else {
    cout << "the larger number is "<<  c <<" which was your third number "  ;

}

}