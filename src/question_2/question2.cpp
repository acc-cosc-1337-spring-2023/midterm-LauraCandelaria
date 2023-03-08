#include "question2.h"

bool test_config()
{
    return true;
}

int get_gcd(int num1, int num2)
{
    auto hcf = 0;

    while(num1 != num2)
    {
        if(num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    
    hcf = num1;
    return hcf;

}

bool validate_num(int gcd)
{
    bool is_gcd_valid = false;
    if(gcd >= 1 && gcd <= 200)
    {
        is_gcd_valid = true;
    }
    else
    {
        is_gcd_valid = false;
    }
    return is_gcd_valid;
}