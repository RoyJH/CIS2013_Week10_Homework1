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
int playing =1;
char plots[49][49];
char numbers[49][49];
void printmap();
void updatemap();
void revealmap();
char play;

	
int main(){
while(playing == true){
	srand(time(NULL));
	cout<< "Enter two numbers, separated by a space, to set grid size. (49 Max)\n";
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
		int x= rand() % row +1;
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
	
	cout<<"Would you like to play again? Y/N\n";
	cin>> play;
	if ((play=='Y')||(play=='y')){
		playing=true;
		running=1;
	}
	else if ((play=='N')||(play=='n')){playing=false;}
	else {cout<< "Invalid option.  Please enter Y/y or N/n.\n";
	cin>>play;}
	
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
//Update board with entered coordinates.
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
		if(x<10){cout << "    " << x << " | ";}
		else if (x>=10){cout <<"   " << x << " | ";}
		for( int y=0; y<col; y++){
			cout <<" "<< numbers[x][y] << " ";
		}
		cout << endl;
	}

}

void revealmap(){
//Reveals that game board after player has loss.
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
		if(x<10){cout << "    " << x << " | ";}
		else if (x>=10){cout <<"   " << x << " | ";}
		for( int y=0; y<col; y++){
			cout <<" "<< plots[x][y] << " ";
		}
		cout << endl;
	}

}


