
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// AI Financial Assistant
// This is a mock AI feature for financial recommendations.

void analyzeFinancialSituation(double balance)
{
    cout << "\n========== AI FINANCIAL ANALYSIS ==========\n";

    if (balance >= 5000)
    {
        cout << "AI Recommendation: Excellent financial position!\n";
        cout << "You have a strong balance.\n";
        cout << "Suggestion: Consider saving or investing more.\n";
    }
    else if (balance >= 1000)
    {
        cout << "AI Recommendation: Your financial position is stable.\n";
        cout << "Suggestion: Continue saving money regularly.\n";
    }
    else if (balance >= 0)
    {
        cout << "AI Recommendation: Your balance is relatively low.\n";
        cout << "Suggestion: Reduce unnecessary spending.\n";
    }
    else
    {
        cout << "AI Recommendation: Your account has a negative balance.\n";
        cout << "Suggestion: Review your expenses and avoid overspending.\n";
    }

    cout << "===========================================\n";
}

int main()
{
    string name;
    double balance;

    cout << "=================================\n";
    cout << "     AI FINANCIAL ASSISTANT\n";
    cout << "=================================\n";

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your account balance: $";
    cin >> balance;

    cout << fixed << setprecision(2);

    cout << "\nHello, " << name << "!\n";
    cout << "Your account balance is: $" << balance << endl;

    // AI feature analyzes the user's financial data.
    analyzeFinancialSituation(balance);

    cout << "\nThank you for using AI Financial Assistant!\n";

    return 0;
}
