#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;
int first;
int second;
int row;
int col;
int bombs;
int running = 1;
char plots[49][49];
char numbers[49][49];
void printmap();
void updatemap();
void revealmap();


	
int main(){
	
	srand(time(NULL));
		
	cout<< "Enter two numbers, separated by a space, to set grid size.\n";
	cin>> row>>col;
	while ((row>50)||(col>50)){
		cout<<"Numbers must be 50 or less. Enter new numbers.\n";
		cin>> row >> col;
	}
	cout<< "How many mines should be on the field? Enter a number: \n";
	cin>> bombs;
	int *a;
	int *b;
	a= new int[row];
	b= new int[col];

	printmap();

for (int i=0; i<=bombs;i++){
	int x= rand() % row + 1;
	int y= rand() % col +1;
	plots[x][y] = 'X';
}
	while(running==true){
		cout << "Enter plot to check.\n";
		cin >> first>>second;
		
		if(plots [first][second] == 'X'){
			numbers[first][second] = '@';
			plots[first][second] = '@';
			cout<< "You went Boom! GAME OVER...";
			revealmap();
			running=0;
		}
		else if (plots [first][second]=='~'){
			numbers[first][second]= ' ';
			plots[first][second]= ' ';
		updatemap();
		}
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

void updatemap(){
	cout<<endl<<"       ";
	for (int w=0; w<row; w++){
		if (w<10){cout <<"  "<< w;}
		else if (w<=50){cout<<" "<<w;}
	}
	cout <<endl<<  "       ";
	for (int v=0;v<row;v++){
		cout <<"___";
	}cout<<endl;
	/* for(int x=0; x<row; x++){
		for( int y=0; y<col; y++){
			numbers[x][y] = '~';
		}
	} */

	for(int x=0; x<row; x++){
		if(x<10){cout << "    " << x << " | ";}
		else if (x>=10){cout <<"   " << x << " | ";}
		for( int y=0; y<col; y++){
			cout <<" "<< numbers[x][y] << " ";
		}
		cout << endl;
	}
/* 		for(int x=0; x<row; x++){
		for( int y=0; y<col; y++){
		plots[x][y] = '~';
		} */
		}

void revealmap(){
	cout<<endl<<"       ";
	for (int w=0; w<row; w++){
		if (w<10){cout <<"  "<< w;}
		else if (w<=50){cout<<" "<<w;}
	}
	cout <<endl<<  "       ";
	for (int v=0;v<row;v++){
		cout <<"___";
	}cout<<endl;
	/* for(int x=0; x<row; x++){
		for( int y=0; y<col; y++){
			numbers[x][y] = '~';
		}
	} */

	for(int x=0; x<row; x++){
		if(x<10){cout << "    " << x << " | ";}
		else if (x>=10){cout <<"   " << x << " | ";}
		for( int y=0; y<col; y++){
			cout <<" "<< plots[x][y] << " ";
		}
		cout << endl;
	}
/* 		for(int x=0; x<row; x++){
		for( int y=0; y<col; y++){
		plots[x][y] = '~';
		} */
	}


