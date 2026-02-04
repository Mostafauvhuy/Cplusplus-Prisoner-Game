#include <iostream>
#include <string>
#include <cmath>
#include <queue>
#include <algorithm>
#include<fstream>
#include<vector>
using namespace std;

enum enChoise { stone = 1, paper = 2 , scissors = 3 };

struct stinfogame
{
    int Times_Player_Won=0;
    int Times_computer_Won = 0;
    int Times_Draw = 0;
    string final_winner;
};

int HowManyRound()
{
    int RoundNum;
    cout << "enter how many you want play 1 to 10 ?";
    cin >> RoundNum;

    return RoundNum;

}

int ReadPositiveNumber(string message) // Read a postive integer
{

    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;

        if (number <= 0)
        {

            cout << "wrong,the number is not positive" << endl;

        }

    } while (number <= 0);

    return number;
}

enChoise enterYourChoise(int Choise)
{
    switch (Choise)
    {
    case 1: return enChoise::stone;
    case 2: return enChoise::paper;
    case 3:return enChoise::scissors;
    }

}

int RandomNumber(int form , int to )
{
    int randomNum;

    randomNum = rand() % (to - form + 1) + form;

    return randomNum;
}

string nameofchoice(enChoise choise)
{
    if (choise == enChoise::paper)
    {
        return "paper";
    }
    else if (choise == enChoise::scissors)
    {
        return "scissors";
    }
    else
    {
        return "stone";
    }
}

void showRuselt(enChoise playchoise, enChoise computerchoise, string winner,int numround)
{
    string nplaychoise = nameofchoice(playchoise);
    string ncomputerchoise = nameofchoice(computerchoise);

    cout << "_________________rount[ "<<numround<<" ]_____________" << endl;
    cout << "playchoise     : " << nplaychoise << endl;
    cout << "computerchoise : " << ncomputerchoise << endl;
    cout << "round winner   : " << winner << endl;
    cout << "________________________________________________________"<<endl;
}

void resultRound(enChoise playchoise, enChoise computerchoise,int numround, stinfogame & info)
{
    string winner;
    if (playchoise == enChoise::stone )
    {
        if(computerchoise==enChoise::scissors)
        {
            winner = "player";
            system("color 9f");
            info.Times_Player_Won++;
            
        }
        else if (computerchoise == enChoise::paper)
        {
            winner = "computer";
            system("color 4f");
            info.Times_computer_Won++;
        }
        else
        {
            winner = "no winner";
            system("color 2f");
            info.Times_Draw++;
        }
       
    }
    else if (playchoise == enChoise::paper)
    {
        if (computerchoise == enChoise::scissors)
        {
            winner = "computer";
            system("color 4f");
            info.Times_computer_Won++;
        }
        else if (computerchoise == enChoise::stone)
        {
            winner = "player";
            system("color 9f");
            info.Times_Player_Won++;
        }
        else
        {
            winner = "no winner";
            system("color 2f");
            info.Times_Draw++;
        }
    }
    else if (playchoise == enChoise::scissors )
    {
        if (computerchoise == enChoise::stone)
        {
            winner = "computer";
            system("color 4f");

            info.Times_computer_Won++;
        }
        else if (computerchoise == enChoise::paper)
        {
            winner = "player";
            system("color 9f");
            info.Times_Player_Won++;
        }
        else
        {
            winner = "no winner";
            system("color 2f");
            info.Times_Draw++;
        }
    }
    
    showRuselt(playchoise, computerchoise, winner, numround);
   
}

void show_final_result(stinfogame info)
{
    for (int i = 0;i < 900000000;i++)
    {


    }
    system("cls");

    cout << "               ____________________final result__________________________" << endl;
    cout << "               num of player won   : " << info.Times_Player_Won << endl;
    cout << "               num of computer won : " << info.Times_computer_Won << endl;
    cout << "               num of Draw         : " << info.Times_Draw << endl;
    cout << "               final winer         :" << info.final_winner << endl;
    cout << "               __________________________________________________________" << endl;
}

void resultFinal(stinfogame& info)
{
    if (info.Times_computer_Won > info.Times_Player_Won)
    {
        info.final_winner = "computer";
    }
    else if (info.Times_Player_Won > info.Times_computer_Won)
    {
        info.final_winner = "player";
    }
    else
    {
        info.final_winner = "Draw";
    }

    show_final_result(info);
}

void Round(stinfogame & info)
{
    int round = HowManyRound();

    for (int i = 0;i < round;i++)
    {
        enChoise playerchose = enterYourChoise(ReadPositiveNumber("enter your choise [1]stone [2]paper [3] scissors : "));
        enChoise computerchose = enterYourChoise(RandomNumber(1, 3));

        resultRound(playerchose, computerchose,i,info);
    }
    resultFinal(info);
}

void game()
{
    stinfogame info;

    srand((unsigned)(time(NULL)));

    // int RoundNum=HowManyRound();
    // vector<stinfogame> vinfo(RoundNum);

    Round(info);


}


int main()
{
    game();
   
}




