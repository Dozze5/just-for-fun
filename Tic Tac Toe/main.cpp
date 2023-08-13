#include<iostream>
#include<stdlib.h>

using namespace std;

char matrix[3][3];

void init_matrix();
void get_player_move(void);
char check();
void get_Computter_move();
void disp_Matrix();


int main(int argc , char **argv)
{
   char done = ' ';

   cout<<"Tic Tac Toe"<<endl;  

   init_matrix();
   do{
    disp_Matrix();
    get_player_move();
    // cout<<92;
    done = check();

    if(done != ' ') break;

    get_Computter_move();

    done = check();

   }while(done = ' ');

 if(done == 'X') cout<<endl<<"You Won"<<endl;
 else cout<<endl<<"I Won"<<endl;

 disp_Matrix();
  
   return 0;
}

char check(){
  int i,j;
for(i = 0; i < 3; i++){
  // cout<<53;
       if(matrix[i][0] == matrix[i][1]&&matrix[i][1]==matrix[i][2])
       return matrix[i][1];
   }

   for(i = 0; i < 3; i++){
    if(matrix[0][i] == matrix[1][i]&&matrix[1][i]==matrix[2][i])
       return matrix[1][i];
   }

   if(matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
   return matrix[0][0];

   if(matrix[0][2]==matrix[1][1] && matrix[1][1] == matrix[2][0])
   return matrix[1][1];

   return ' ';
}

void init_matrix(){
     int i,j;
     for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
           matrix[i][j] = ' ';
}

void disp_Matrix(){
  int i;

  for(i = 0; i < 3; i++){
    cout<<" "<<matrix[i][0]<<" | "<<matrix[i][1]<<" | "<<matrix[i][2]<<" ";
    if(i!=2)
    cout<<endl<<"---|---|---"<<endl;
  }
  cout<<endl;
}

void get_player_move(void){
  int x,y;
  cout<<endl<<"Enter your position"<<endl;
  cin>>x>>y;

   x--;y--;
  // cout<<456;
  if(matrix[x][y] != ' '){
    // cout<<47754;
    cout<<endl<<"Invalid Try Again"<<endl;
    get_player_move();
  }
  else{ 
    // cout<<8944784;
    matrix[x][y] = 'X';}

}

void get_Computter_move(){
  int i , j;

  for(i = 0; i < 3; i++){
   for(j = 0; j < 3; j++)
     if(matrix[i][j] == ' ')break;
     if(matrix[i][j] == ' ')break;
  }

  if(i*j == 9){
    cout<<endl<<"Draw"<<endl;
    exit(0);
  }
  else matrix[i][j] = 'O';
}