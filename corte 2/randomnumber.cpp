    //Programa base para realizar lista con numeros aleatorios
    #include <iostream>
    #include <cstdlib>
    #include <ctime>
     
    using namespace std;
     
    int main(){
     
        int arreglo[50];
        int num = 0;
     
        srand(time(NULL));
     
        for(int i = 0; i < 25; i++){
            num = (1 + rand() % 99);
     
            int num_2 = 0;
     
            while(num_2 < i){
     
                if(num != arreglo[num_2])
                    num_2++;
     
                else{
                        num = (1 + rand() % 99);
                        num_2 = 0;
     
                    }
            }
     
            arreglo[i] = num;
     
            cout << arreglo[i] << "\n";
        }
     
        return 0;
    }
     

     
     
     
/*  
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

const int csize = 5;

void fillCard ( int card [ ] [csize] );
void displayCard ( int card [][csize] );
char drawNum ( int & num, bool checkAray[] );
string check4match ( int num, int cardAray [][csize] );
string check4win ( int cArray [][csize] );

//********************************* MAIN FUNCTION ******************************
int main ( )
{
int bingoCard[csize][csize] = {{0},{0}};
bool chkArray [76] = { false };
int row, col, num ;
bool noWin = true ;
string win ;

srand( time ( NULL ) ) ;

fillCard( bingoCard );

while ( noWin )
{
system("cls");

displayCard( bingoCard );

cout << " " << drawNum( num, chkArray ) << " " << num;
cout << endl << endl;

cout << " " << check4match( num, bingoCard ) << endl << endl ;

win = check4win( bingoCard );

system("pause");

if ( win == "BINGO!!" )
{
system("cls");
noWin = false;
cout << endl << setw(16) << win << endl << endl ;
displayCard( bingoCard );
cout << endl << endl ;
}
else
noWin = true;

}

system("pause");
return 0;
}
//***************************** END of Main ***********************************

//*************************** FillCard Function *******************************
void fillCard ( int card [] [csize] )
{

int num1;
bool flag;
for ( int col = 0; col < csize ; col++ )
{
for ( int row = 0; row < csize ; row++ )
{


do{
flag = false;
num1 = rand ()% 15 + 1 + (15 * col);

for(int check = 0; check < row; check++)
{
if (num1 == card[check][col])
{
flag = true;
}
}

}while (flag);
card[col][row] = num1;
card[2][2] = 0;

}

}
}






//**************************END of FILLCARD ***********************************

//************************ DisplayCard Function *******************************
void displayCard ( int card [][csize] )

{
for ( int col = 0 ; col < csize ; col++ )
{
for ( int row = 0; row < csize ; row++ )

cout <<setw(5)<<card[row][col];
cout<<endl;

}

cout << "The displayCard function has not been defined yet." << endl;
}
//****************************** END of DISPLAYCARD ****************************

//******************************* DrawNum Function *****************************
char drawNum ( int & num, bool checkAray[] )
{

num = 0;
num = rand () % 75 + 1;
checkAray[num] = true;
if ( num > 0 && num < 16 && checkAray[num] == true)

return 'B';

if (num >= 16 && num < 31 && checkAray[num] == true)

return 'I';

if (num >= 31 && num < 46 && checkAray[num] == true)

return 'N';

if (num >= 46 && num < 61 && checkAray[num] == true)

return 'G';

if (num >= 61 && num < 76 && checkAray[num] == true)

return 'O';


}
//******************************END of DRAWNUM ********************************

//**************************** check4match Function ***************************
string check4match ( int num, int cardAray [][csize])
{
int col = 0;

if (num > 0 && num < 16)
col = 0;
else if (num >=16 && num > 31)
col = 1;
else if (num >=31 && num > 46)
col = 2;
else if (num >= 46 && num > 61)
col = 3;
else if (num >= 61 && num > 76)
col = 4;

return "Match check has not been defined yet." ;
}
//************************* END of CHECK4MATCH ********************************

//************************* check4win Function ********************************
string check4win ( int cArray [][csize])
{
int count = 0;

for(int row =0; row < 5; row ++)
{
for(int col =0; col < 5; col++)
{
if(cArray[row][col]==0)
{
count++;
}
if(count==5)
{
return "BINGO!!";
}
}
count = 0;
}
count = 0;


for(int col = 0; col < 5; col ++)
{
for(int row =0; row < 5; row++)
{
if(cArray[row][col]==0)
{
count++;
}
if(count==5)
{
return "BINGO!!";
}
}
count = 0;
}


count = 0;
int rowNum = 0;
for(int col =0; col < 5; col++)
{
if(cArray[col][rowNum]==0)
{
count++;
}
if(count==5)
{
return "BINGO!!";
}
rowNum++;
}

int rowNum2 = 4;
count = 0;
for(int col = 4; col > -1; col--)

{
if(cArray[col][rowNum2]==0)
{
count++;
}
if(count==5)
{
return "BINGO!!";
}
rowNum2 --;
}

return "NOT BINGO!!" ;




return "BINGO!!" ;
}*/