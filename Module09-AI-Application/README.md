
# Module 9 - Using AI to Expand Your Application

## Project Name
AI Financial Assistant

## 1. Feature Description
The AI Financial Assistant analyzes a user's bank account balance and provides financial recommendations.

It helps users understand their financial situation and make better saving and spending decisions.

## 2. Data Requirements
The application needs:
- User's name
- Bank account balance

## 3. User Experience
Users enter their name and account balance.

The application displays:
- User information
- Current account balance
- Financial analysis
- Personalized saving and spending suggestions

## 4. AI Integration
The AI feature is implemented using a separate C++ function called analyzeFinancialSituation().

The function analyzes the account balance using conditional statements and provides an appropriate recommendation.

This project uses a rule-based Mock AI instead of an external AI service.

A future version could connect to a real AI API.

## 5. Testing

| Test | Balance | Expected Result |
|---|---:|---|
| 1 | $6,000 | Excellent financial position |
| 2 | $1,500 | Stable financial position |
| 3 | $500 | Low balance warning |
| 4 | -$200 | Negative balance warning |

All four tests passed successfully.

## 6. Technologies Used
- C++
- Functions
- Conditional Statements
- Strings
- User Input and Output
- GCC Compiler

## 7. Conclusion
This project demonstrates how AI-inspired functionality can expand a traditional C++ banking application.

The Mock AI feature provides financial recommendations based on user account data.

It can be expanded in the future by connecting to a real AI service.
