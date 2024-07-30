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
	/*
	1. kan semisal ada 4 digit, karena harus berpasangan masing" 2, berarti harusnya ada 2 perulangan kan, bukan 4 emg aku 4 perulangan? 
	panjang chbaracter x berapa? berarti nilai x.length berapa? aku msh bingung ayang yang ini, gapaham, x.length() itu apa? panjang x
	ABBC berarti panajng nya berapa? 4, x.length nya berarti? 4
	kamu disuruh ngebuat bloc secara berpasangan sebanyak 2 kan masing" grup? iya tp kl emg x.length nya jd 2, aku msh bingung salahnya dmn. di x.lengthnya kah? jd/2? bntr coba
	1. selesai
	2. nilai variabel y isinya apa? isinya transkip akhir??? jd kan pertama di transkip ke tabel 1, itu nilai x, dari nilai x di transkip ke tabel 2, hasilnya y 
	coba baca dari atas smpe bawah programnya, skrng ayang
	ayang aku ke distract
	bisa to the point ga ayang?
	ini pertanyaannya to the point, nilai y dari mana?
	ayang, makanya dengerin, dari atas kebawah, bukan dari bawah keatas iya
	kenapa msh salah ayang? coba yg satu bener kan bener ga? AB jadi CA? iya bener
	2. selesai
	udah itu ajh
	3. new exclusive, kira kira kondisi nilai i nya hanya ada 0 sm 1 kah? engga
	biar to the point, itu kondisinya cuma kurang lengkap ajh, == 1 dan == 0 dah bener (aku paham), tpi tinggal nilai i nya yg coba dibikin bis ajadi 1 sm 0 (aku gapaham)
	kondisi yg bakal ada itu kan berarti i - 0, 1, 2, 3 kan kalo ABBC? iya, nah itu aku awal jg pusing karna itu ayang, hrsnya dibikin fungsi kaya km cuma bingung
	itu bener pake if else, 0 sm 1 biner kan? bener, diajarin ga cara convert ke biner? engga hasil dari %2 itu biner
	*/

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