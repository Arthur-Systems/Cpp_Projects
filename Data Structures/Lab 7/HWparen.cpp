#include "HWparen.h"

parenthesis::parenthesis()
{
    left = NULL;
    right = NULL;
}
parenthesis::~parenthesis()
{
    delete left;
    delete right;
}
