#include <bits/stdc++.h>

using namespace std;

int main(){
	
vector<int>vetorPar;
vector<int>vetorImpar;
int temp;
for(int i = 0; i<15;i++){
cin >> temp;
if(temp % 2 == 0){
vetorPar.push_back(temp);
}else{
vetorImpar.push_back(temp);
}
if(vetorPar.size()>=5){
  for(int j = 0 ; j<5 ; j++){
	cout<<"par["<<j<<"] = "<<vetorPar.at(j)<<endl;
}
vetorPar.clear();
}
if(vetorImpar.size()>=5){

for(int j = 0; j< 5; j++){
cout<<"impar["<<j<<"] = "<<vetorImpar.at(j)<<endl;
}
vetorImpar.clear();
}
}
int count = 0;
for(int par : vetorPar){
  cout<<"par["<<count<<"] = "<< par <<endl;
  count++;
}
count = 0;
for(int par : vetorImpar){
  cout<<"par["<<count<<"] = "<< par <<endl;
  count++;
}
}