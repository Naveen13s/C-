// If/Else Statement.
//Maximum of 3 numbers.
#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
   
    return 0;

   
    
}



// If/Else Statement.
//Even/Odd input fron user.
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    
    if(n%2==0){
        cout<<"Even"<<endl;
        
    }
     else{
        cout<<"Odd"<<endl;

        }
   
    return 0;

   
    
}
