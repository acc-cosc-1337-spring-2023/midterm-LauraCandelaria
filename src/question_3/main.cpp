#include"question3.h"

int main()
{
    auto user_choice = 'n';
    do
    {
        int widgets_sold = 0;
        std::cout<<"How many widgets did you sell?";
        std::cin>>widgets_sold;

        int total_points = get_earned_points(widgets_sold);
        std::cout<<"Points earned: "<<total_points;
        std::cout<<"\nWould you like to continue? (type 'y' to continue)";
        std::cin>>user_choice;
        
    } while (user_choice == 'y'||user_choice == 'Y');
    
    return 0;
}