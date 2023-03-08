#include"question2.h"

int main()
{
    auto user_choice = 'n';
    do
    {
        int num1, num2, gcd = 0;
        std::cout<<"\nPlease enter first number: ";
	    std::cin>>num1;
        std::cout<<"\nPlease enter second number: ";
        std::cin>>num2;
	    gcd = get_gcd(num1, num2);

        bool is_num_valid = validate_num(gcd);
        if(is_num_valid == true)
        {
            std::cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<gcd<<". \n";
            std::cout<<"\nWould you like to keep going? (Enter 'y' to continue) ";
            std::cin>>user_choice;
        }
        else
        {
            std::cout<<"GCD invalid. \n";
            std::cout<<"\nWould you like to try again? (Enter 'y' to continue) ";
            std::cin>>user_choice;
        }

    } while (user_choice == 'y' || user_choice == 'Y');
    
    return 0;
}