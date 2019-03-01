#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();

int main(){
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}

void randomAlphabet(){
	char letters[]={"abcdefghijklmnopqrstuvwxyz"};
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){;
			int ran = rand() % 26 ;
			alphabet[i][j]=letters[ran];
		}
	}
}

