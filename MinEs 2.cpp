#include <iostream>
using namespace std;

int main (){
	
	
	string huruf = "ABCD" ;
	string tabelSatu[4][4] = {"AB", "DC", "CC", "CB", "CA", "DA", "CD", "DD", "BC", "AA", "BA", "DB", "BD", "AD", "BB", "AC"};
	string tabelDua[4][4] = {"CD", "BB", "AC", "CC", "CB", "DB", "AD", "DD", "DA", "DC", "BC", "BD", "AA", "BA", "CA", "AB"};
	string x, y;
	
	int indexSatu, indexDua;
	string a, b;
	
	cin >> x; 
	
	
	
	for (int m = 0; m < x.length()/2; m++){
		
		for (int i = m*2; i <= m*2 + 1 ; i++){
		
			for (int j = 0; j < 4; j++){
		
				if (i%2 == 0){ // 
				
					if (x[i] == huruf[j]){
				
						indexSatu = j;
						break;
					}			
				} else if (i%2 == 1){
				
					if (x[i] == huruf[j]){
				
						indexDua = j;
					}	
					
				}
			}
		}
		
		a += tabelSatu[indexSatu][indexDua];
	}
	
	cout << "transkip:" << a;
	
	y = a;
	
	for (int m = 0; m < x.length()/2; m++){
		
		for (int i = m*2; i <= m*2 + 1 ; i++){
		
			for (int j = 0; j < 4; j++){
		
				if (i%2 == 0){
			
					if (y[i] == huruf[j]){
				
						indexSatu = j;
						break;
					}			
				} else if (i%2 == 1){
				
					if (y[i] == huruf[j]){
				
						indexDua = j;
					}	
				}
			}
		}
		
		
		b += tabelDua[indexSatu][indexDua];
	}
	
	cout << "transkip:" << b;
}
