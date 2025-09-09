#include <bits/stdc++.h>

using namespace std;

int main(){
	
double matriz [12][12];
int coluna;
char operacao;
double temp;
double soma = 0;

cin>> coluna;
cin>> operacao;

for(int i = 0; i<12 ; i++){
	for(int j = 0 ; j<12; j++){
	cin >> temp;
	matriz[i][j]=temp;
	}
}
for(int i = 0; i<12; i++){
	soma += matriz[i][coluna];
}
if(operacao =='S'){
	cout<<fixed<< setprecision(1)<<soma<<endl;
}else if(operacao == 'M'){
	cout<<fixed<<setprecision(1)<<soma/12<<endl;
}

}