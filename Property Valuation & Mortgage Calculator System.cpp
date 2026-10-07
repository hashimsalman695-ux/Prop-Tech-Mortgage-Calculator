#include<iostream>
using namespace std;
#include<cmath>

int main(){ 
    int choice;
    double property_price, down_payment, Annual_interest, loan_tenure;
    cout<<"=====================================================\n";
    cout<<"  PROP-TECH SOLUTIONS: PROPERTY & MORTGAGE CLI\n";
    cout<<"=====================================================\n";
    do
        {
            cout<<"[1]. Enter Property Total Price ($):\n";
            cout<<"[2]. Enter Down Payment ($):\n";
            cout<<"[3]. Enter Annual Interest Rate (%):\n";
            cout<<"[4]. Enter Loan Tenure (Years):\n";
            cout<<"[5]. Exit\n";
            cout<<"Enter your choice:\n ";
            
            cin>>choice;
            switch(choice)
                {
                    case 1:
                        {
                            cout<<"Enter Property Total Price ($):\n";
                            cin>>property_price;
                            break;
                        }
                    case 2:
                        {
                            cout<<"Enter Down Payment ($):\n";
                            cin>>down_payment;
                             break;
                        }
                    case 3:
                        {
                            cout<<"Enter Annual Interest Rate (%):\n";
                            cin>>Annual_interest;
                             break;
                        }
                    case 4:
                        {
                            cout<<" Enter Loan Tenure (Years):\n";
                            cin>>loan_tenure;
                             break;
                        }
                    case 5:
                        {
                            cout<<"Exit";
                            break;
                        }
                    default:
                        {
                            cout<<"Invalid choice\n";
                             break;
                        }
                }
        }
        while(choice!=5);
        
    double principal_loan = property_price - down_payment;
    cout << "\n=====================================================\n";
    cout << "              FINANCIAL BREAKDOWN\n";
    cout << "=====================================================\n";
    cout << "* Property Price         : $" << property_price << "\n";
    cout << "* Down Payment Paid      : $" << down_payment << "\n";
    cout << "* Loan Amount (Principal): $" << principal_loan << "\n";
    cout << "=====================================================\n";
    
    double monthly_interest_rate = (Annual_interest / 100.0) / 12.0;
    double total_months = loan_tenure * 12;
    double monthly_emi = 0;
    
    if (monthly_interest_rate > 0 && total_months > 0) {
        monthly_emi = (principal_loan * monthly_interest_rate * pow(1 + monthly_interest_rate, total_months)) / 
                      (pow(1 + monthly_interest_rate, total_months) - 1);
    } else if (total_months > 0) {
        monthly_emi = principal_loan / total_months;
    }
    
    double total_payment = monthly_emi * total_months;
    double total_interest = total_payment - principal_loan;
    
    cout << "\n=====================================================\n";
    cout << "              CALCULATION RESULTS\n";
    cout << "=====================================================\n";
    cout << "* Property Price         : $" << property_price << "\n";
    cout << "* Down Payment Paid      : $" << down_payment << "\n";
    cout << "* Loan Amount (Principal): $" << principal_loan << "\n";
    cout << "* Monthly Mortgage (EMI) : $" << monthly_emi << "\n";
    cout << "* Total Interest Payable : $" << total_interest << "\n";
    cout << "* Total Cost of Loan     : $" << total_payment << "\n";
    cout << "=====================================================\n";
    cout << "[Status] Program executed successfully!\n";
    
    return 0;
}
