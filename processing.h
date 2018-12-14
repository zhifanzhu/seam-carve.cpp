#pragma once 

#include "image.h"
#include "inc/Eigen/Dense"

typedef Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> Mtype;
typedef double Dtype;

Image horizontal_carving(Image const &, double const scale);
Image vertical_carving(Image const &, double const scale);

Mtype calc_energy(Image const &);
void minimal_seam(Image const & Mtype, ::Mtype &, std::vector<int> );
Image process_seam(Image const &, std::vector<std::vector<int> > );

Mtype convolve(Mtype const &, Mtype const &);
Image convolve(Image const &, Image const &);
