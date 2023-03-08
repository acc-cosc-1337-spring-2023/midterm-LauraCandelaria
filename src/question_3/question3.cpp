#include "question3.h"

bool test_config()
{
    return true;
}

int get_earned_points(int widgets_sold)
{
    int points;

    switch(widgets_sold)
    {
        case 16 ... 1000:
            points = widgets_sold * 15;
            break;
        case 11 ... 15:
            points = widgets_sold * 10;
            break;
        case 6 ... 10:
            points = widgets_sold * 5;
            break;
        case 1 ... 5:
            points = widgets_sold;
            break;
        default:
            points = 0;
            
    }

    return points;
}