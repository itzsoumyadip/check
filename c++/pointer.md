    
#include <iostream>
using namespace std;

void manipulate(double *pValue)  // pass by addreass 
{
	cout << "2. Value of double in manipulate: " << *pValue << endl;  // return value oF dValue aS *pvalue hold addreass  of dValue
  

   *pValue =10.02;  // Assigned with new value with dValue   as   *pvalue hold addreass  of dValue
     
     
    {{{{{ {

void manipulate(double *pValue)  // pass by addreass 
{
	cout << "2. Value of double in manipulate: " << *pValue << endl;  // return value oF dValue aS *pvalue hold addreass  of dValue
  double b = 10.0;

   pValue =&b;  // *pointer  means derference(means it point  address  not address  for pre declare variable) so  assigment  WITH NO *pvalue ,, ///   Assigned(point) with new address   b   
          // here    pValue =&b; means it pValue  start pounting  with new addreas ..  previos it point dvalue
   
   
   
   
   cout << "4. Value of double in manipulate: " <<*pValue << endl;  // return value oF dValue aS *pvalue (dereference) hold(point) addreass  of dValue;
    	
	cout << "Pointer to int address: " << pValue << endl;  // return address of pValue 
    
   *pValue =10.02;  // Assigned with new value with dValue   as   *pvalue hold addreass  of dValue 
  //ERROR ::::  pValue =10.02;      cannot convert ‘double’ to ‘double*’ in assignment     and AS 10.02 DOES NOT   GET MEMOREY  still so it have no address to whome pvalue will point 
}     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     }}}}}}}
     
     
     
   	cout << "4. Value of double in manipulate: " <<*pValue << endl;  // return value oF dValue aS *pvalue hold addreass  of dValue
    	
	cout << "Pointer to int address: " << pValue << endl;  // return address of pValue 
    
    
}

int main() {

	int nValue = 10;
    
	int *pnValue = &nValue;   // pointer holding address of -->>  nvalue
 
   int **ppValue = &pnValue;   /// pointer of pointer holding address of pointer -->> pnValue
   
     
     
	 


	cout << "Int value: " << nValue << endl;
	
	cout << "Pointer to int address: " << pnValue << endl;
	cout << "Pointer of pointer  to int address: " <<ppValue << endl;
	*pnValue = 6;
	cout << "Int value via pointer: " << *pnValue << endl;
     
     **ppValue =7;
    cout << "Int value via pointer of  pointer: " << **ppValue << endl;
	
	cout << "Int value: " << nValue << endl;
	

	
	cout << "==================" << endl;

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);  // call by reference ;  
	cout << "4. dValue: " << dValue << endl;

	return 0;
}
