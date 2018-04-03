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
while ((row>50)||(col>50)){
	cout<<"Numbers must be 50 or less. Enter new numbers.\n";
	cin>> row >> col;
	}

int *a;
int *b;
a= new int[row];
b= new int[col];

printmap();

}
	return 0;
}

void printmap(){
	cout<<endl<<"       ";
	for (int w=0; w<row; w++){
		if (w<10){cout <<"  "<< w;}
		else if (w<=50){cout<<" "<<w;}
	}
	cout <<endl<<  "       ";
	for (int v=0;v<row;v++){
		cout <<"___";
	}cout<<endl;
	for(int x=0; x<row; x++){
		for( int y=0; y<col; y++){
			numbers[x][y] = '~';
		}
	}

	for(int x=0; x<row; x++){
		if(x<10){cout << "    " << x << " | ";}
		else if (x>=10){cout <<"   " << x << " | ";}
		for( int y=0; y<col; y++){
			cout <<" "<< numbers[x][y] << " ";
		}
		cout << endl;
	}
		for(int x=0; x<row; x++){
		for( int y=0; y<col; y++){
		plots[x][y] = '~';
		}
		}
}