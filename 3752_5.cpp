#include <iostream>
#include <set> 

using namespace std;
set<int> a;

void check(int x){
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
			int x = atoi(temp.c_str());
			check(x);
			temp = "";
		}
		else{ 
			temp = temp + s[i];
		}
	}

	int x = atoi(temp.c_str());
	check(x);

	return 0;
}