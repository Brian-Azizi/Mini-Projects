#ifndef GUARD_gmm_h
#define GUARD_gmm_h

#include <armadillo>

int nrand(int);

arma::Mat<double> gmmInitialMeans(const arma::Mat<double>&, const arma::uword&);
arma::Mat<double> gmmInitialVars (const arma::uword&, const arma::uword&);
arma::Mat<double> gmmInitialMix (const arma::uword&);
double gmmLogLikelihood ( const arma::Mat<double>&, const arma::uword&, const arma::Mat<double>&,\
			  const arma::Mat<double>&, const arma::Mat<double>&);
arma::Mat<double> gmmEstep (const arma::Mat<double>&, const arma::uword&, const arma::Mat<double>&,\
			    const arma::Mat<double>&, const arma::Mat<double>&);
void gmmMstep (const arma::Mat<double>&, const arma::uword&, const arma::Mat<double>&,\
	       arma::Mat<double>&, arma::Mat<double>&, arma::Mat<double>&);
arma::Mat<double> gmmRunEM (const arma::Mat<double>&, const arma::uword&, const arma::uword&,\
			    arma::Mat<double>&, arma::Mat<double>&, arma::Mat<double>&, arma::Mat<double>&);
arma::Mat<double> gmmBestLocalMax (const arma::Mat<double>&, const arma::uword&, const arma::uword&, const arma::uword&,
				   arma::Mat<double>&, arma::Mat<double>&, arma::Mat<double>&, arma::Mat<double>&);

double gmmDensity (const arma::Mat<double>&, const arma::uword&, const arma::Mat<double>&,\
		   const arma::Mat<double>&, const arma::Mat<double>&);
#endif
