#include <iostream>
#include <map> 

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	map<int,string> a;
	int x;
	int i = 0;

	while(cin >> x){

		if(a[x] == "asd"){
			cout << "YES";
		}else{
			cout << "NO";
			a[x] = "asd";
		}

		cout << endl;

		i++;
	}


	return 0;
}