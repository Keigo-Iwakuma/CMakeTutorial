#include "MathFunctions.hpp"

#include <cmath>

#ifdef USE_MYMATH
#    include "mysqrt.hpp"
#endif

namespace mathfunctions {
double sqrt(double x)
{
#ifdef USE_MYMATH
    return detail::mysqrt(x);
#else
    return std::sqrt(x);
#endif
}
}