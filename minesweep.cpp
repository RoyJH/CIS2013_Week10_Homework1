#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;
int x;
int y;
	int row;
	int col;
	int running = 1;
	char plots[10][10];
	char numbers[10][10];
	void printmap();
int main(){
	
	while(running==true){
		
cout<< "Enter two numbers, separated by a space, to set grid size.\n";
cin>> row>>col;

int *a;
int *b;
a= new int[row];
b= new int[col];
printmap();

}
	return 0;
}

void printmap(){
	cout << endl << "       0 1 2 3 4 5 6 7 8 9" << endl;
	cout        <<  "       ____________________" << endl;
	for(int x=0; x<row; x++){
		for( int y=0; y<col; y++){
			numbers[x][y] = '~';
		}
	}

	for(int x=0; x<row; x++){
		cout << "    " << x << " | ";
		for( int y=0; y<col; y++){
			cout << numbers[x][y] << " ";
		}
		cout << endl;
	}
		for(int x=0; x<row; x++){
		for( int y=0; y<col; y++){
		plots[x][y] = '~';
		}
		}
}