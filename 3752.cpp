#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int a[10000];
	int x;
	int i = 0;

	while(cin >> x){
		a[i] = x;
		bool found = false;
		for(int j = 0; j < i; ++j){
			if(a[j] == a[i]){
				found = true;
				break;
			}
		}

		if(found){
			cout << "YES";
		}else{
			cout << "NO";
		}

		cout << endl;

		i++;
	}


	return 0;
}