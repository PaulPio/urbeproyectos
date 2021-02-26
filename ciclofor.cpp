#include <iostream>
using namespace std;

main(){
	int a = 3, b= 5;
	
	for(int i = 0; i <= 30; i++){
		int arc = i%a;
		int arcb = i%b;	
		if(arc == 0 && arcb == 0 && i != 0){
			cout << "bis and vos\n";
		}
		else if(arc == 0){
			cout << "bis\n";
		}
		else if(arcb == 0){
			cout << "vos\n";
		}
		else{
			cout << i << endl;	
		}
		
	} 
	
	
}