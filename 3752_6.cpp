#include <iostream>
#include <set> 

using namespace std;
set<string> a;

void check(string x){
	if(a.find(x) != a.end()){
			cout << "YES\n";
		}else{
			cout << "NO\n";
			a.insert(x);
	}
}

int main(){

	freopen("input.txt","r",stdin);

	string s;
	getline(cin,s);

	string temp  = "";

	for(int i = 0; i < s.length(); ++i){
		if(s[i] == ' '){
			check(temp);
			temp = "";
		}
		else{ 
			temp = temp + s[i];
		}
	}

	check(temp);

	return 0;
}