#include "darts.h"

namespace darts {

int score (double x, double y){
    double dist = sqrt(x*x + y*y);
    if (dist <= 1.0) return 10;
    else if (dist <= 5.0) return 5;
    else if (dist <= 10.0) return 1;
    else return 0;
}

}  // namespace darts
