//
#include"question4.h"

bool test_config()
{
    return true;
}

std::string reverse_string(std::string bin_num)
{
    std::string bin_num_reversed;
    for(int i = bin_num.size(); i > 0; i--)
    {
        bin_num_reversed += bin_num.at(i-1);
    }
    return bin_num_reversed;
}

int binary_to_decimal(std::string binary_num)
{
    double decimal_num;
    std::string reversed_bin_num = reverse_string(binary_num);

    for(int i = 0; i < reversed_bin_num.length(); i++)
    {
        if (reversed_bin_num[i] == '1')
        {
            decimal_num += pow(2, i);
        }
    }

    return decimal_num;
}

bool validate_num(std::string binary_num)
{
    auto is_num_valid = false;
    
    if(binary_num.length() == 8)
    {
        for(unsigned int i = 0; i < binary_num.length(); i++)
        {
            if(!(binary_num[i] == '0' or binary_num[i] == '1'))
            {
                is_num_valid = false;
            }
            else
            {
                is_num_valid = true;
            }
        }
    }
    else
    {
        is_num_valid = false;
    }

    return is_num_valid;
}