#include<iostream>
using namespace std;
int main(){
int Array_1[] = {1,4,6,3,6,9};
int Array_2[] ={5,3,7,1,2,6};
int CommomElements[13];
int i, j, n=0;

for(i=0; i<5; i++)
{
    for (j=0; j<8; j++)
{
    if (Array_1[i] == Array_2[j])

{

  CommomElements[i] = Array_1[i];
  cout<<CommomElements[i]<<" ";
}
}
}
 if (n==0)
 {
     cout<<"No Common elements!";
 }

return 0;
}
