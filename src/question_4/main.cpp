#include"question4.h"

int main()
{
    auto user_choice = 'n';
    do
    {
        std::string binary_number;
        std::cout<<"\nPlease enter an 8 digit binary number: ";
        std::cin>>binary_number;

        bool is_num_valid = validate_num(binary_number);

        if(is_num_valid == true)
        {
            int decimal_number = binary_to_decimal(binary_number);
            std::cout<<"Your decimal is: "<<decimal_number<<". \n";
            std::cout<<"Would you like to enter another number? (Enter 'y' to continue) ";
            std::cin>>user_choice;
            
        }
        if(is_num_valid == false)
        {
            std::cout<<"Your number invalid. Please enter an 8 digit number using 1s and 0s only. \n";
            std::cout<<"Would you like to try again? (Enter 'y' to continue) ";
            std::cin>>user_choice;
        }

    } while (user_choice == 'y' || user_choice == 'Y');

    return 0;
    
}