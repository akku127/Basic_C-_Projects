#include<iostream>
#include<windows.h>
using namespace std;
int count;
string player1,player2;
char player='X';
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
void draw(){
	system("cls");
  /*cout <<"Enter the First palyer name :\n";
	cin >> player1;
	cout <<"Enter the Second player name :\n";
	cin >>player2;*/	
	cout<<"\t Tic Tac ver1.0\n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl<<"\n\n\n";
	}
}
void input(){
	Beep(523,500);
	int choice;
	cout << "Press the number of the location :\n";
	cin >> choice;
	if( choice == 1 ){
		if(matrix[0][0] == '1'){
			matrix[0][0] = player;	
		}
		else{
			cout<<"Invalid position ";
			count--;
			system("pause");
			input();
		}
	}
	else if(choice == 2 ){
		if(matrix [0][1] == '2'){
			matrix[0][1] = player;
		}
		else{
			cout<<"Invalid position ";
			count --;
			system("pause");
			input();
		}	
	}
	else if( choice == 3 ){
		if(matrix [0][2] == '3'){
			matrix[0][2] = player;			
		}
		else{
			cout<<"Invalid position ";
			count--;
			system("pause");
			input();
		}	
	}
	else if( choice == 4 ){
		if(matrix[1][0] == '4'){
			matrix[1][0] = player;	
		}
		else{
			cout<<"Invalid position ";
			count--;
			system("pause");
			input();
		}				
	}
	else if( choice == 5 ){
		if(matrix[1][1] == '5'){
			matrix[1][1] = player;	
		}
		else{
			cout<<"Invalid position ";
			count--;
			system("pause");
			input();
		}				
	}
	else if( choice == 6 ){
		if(matrix[1][2]== '6')
		matrix[1][2] = player;
		else{
			cout<<"Invalid position ";
			count--;
			system("pause");
			input();
		}		
	}
	else if( choice == 7 ){
		if(matrix[2][0] == '7')
		matrix[2][0] = player;
		else{
			cout<<"Invalid position ";
			count--;
			system("pause");
			input();
		}		
	}
	else if( choice == 8 ){
		if(	matrix[2][1] == '8')
		matrix[2][1] = player;	
		else{
			cout<<"Invalid position ";
			count--;
			system("pause");
			input();
		}	
	}
	else if( choice == 9 ){
		if(matrix[2][2] == '9')
		matrix[2][2] = player;
		else{
			cout<<"Invalid position ";
			count--;
			system("pause");
			input();
		}		
	}
}
void playerchanger(){
	if(player == 'X'){
		player = 'O';
	}
	else
		player = 'X';
}
char winner(){
//first player
	if(matrix[0][0]=='X'&&matrix[0][1]=='X'&&matrix[0][2]=='X'){
	    return 'X';		
	}
	if(matrix[1][0]=='X'&&matrix[1][1]=='X'&&matrix[1][2]=='X'){
	    return 'X';		
	}
	if(matrix[2][0]=='X'&&matrix[2][1]=='X'&&matrix[2][2]=='X'){
	    return 'X';		
	}
	if(matrix[0][0]=='X'&&matrix[1][0]=='X'&&matrix[2][0]=='X'){
	    return 'X';		
	}
	if(matrix[0][1]=='X'&&matrix[1][1]=='X'&&matrix[2][1]=='X'){
	    return 'X';		
	}
	if(matrix[0][2]=='X'&&matrix[1][2]=='X'&&matrix[2][2]=='X'){
	    return 'X';		
	}
	if(matrix[0][0]=='X'&&matrix[1][1]=='X'&&matrix[2][2]=='X'){
	    return 'X';		
	}
	if(matrix[0][2]=='X'&&matrix[1][1]=='X'&&matrix[2][0]=='X'){
	    return 'X';		
	}
	
	//second player
	if(matrix[0][0]=='O'&&matrix[0][1]=='O'&&matrix[0][2]=='O'){
	    return 'O';		
	}
	if(matrix[1][0]=='O'&&matrix[1][1]=='O'&&matrix[1][2]=='O'){
	    return 'O';		
	}
	if(matrix[2][0]=='O'&&matrix[2][1]=='O'&&matrix[2][2]=='O'){
	    return 'O';		
	}
	if(matrix[0][0]=='O'&&matrix[1][0]=='O'&&matrix[2][0]=='O'){
	    return 'O';		
	}
	if(matrix[0][1]=='O'&&matrix[1][1]=='O'&&matrix[2][1]=='O'){
	    return 'O';		
	}
	if(matrix[0][2]=='O'&&matrix[1][2]=='O'&&matrix[2][2]=='O'){
	    return 'O';		
	}
	if(matrix[0][0]=='O'&&matrix[1][1]=='O'&&matrix[2][2]=='O'){
	    return 'O';		
	}
	if(matrix[0][2]=='O'&&matrix[1][1]=='O'&&matrix[2][0]=='O'){
	    return 'O';		
	}
	return '/';	
}
int main(){
	cout <<"Enter the player 1 name:\n";
	cin >>player1;
	cout <<"Enter the player 2 name :\n";
	cin >>player2;
	//cout<<'\a';
	Beep(400,500);
	count = 0;
	draw();
	while(1){
		
		count++;
		input();
		draw();
		if(winner() == 'X'){
			cout<<player1<<" wins!!! ";
			cout<<'\a';
			while(1) {
				cout << "you win\n";
				cout <<"\t\t\t\t\tHarrayyyyyyyy";
			}
			break;
		}
		else if(winner() == 'O'){
			cout<<player2<<" wins !!!";
			cout<<'\a';
			break;
		}
		else if(winner() == '/' && count == 9){
			cout<<" Its a draw "<<endl;
			break;
		}
		playerchanger();
	}
	system("pause");
	return 0;
}
