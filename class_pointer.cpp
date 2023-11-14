#include <iostream>
using namespace std;

class CricketScoreboard
{
private:
    int runs;
    int wickets;
    int over;

public:
    string currentPlayer;
    void changeScore(int score)
    {
        runs = score;
    }
    int getRuns()
    {
        return runs;
    }
    void changePlayer(string newPlayer)
    {
        currentPlayer = newPlayer;
    }
};

int main()
{
    CricketScoreboard scoreboard;
    CricketScoreboard *scoreboardPointer = &scoreboard;
    scoreboard.changePlayer("Rahul Dravid");
    scoreboard.changeScore(150);
    cout << scoreboard.getRuns() << endl;
    // Using pointer calling class functions
    cout << scoreboardPointer->currentPlayer << endl;
    scoreboardPointer->changeScore(200);
    cout << scoreboardPointer->getRuns() << endl;
}