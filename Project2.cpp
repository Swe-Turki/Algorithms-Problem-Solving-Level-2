#include <iostream>
#include <cmath>
using namespace std;

enum QALevel {Easy = 1 , Med = 2 , Hard = 3 , Mix = 4};
enum QAType {Add = 1 , Sub = 2 , Mul = 3 , Div = 4 , Mixx = 5};
struct stGameResult
{
    int NumberOfQuestions = 0;
    string QuesationsLevel ;
    string QuestionsType ;
    int RightAnswer = 0;
    int WrongAnswer = 0;

};

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

int ReadHowManyQA(){
    int Number;
    cout << "How Many Questions do you want to answer?"<< endl;
    cin >> Number;

    return Number;
}

QALevel ReadLevelOfQA(){

    int Level;
    do
    {
        cout << "Enter Questions Level [1] Easy, [2] Med. [3] Hard, [4] Mix ? "<< endl;
        cin >> Level;
    } while (Level < 1 || Level > 4);
    
    return (QALevel)Level;
}

QAType ReadTypeOfQA(){
    int Type;
    do
    {
        cout << "Enter Questions Type [1] Add, [2] Sub. [3] Mul, [4] Div, [5] Mix ? "<< endl;
        cin >> Type;
        cout << endl;

    } while (Type < 1 || Type > 5);
    
    return (QAType)Type;
}

int DetermineLevel(QALevel Level){
 
    if(Level == QALevel::Easy)
    return RandomNumber(1 , 25);

    else if (Level == QALevel::Med)
    return RandomNumber(26 , 49);

    else if (Level == QALevel::Hard)
    return RandomNumber(50 , 100);

    else
    return RandomNumber(1 , 100);       
}


    
void DetermineType(int Number1, int Number2, QAType Type) {
    char Op = '+';
    if (Type == QAType::Sub) Op = '-';
    else if (Type == QAType::Mul) Op = '*';
    else if (Type == QAType::Div) Op = '/';

    cout << Number1 << endl;
    cout << Number2 << "   " << Op << endl;
    cout << "------------------" << endl;
}
    


int Calculator(int Number1, int Number2, QAType Type) {
    switch (Type) {
        case QAType::Add: return Number1 + Number2;
        case QAType::Sub: return Number1 - Number2;
        case QAType::Mul: return Number1 * Number2;
        case QAType::Div: return Number1 / Number2;
        default: return 0;
    }
}


string Level(QALevel level)
{
    string arrlevelName[4] = { "Easy", "Med", "Hard" , "Mix" };
    return arrlevelName[level - 1];
}
string Type(QAType type)
{
    string arrTypeName[5] = { "Add", "Sub", "Mul" , "Div" , "Mix"};
    return arrTypeName[type - 1];
}

bool PrintRightOrWrong(int Result , int UserInput){

    return (Result == UserInput);
}

void PrintGameInfo(stGameResult GameResult){

    if(GameResult.RightAnswer > GameResult.WrongAnswer){
    cout << endl;
    cout << "-----------------------------------" << endl;
    cout << "Final Result is Pass :-) " << endl;
    cout << "-----------------------------------" << endl;
    }
  else if (GameResult.WrongAnswer > GameResult.RightAnswer)
  {
    cout << endl;
     cout << "-----------------------------------" << endl;
    cout << "Final Result is Fail :(- "  << endl;
    cout << "-----------------------------------" << endl;
  }
  else{
    cout << "-----------------------------------" << endl;
    cout << "Final Result is Draw : " << endl;
    cout << "-----------------------------------" << endl;

  }

  cout << "NumberOfQuestions : " << GameResult.NumberOfQuestions << endl;
  cout << "Questions Level : " << GameResult.QuesationsLevel << endl ;
  cout << "Questions type : " << GameResult.QuestionsType << endl ;
  cout << "Number of right answer is : " << GameResult.RightAnswer << endl;
  cout << "Number of wrong answer is : " << GameResult.WrongAnswer << endl;
  cout << "-----------------------------------" << endl;

    
}


void PlayGame(){
     
    int rounds = ReadHowManyQA();
    QALevel level = ReadLevelOfQA();
    QAType type = ReadTypeOfQA();
    QAType ActuleType;
    stGameResult GameResult ;
    int Number1;
    int Number2;
    int UserInput;
    int Result;
    int RightAnswer = 0 ;
    int WrongAnswer = 0 ;

    for(int i = 1 ; i <= rounds ; i++){
        cout << endl << "Question [" << i << "/" << rounds <<"]" << endl;
        Number1 = DetermineLevel(level);
        Number2 = DetermineLevel (level);
        ActuleType = type;
      if (type == QAType::Mixx) {
        ActuleType = (QAType)RandomNumber(1, 4); 
      }
        DetermineType(Number1 , Number2 , ActuleType);
        cin >> UserInput;
        cout<< endl;
        Result = Calculator(Number1,Number2,ActuleType);
        
        if (PrintRightOrWrong(Result , UserInput)){
            cout << "Right Answer:-)"<<endl;
            RightAnswer++;
        }
        else {
           cout <<"Wrong Answer:-("<<endl;
           cout << "Right Answer is : " << Result << endl;
           WrongAnswer++;
        } 
    }
    GameResult.NumberOfQuestions = rounds;
    GameResult.QuesationsLevel = Level(level);
    GameResult.QuestionsType = Type(type);
    GameResult.RightAnswer = RightAnswer;
    GameResult.WrongAnswer = WrongAnswer ;
    PrintGameInfo(GameResult);   


}

void StartGame (){
    char PlayAgin = 'Y';
    
    do
    {
        PlayGame();
        cout << "Do you wanna play agin ? Y/N ? " << endl;
        cin >> PlayAgin;
    } while (PlayAgin == 'Y' || PlayAgin == 'y');
    
}




int main (){
srand((unsigned)time(NULL)); 
StartGame();

}