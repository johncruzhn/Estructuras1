#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

	bool comprobar(int var, int pass[]){
		for(int i=0; i<15; i++)
        if(var == pass[i])
            return true;
    	return false;
	}

int main(){
	
	char caracter[] = "!#$%&'()"",-.\+/0123456789:;<=>?@[]^_`{|}ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int password[15];
	int var;
	
	srand((unsigned)time(0));
	
	
	for(int i=0; i<15 ; i++){
		//cout<<caracter[rand()%70];
		do
			var=rand()%93;
			while(comprobar(var, password));
			password[i]=var;
			cout<<caracter[var];
		
	}
	return 0;

}
	
	
