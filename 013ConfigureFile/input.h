#cmakedefine VAR 3.14
#cmakedefine VAR1 "Good"
#cmakedefine VAR3
#cmakedefine VAR4
#cmakedefine NAME "@NAME@"
#cmakedefine NEW_NAME "${NEW_NAME}"
#cmakedefine QUOTE "@QUOTE@"


#include <iostream>

void ${my_print}()
{
    std::cout<<"print something"<<std::endl;
}
