#include <bits/stdc++.h>

using namespace std;

int main(){
	
vector<int>vetor;
int quantidade;
int posicao=0;
int temp;
cin>> quantidade;
for(int i =0; i<quantidade;i++){
 cin>>temp;
 vetor.push_back(temp);

  if(temp<vetor.at(posicao)){
   posicao = i;
  }
}

cout<<"Menor valor = "<< vetor.at(posicao)<<endl;
cout<<"Posicao = "<< posicao<<endl;

}