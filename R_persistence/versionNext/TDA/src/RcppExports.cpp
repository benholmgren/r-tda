// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// GridDiag
Rcpp::List GridDiag(const Rcpp::NumericVector& FUNvalues, const Rcpp::IntegerVector& gridDim, const int maxdimension, const std::string& decomposition, const std::string& library, const bool location, const bool printProgress);
RcppExport SEXP TDA_GridDiag(SEXP FUNvaluesSEXP, SEXP gridDimSEXP, SEXP maxdimensionSEXP, SEXP decompositionSEXP, SEXP librarySEXP, SEXP locationSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type FUNvalues(FUNvaluesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type gridDim(gridDimSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type decomposition(decompositionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type library(librarySEXP);
    Rcpp::traits::input_parameter< const bool >::type location(locationSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    __result = Rcpp::wrap(GridDiag(FUNvalues, gridDim, maxdimension, decomposition, library, location, printProgress));
    return __result;
END_RCPP
}
// Bottleneck
double Bottleneck(const Rcpp::NumericMatrix& Diag1, const Rcpp::NumericMatrix& Diag2);
RcppExport SEXP TDA_Bottleneck(SEXP Diag1SEXP, SEXP Diag2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag1(Diag1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag2(Diag2SEXP);
    __result = Rcpp::wrap(Bottleneck(Diag1, Diag2));
    return __result;
END_RCPP
}
// Wasserstein
double Wasserstein(const Rcpp::NumericMatrix& Diag1, const Rcpp::NumericMatrix& Diag2, const int p);
RcppExport SEXP TDA_Wasserstein(SEXP Diag1SEXP, SEXP Diag2SEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag1(Diag1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Diag2(Diag2SEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    __result = Rcpp::wrap(Wasserstein(Diag1, Diag2, p));
    return __result;
END_RCPP
}
// Kde
Rcpp::NumericVector Kde(const Rcpp::NumericMatrix& X, const Rcpp::NumericMatrix& Grid, const double h, const Rcpp::NumericVector& weight, const bool printProgress);
RcppExport SEXP TDA_Kde(SEXP XSEXP, SEXP GridSEXP, SEXP hSEXP, SEXP weightSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Grid(GridSEXP);
    Rcpp::traits::input_parameter< const double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    __result = Rcpp::wrap(Kde(X, Grid, h, weight, printProgress));
    return __result;
END_RCPP
}
// KdeDist
Rcpp::NumericVector KdeDist(const Rcpp::NumericMatrix& X, const Rcpp::NumericMatrix& Grid, const double h, const Rcpp::NumericVector& weight, const bool printProgress);
RcppExport SEXP TDA_KdeDist(SEXP XSEXP, SEXP GridSEXP, SEXP hSEXP, SEXP weightSEXP, SEXP printProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Grid(GridSEXP);
    Rcpp::traits::input_parameter< const double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const bool >::type printProgress(printProgressSEXP);
    __result = Rcpp::wrap(KdeDist(X, Grid, h, weight, printProgress));
    return __result;
END_RCPP
}
// Dtm
Rcpp::NumericVector Dtm(const Rcpp::NumericMatrix& knnIndex, const Rcpp::NumericMatrix& knnDistance, const Rcpp::NumericVector& weight, const double weightBound);
RcppExport SEXP TDA_Dtm(SEXP knnIndexSEXP, SEXP knnDistanceSEXP, SEXP weightSEXP, SEXP weightBoundSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type knnIndex(knnIndexSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type knnDistance(knnDistanceSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const double >::type weightBound(weightBoundSEXP);
    __result = Rcpp::wrap(Dtm(knnIndex, knnDistance, weight, weightBound));
    return __result;
END_RCPP
}
