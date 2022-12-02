/*---- Using C++----------

To DO : n vectors of forces are given and for equilibrium we just need to add all the vectors in all 3 directions.

----CODE-----*/

#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arr[n][3]; // 2-d array for storing value of force in 3 directions
 int x=0,y=0,z=0;
 for(int i=0;i<n;i++){
                   cin>>arr[i][0]>>arr[i][1]>>arr[i][2]; //input forces
                   x+=arr[i][0]; //adding all x-components of forces in int x
                   y+=arr[i][1]; //adding all y-components of forces in int y
                   z+=arr[i][2]; //adding all z-components of forces in int z
 }
 
 
  //for equilibrium x=0,y=0,z=0  
  //-----checking equilibrium-------
if((x==0)&&(y==0)&&(z==0)){
                  cout<<"YES";
}
else{
                  cout<<"NO";
}
 
 
return 0; 
}
