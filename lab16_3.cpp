#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int N){
	vector<int> myVector(N);
	for (int i = 0; i < N; i++){
		int k = rand()%10;
		myVector[i] = k;
	}
	return myVector;
}

void showVector(vector<int> v){
	cout << "[";
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << "]";
}
int dotProduct(vector<int> x,vector<int> y){
	int sum = 0;
	for (int i = 0; i < x.size(); i++){
		sum = sum + (x[i]*y[i]);
	}
	return sum;
}