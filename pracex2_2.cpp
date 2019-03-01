#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
string info[20];
float number[20];
int i,j=1,N=sizeof(info)/sizeof(info[0]);
ifstream source("score1.txt");
ofstream dest("rank.txt");
string line;
while(getline(source,line)){
	info[i]=line;
	i++;
}
for(int i=0;i<N;i++){
	number[i]=atof(info[i].c_str());
}
for(int i=N-1;i>=0;i--){
	sort(number,N);
	dest<<number[i]<<" = ";
	if(number[i]==number[i+1]) {
	dest<<j-1<<"\n";}
	else {
	dest<<j<<"\n";}
	j++;
}
dest.close();
	return 0;
}

