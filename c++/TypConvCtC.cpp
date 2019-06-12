#include<bits/stdc++.h>
using namespace std;
class Item
{
private:
    /* data */
    int f; int g;
public:
    
 void showData(){
      cout<<"showiing value of f and g of i1 "<<f<< "  "<<g <<endl;
 }

  int getF(){
        cin>>f;
        return 0;
  }
 int getG(){
      cin>>g;
      return 0;
 }
};




class prduct
{
private:
    /* data o*/
    int a; int b;
public:
    
     void setData(int x,int y) {
        a=x; b=y;           
     }
       prduct operator Item();
        Item temp;
      temp.getF() =a; temp.getG()=b;
      return(Item temp) ;
     

};














int main(){
   prduct p1; Item i1;   // object declare 
    p1.setData(3,5);
     i1=p1; 
    i1.showData();
}

