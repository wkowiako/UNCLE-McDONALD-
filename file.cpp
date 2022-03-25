#include <iostream>
#include <string>
#include <limits>
#include "file.h"

void farm::RUN()
{
        std::string zz ;
        std::cout << "Please write RUN and press enter" << std::endl ;
        std::cin >> zz;
    if(zz == "RUN")
        {
        std::cout << " "<< std::endl ; 
        }
    else if(zz != "RUN" )
        {
        exit(1) ; 
        }
}

void farm::validation()   
{
          
        std::cout << "the length of the fence " << std::endl;
        std::cin >> farm::fence;
    while ((std::cin.fail()) || (fence < 3))
        {
            if(std::cin.fail())
                {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<int>::max(), '\n');
                std::cout << "try again , only numbers"  << std::endl ;
                std::cin >> fence ;    
                }
            else if(fence < 3)    
                {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<int>::max(), '\n');
                std::cout << "try again ,the minimum length of the fence is 3 meters " << std::endl ;
                std::cin >> fence ;   
                }
        }  
}

void farm::fencing_dimensions() 
{
   for(int i = 1 ; (i* 2) + 1 <= fence ; i++)
        {
           int k ;  
           k = fence  - (i* 2) ;
           if(k*i > farm::sqr)
                {
                farm::sqr = k*i ;
                farm::a = i ;
                farm::b = k ;
                }
        }
    std::cout << "segments a = " << a << std::endl ;
    std::cout << "segments b = " << b << std::endl ;
    std::cout << "these two segments give the largest possible cubature = " << sqr ;  
}
 