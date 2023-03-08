#include "question1.h"

bool test_config()
{
    return true;
}

std::string factorial(int num)
{
    std::string result;

    auto sum = 1;
    while(num > 1)
    {
        sum = sum * num;
        result += std::to_string(num) + '*';
        num--;
    }

    return result + std::to_string(num) + "=" + std::to_string(sum);
}

bool validate_num(int num)
{
    bool is_num_valid = false;
    if(num >= 1 && num <= 10)
    {
        is_num_valid = true;
    }
    else
    {
        is_num_valid = false;
    }
    return is_num_valid;
}