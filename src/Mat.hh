#ifndef MAT_HH
#define MAT_HH
#include <Eigen/Core>

namespace eigengrad
{
class Mat {
public:
    Mat();
    ~Mat();
    
private:
    Eigen::Matrix2d mat_;

}; 

} // namespace eigengrad

#endif // MAT_HH