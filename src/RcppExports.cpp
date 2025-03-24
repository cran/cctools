// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// eval_mvkde
arma::vec eval_mvkde(const arma::mat& xev, const arma::mat& x, const arma::vec& b);
RcppExport SEXP _cctools_eval_mvkde(SEXP xevSEXP, SEXP xSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type xev(xevSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(eval_mvkde(xev, x, b));
    return rcpp_result_gen;
END_RCPP
}
// lcv_mvkde_disc
arma::vec lcv_mvkde_disc(const arma::mat& x, const arma::mat& x_cc, const arma::vec& b);
RcppExport SEXP _cctools_lcv_mvkde_disc(SEXP xSEXP, SEXP x_ccSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x_cc(x_ccSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(lcv_mvkde_disc(x, x_cc, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cctools_eval_mvkde", (DL_FUNC) &_cctools_eval_mvkde, 3},
    {"_cctools_lcv_mvkde_disc", (DL_FUNC) &_cctools_lcv_mvkde_disc, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_cctools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
