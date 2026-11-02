
#include <iostream>
using namespace std;
int main (){
int e  =0 ;
int o =0 ;
int num ;

for (int i =1 ; i <= 10 ; i++){
    
    cin >> num ;
    
    
    
    if (num%2 == 0){
         e++ ;
 

    }
    else  {
         o++;
  }
}


cout << "even number " << e << endl ;
cout << "odd number " << o << endl ;

}