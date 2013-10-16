#ifndef IGL_POLAR_SVD
#define IGL_POLAR_SVD
#include "igl_inline.h"
#include <Eigen/Core>

namespace igl
{
  // Computes the polar decomposition (R,T) of a matrix A using SVD singular value decomposition
  // Inputs:
  //   A  3 by 3 matrix to be decomposed
  // Outputs:
  //   R  3 by 3 rotation matrix part of decomposition
  //   T  3 by 3 stretch matrix part of decomposition
  //   U  3 by 3 left-singular vectors
  //   S  3 by 1 singular values
  //   V  3 by 3 right-singular vectors
  //
  // Example:
  //   polar_svd(A,R,T,U,S,V);
  //   // Check if R is a reflection
  //   if(R.determinant() < ))
  //   {
  //     // flip last column of U and rebuild to get rotation
  //     U.col(U.cols()-1) *= -1.0;
  //     R = U * V.transpose();
  //   }
  //
  template <
    typename DerivedA,
    typename DerivedR,
    typename DerivedT,
    typename DerivedU,
    typename DerivedS,
    typename DerivedV>
  IGL_INLINE void polar_svd(
    const Eigen::PlainObjectBase<DerivedA> & A,
    Eigen::PlainObjectBase<DerivedR> & R,
    Eigen::PlainObjectBase<DerivedT> & T,
    Eigen::PlainObjectBase<DerivedU> & U,
    Eigen::PlainObjectBase<DerivedS> & S,
    Eigen::PlainObjectBase<DerivedV> & V);
  template <
    typename DerivedA,
    typename DerivedR,
    typename DerivedT>
  IGL_INLINE void polar_svd(
    const Eigen::PlainObjectBase<DerivedA> & A,
    Eigen::PlainObjectBase<DerivedR> & R,
    Eigen::PlainObjectBase<DerivedT> & T);
}
#ifdef IGL_HEADER_ONLY
#  include "polar_svd.cpp"
#endif
#endif