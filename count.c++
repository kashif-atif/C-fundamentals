// 1-10 numbers and count even only
#include <iostream>
using namespace std ;

int count(int n ){
int e = 0;

for (int i= 1 ; i <=n ; i ++){

if (i % 2== 0){
e ++;

}
}

return e ;

}
int main (){

int n;
cout << "enter number " << endl;
cin>> n ;
cout << count( n ) ;


}