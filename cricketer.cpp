#include <iostream>
using namespace std;

class Cricketer {
protected:
    string playerName;
    int matchesPlayed;

public:
    void inputData() {
        cout << "Enter player name: ";
        cin >> playerName;
        cout << "Enter matches played: ";
        cin >> matchesPlayed;
    }
};

class Batsman : public Cricketer {

    int totalRuns;
    double averageRuns;
    int bestPerformance;

	public:
	    void inputData() 
		{
	        Cricketer::inputData(); // Call base class input data function
	        cout << "Enter total runs: ";
	        cin >> totalRuns;
	        cout << "Enter best performance: ";
	        cin >> bestPerformance;
	
	        calculateAverageRuns(); // Calculate average runs after input
	    }
	
	    void calculateAverageRuns() 
		{
	        if (matchesPlayed > 0) 
			{
	            averageRuns = (totalRuns) / matchesPlayed;
	        } else {
	            averageRuns = 0;
	    }
}

    void displayData() {
        cout << "\nPlayer Name: " << playerName << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

main() {
    Batsman batsman;
    batsman.inputData();   // Input data for the batsman
    batsman.displayData(); // Display the batsman's data

}

