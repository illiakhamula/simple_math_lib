#include "math_lib.h"
#include <algorithm>
#include <vector>
#include <stdexcept>

namespace MathLib
{
    
    double obchyslytyMedianu(std::vector<double> chysla)
    {
        if (chysla.empty())
        {
            throw std::invalid_argument("Masyv porozhnii!");
        }

        
        std::sort(chysla.begin(), chysla.end());

        size_t rozmir = chysla.size();

       
        if (rozmir % 2 != 0)
        {
            return chysla[rozmir / 2];
        }
      
        else
        {
            return (chysla[(rozmir / 2) - 1] + chysla[rozmir / 2]) / 2.0;
        }
    }
}