#include <iostream>
using namespace std;

void helper(int n ){
    // Base condition 
    if(n == 1){
        cout <<1<<endl;
        return ;
    }
    
    helper(n-1);
    cout<<n;


}
int  main(){
   int n ; 
   cout << "Enter the number upto which you want result ";
   cin  >>n;
   helper(n);
   
   return 0;
}
