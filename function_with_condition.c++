#include <iostream>
using namespace std ;

int problem(int a); // function call


int main (){
int a ; 
cout << "enter the number " << endl;
cin>> a ;

cout <<  problem(a);

}


int  problem(int a ){  // funtion definition
    if(a > 0){
  cout << "the number is positive " ;

    }
    else if (a < 0){
        cout << "the number is negetive" ;

    }
    else{
        cout<< "the number is zero" ;
        
    }


}
