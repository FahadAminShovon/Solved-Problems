#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string line;
	int x,y;
	while(getline(cin, line)){
		if(line=="DONE"){
			break;
		}
		string edit="", result="";
		x= line.size();
		
		for(int i=0; i<x; i++){
			
			if((int)line[i]!=32 && line[i]!='.' && line[i]!=',' && line[i]!='!' && line[i]!='?'){
				edit+=toupper(line[i]);
			}
			
		}
		y=edit.size();
		for(int i=y-1; i>=0; i--){
			result+=edit[i];
		}
		
		if(result==edit){
			printf("You won't be eaten!\n");
		} else{
			printf("Uh oh..\n");
		}
		
	}
		
	
	
	return 0;
}