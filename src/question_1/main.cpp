#include"question1.h"

int main()
{
    auto user_choice = 'n';
    do
    {
        int num;
        std::cout<<"\nPlease enter a number 1-10: ";
	    std::cin>>num;

        bool is_num_valid = validate_num(num);
        if(is_num_valid == true)
        {
            std::cout<<"The factorial sequence of "<<num<<" is: "<<factorial(num);
            std::cout<<"\nWould you like to keep going? (Enter 'y' to continue) ";
            std::cin>>user_choice;
        }
        else
        {
            std::cout<<"Number invalid, must be between 1 & 10. \n";
            std::cout<<"\nWould you like to try again? (Enter 'y' to continue) ";
            std::cin>>user_choice;
        }


    } while (user_choice == 'y' || user_choice == 'Y');
    

    return 0;
}