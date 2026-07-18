#include <iostream>
#include <ostream>
using namespace std;


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum; 
}


int SelecetRounds(){

    int Number;
    cout << "How Many Rounds 1 to 10 ? "<<endl;
    cin >> Number ;
    cout<< endl;

    return Number;
}

void PrintRounds(int RoundNumber , int PlayerChoice , int ComputerChoice , string RoundWinner){

    cout << "_________Round [ " << RoundNumber << " ]_________ "<<endl;
         cout << "Player choice : " << PlayerChoice << endl;
         cout << "Computer choice : " << ComputerChoice << endl;
         cout << "Round Winner : " << RoundWinner << endl;
         cout << endl;
}
string  DeterminingTheWinner(int PlayerChoice , int ComputerChoice){
    string PlayerWinner = "Player Win";
    string  ComputerWinner = "Computer Win";
    string  NoWinner = "No Winner ";
    if (PlayerChoice == ComputerChoice){
       return NoWinner;
    }
    else if (PlayerChoice == 1 && ComputerChoice == 2 ) 
    {
      return ComputerWinner;

    }
    else if (PlayerChoice == 2 && ComputerChoice == 1)
    {
        return PlayerWinner;
    }
      else if (PlayerChoice == 1 && ComputerChoice == 3)
    {
        return ComputerWinner;
    }
        else if (PlayerChoice == 3 && ComputerChoice == 1)
    {
        return PlayerWinner;
    }
          else if (PlayerChoice == 2 && ComputerChoice == 3)
    {
        return ComputerWinner;
    }
        else
    {
        return PlayerWinner;
    }
    
}

void PrintGameResults(int Rounds , int PlayerWon , int ComputerWon , int DrawTimes){
     string FinalWinner;
     if (PlayerWon > ComputerWon){
        FinalWinner = "Player Winner";
     }
     else if (ComputerWon > PlayerWon)
     {
        FinalWinner = "Computer Winner";

     }
     else{
        FinalWinner = "No Winner";
     }
     
    cout << "------------------------------------------------------------"<<endl;
    cout << "                +++ G a m e  O v e r +++ " << endl;
    cout << "------------------------------------------------------------"<<endl;
    cout << "____________________" << "[ Game Result ]"<<"____________________"<< endl;
    cout << " Game Rounds        : " << Rounds << endl;
    cout << " Player won times   : " << PlayerWon << endl;
    cout << " Computer won times : " << ComputerWon << endl;
    cout << " Draw times         : " << DrawTimes << endl;
    cout << " Final Winner       : " << FinalWinner << endl;



}




void StartGame(int Rounds){
    int PlayerChoice ;
    int ComputerChoice;
    string  RoundWinner;
    int PlayerWon = 0 ;
    int ComputerWon = 0 ;
    int DrawTimes = 0 ;
    for(int RoundNumber = 1 ; RoundNumber<=Rounds ; RoundNumber++){
        cout << endl;
        cout << "Round " << "[ " << RoundNumber << " ]" << " begins: "<<endl;
        cout << "Your Choice: [1]:Stone, [2]:Paper, [3]:Scissors"<<endl; 
        cin>> PlayerChoice;
        ComputerChoice = RandomNumber(1, 3);
        RoundWinner = DeterminingTheWinner(PlayerChoice , ComputerChoice);
        PrintRounds(RoundNumber, PlayerChoice , ComputerChoice , RoundWinner);
        if (RoundWinner == "Player Win")
        PlayerWon++;
        else if (RoundWinner == "Computer Win")
        {
            ComputerWon++;
        }
        else
        DrawTimes++;
    }

    PrintGameResults (Rounds , PlayerWon , ComputerWon , DrawTimes);
}




int main(){

char PlayAgain;

do
{
int Number = SelecetRounds();
 StartGame(Number);
 cout << endl;
 cout << "Do you want to play again? Y/N?"<<endl;
 cin >> PlayAgain;
} while (PlayAgain == 'Y');




    return 0 ;
}