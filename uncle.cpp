#include <iostream>
#include <string>
#include <limits>

int main()
{
    std::string q ;
    std::cout << "Please write RUN and press enter" << std::endl ;
    std::cin >> q  ;
    if(q == "RUN")
        {
        std::cout << " "<< std::endl ; 
        }
    else if(q != "RUN" )
        {
        exit(1); 
        }
    int n = 0 , sqr = 0  , a = 0 , b = 0 ; 
    std::cout << "the length of the fence " << std::endl;
    std::cin >> n;
    while ((std::cin.fail()) || (n < 3))
        {
            if(std::cin.fail())
                {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<int>::max(), '\n');
                std::cout << "try again , only numbers"  << std::endl ;
                std::cin >> n ;    
                }
            else if(n < 3)    
                {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<int>::max(), '\n');
                std::cout << "stry again ,the minimum length of the fence is 3 meters " << std::endl ;
                std::cin >> n ;   
                }
        }
    for(int i = 1 ; (i* 2) + 1 <= n; i++)
        {
           int k ;  
           k = n - (i* 2) ;
           if(k*i > sqr)
                {
                sqr = k*i ;
                a = i ;
                b = k ;
                }
        }
    std::cout << "segments a = " << a << std::endl ;
    std::cout << "segments b = " << b << std::endl ;
    std::cout << "these two segments give the largest possible cubature = " << sqr ;
    return 0;
}


