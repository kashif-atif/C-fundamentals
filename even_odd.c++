#include <iostream>
using namespace std;

int num (int a  = 2 ){
if (a > 0){

    cout << "the number is positive " << endl;

}
else if (a < 0){
cout << " the number is negetive " << endl;


}

else {

    cout<<" the number is zero" << endl;





}

}


int main (){


int a  = -3 ; 
a = 0;    // argument 

cout<< num(a);  // call


}