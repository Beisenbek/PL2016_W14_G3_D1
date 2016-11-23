#include <iostream>
#include <set> 
#include <sstream>

using namespace std;

int main(){

	string s;
	getline(cin,s);

	stringstream ss;
	ss << s;


	set<int> a;
	int x;
	int i = 0;

	while(ss >> x){

		if(a.find(x) != a.end()){
			cout << "YES";
		}else{
			cout << "NO";
			a.insert(x);
		}

		cout << endl;

		i++;
	}


	return 0;
}