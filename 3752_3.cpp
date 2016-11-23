#include <iostream>
#include <set> 

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	set<int> a;
	int x;
	int i = 0;

	while(cin >> x){

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