// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// weightedDistanceCPP
arma::vec weightedDistanceCPP(arma::mat& x, arma::vec& weights);
RcppExport SEXP cbr_weightedDistanceCPP(SEXP xSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    __result = Rcpp::wrap(weightedDistanceCPP(x, weights));
    return __result;
END_RCPP
}
// weightedDistanceCPPNM
arma::vec weightedDistanceCPPNM(arma::mat& x, arma::mat& y, arma::vec& weights);
RcppExport SEXP cbr_weightedDistanceCPPNM(SEXP xSEXP, SEXP ySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    __result = Rcpp::wrap(weightedDistanceCPPNM(x, y, weights));
    return __result;
END_RCPP
}
// proximityMatrixRangerCPP
arma::vec proximityMatrixRangerCPP(arma::mat& x, std::uint32_t nTrees);
RcppExport SEXP cbr_proximityMatrixRangerCPP(SEXP xSEXP, SEXP nTreesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::uint32_t >::type nTrees(nTreesSEXP);
    __result = Rcpp::wrap(proximityMatrixRangerCPP(x, nTrees));
    return __result;
END_RCPP
}
// proximityMatrixRangerCPPNM
arma::vec proximityMatrixRangerCPPNM(arma::mat& x, arma::mat& y, std::uint32_t nTrees);
RcppExport SEXP cbr_proximityMatrixRangerCPPNM(SEXP xSEXP, SEXP ySEXP, SEXP nTreesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::uint32_t >::type nTrees(nTreesSEXP);
    __result = Rcpp::wrap(proximityMatrixRangerCPPNM(x, y, nTrees));
    return __result;
END_RCPP
}
// weighted_knn
Rcpp::List weighted_knn(arma::mat x, arma::mat query, arma::vec weights, const int sortDirection, const int k);
RcppExport SEXP cbr_weighted_knn(SEXP xSEXP, SEXP querySEXP, SEXP weightsSEXP, SEXP sortDirectionSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type query(querySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const int >::type sortDirection(sortDirectionSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    __result = Rcpp::wrap(weighted_knn(x, query, weights, sortDirection, k));
    return __result;
END_RCPP
}
// getOrderMatrix
arma::umat getOrderMatrix(arma::mat& x, int sortDirection, int k);
RcppExport SEXP cbr_getOrderMatrix(SEXP xSEXP, SEXP sortDirectionSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type sortDirection(sortDirectionSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    __result = Rcpp::wrap(getOrderMatrix(x, sortDirection, k));
    return __result;
END_RCPP
}
// getOrderVector
arma::uvec getOrderVector(arma::vec x, int sort_direction, int k);
RcppExport SEXP cbr_getOrderVector(SEXP xSEXP, SEXP sort_directionSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type sort_direction(sort_directionSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    __result = Rcpp::wrap(getOrderVector(x, sort_direction, k));
    return __result;
END_RCPP
}
// terminalNodeDistanceCPP
Rcpp::DataFrame terminalNodeDistanceCPP(arma::umat& nodeIDs);
RcppExport SEXP cbr_terminalNodeDistanceCPP(SEXP nodeIDsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::umat& >::type nodeIDs(nodeIDsSEXP);
    __result = Rcpp::wrap(terminalNodeDistanceCPP(nodeIDs));
    return __result;
END_RCPP
}
// terminalNodeIDRanger
arma::vec terminalNodeIDRanger(arma::mat& x, arma::vec& childNodes1, arma::vec& childNodes2, arma::vec& splitValues, arma::vec& splitVarIds);
RcppExport SEXP cbr_terminalNodeIDRanger(SEXP xSEXP, SEXP childNodes1SEXP, SEXP childNodes2SEXP, SEXP splitValuesSEXP, SEXP splitVarIdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type childNodes1(childNodes1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type childNodes2(childNodes2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type splitValues(splitValuesSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type splitVarIds(splitVarIdsSEXP);
    __result = Rcpp::wrap(terminalNodeIDRanger(x, childNodes1, childNodes2, splitValues, splitVarIds));
    return __result;
END_RCPP
}
