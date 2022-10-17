#include <iostream>

using namespace std;

void findmax(int i, int j, int m) {
	int maxp;
	maxp= (i>j) ? i:j;
	maxp= (m>maxp) ? m:maxp;
	cout << "\n MAX is:" << maxp;
	cin.get();
}

int main()
{
	int x,y,z;
	cout<<"\nenter three numbers:" ;
	cin >> x>>y>>z;
	findmax(x,y,z);
	cin.get();
	return 0;

}
