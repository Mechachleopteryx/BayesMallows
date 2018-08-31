// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_summation_distances
arma::vec get_summation_distances(int n, arma::vec cardinalities, std::string metric);
RcppExport SEXP _BayesMallows_get_summation_distances(SEXP nSEXP, SEXP cardinalitiesSEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type cardinalities(cardinalitiesSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    rcpp_result_gen = Rcpp::wrap(get_summation_distances(n, cardinalities, metric));
    return rcpp_result_gen;
END_RCPP
}
// get_rank_distance
double get_rank_distance(arma::vec r1, arma::vec r2, std::string metric);
RcppExport SEXP _BayesMallows_get_rank_distance(SEXP r1SEXP, SEXP r2SEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    rcpp_result_gen = Rcpp::wrap(get_rank_distance(r1, r2, metric));
    return rcpp_result_gen;
END_RCPP
}
// compute_importance_sampling_estimate
arma::vec compute_importance_sampling_estimate(arma::vec alpha_vector, int n_items, std::string metric, int nmc);
RcppExport SEXP _BayesMallows_compute_importance_sampling_estimate(SEXP alpha_vectorSEXP, SEXP n_itemsSEXP, SEXP metricSEXP, SEXP nmcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vector(alpha_vectorSEXP);
    Rcpp::traits::input_parameter< int >::type n_items(n_itemsSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< int >::type nmc(nmcSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_importance_sampling_estimate(alpha_vector, n_items, metric, nmc));
    return rcpp_result_gen;
END_RCPP
}
// factorial
int factorial(int n);
RcppExport SEXP _BayesMallows_factorial(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(factorial(n));
    return rcpp_result_gen;
END_RCPP
}
// binomial_coefficient
int binomial_coefficient(int n, int k);
RcppExport SEXP _BayesMallows_binomial_coefficient(SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(binomial_coefficient(n, k));
    return rcpp_result_gen;
END_RCPP
}
// std_setdiff
arma::uvec std_setdiff(arma::uvec& x, arma::uvec& y);
RcppExport SEXP _BayesMallows_std_setdiff(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(std_setdiff(x, y));
    return rcpp_result_gen;
END_RCPP
}
// sample_int
int sample_int(const arma::rowvec& probs);
RcppExport SEXP _BayesMallows_sample_int(SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_int(probs));
    return rcpp_result_gen;
END_RCPP
}
// get_partition_function
double get_partition_function(int n_items, double alpha, Rcpp::Nullable<arma::vec> cardinalities, Rcpp::Nullable<arma::vec> logz_estimate, std::string metric);
RcppExport SEXP _BayesMallows_get_partition_function(SEXP n_itemsSEXP, SEXP alphaSEXP, SEXP cardinalitiesSEXP, SEXP logz_estimateSEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_items(n_itemsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type cardinalities(cardinalitiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type logz_estimate(logz_estimateSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    rcpp_result_gen = Rcpp::wrap(get_partition_function(n_items, alpha, cardinalities, logz_estimate, metric));
    return rcpp_result_gen;
END_RCPP
}
// asymptotic_partition_function
arma::vec asymptotic_partition_function(arma::vec alpha_vector, int n_items, std::string metric, int K, int n_iterations);
RcppExport SEXP _BayesMallows_asymptotic_partition_function(SEXP alpha_vectorSEXP, SEXP n_itemsSEXP, SEXP metricSEXP, SEXP KSEXP, SEXP n_iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vector(alpha_vectorSEXP);
    Rcpp::traits::input_parameter< int >::type n_items(n_itemsSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type n_iterations(n_iterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(asymptotic_partition_function(alpha_vector, n_items, metric, K, n_iterations));
    return rcpp_result_gen;
END_RCPP
}
// run_mcmc
Rcpp::List run_mcmc(arma::mat rankings, int nmc, Rcpp::List constraints, Rcpp::Nullable<arma::vec> cardinalities, Rcpp::Nullable<arma::vec> logz_estimate, Rcpp::Nullable<arma::vec> rho_init, std::string metric, int n_clusters, bool include_wcd, int leap_size, double alpha_prop_sd, double alpha_init, int alpha_jump, double lambda, int psi, int thinning, bool save_augmented_data, bool verbose);
RcppExport SEXP _BayesMallows_run_mcmc(SEXP rankingsSEXP, SEXP nmcSEXP, SEXP constraintsSEXP, SEXP cardinalitiesSEXP, SEXP logz_estimateSEXP, SEXP rho_initSEXP, SEXP metricSEXP, SEXP n_clustersSEXP, SEXP include_wcdSEXP, SEXP leap_sizeSEXP, SEXP alpha_prop_sdSEXP, SEXP alpha_initSEXP, SEXP alpha_jumpSEXP, SEXP lambdaSEXP, SEXP psiSEXP, SEXP thinningSEXP, SEXP save_augmented_dataSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type rankings(rankingsSEXP);
    Rcpp::traits::input_parameter< int >::type nmc(nmcSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type constraints(constraintsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type cardinalities(cardinalitiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type logz_estimate(logz_estimateSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type rho_init(rho_initSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< int >::type n_clusters(n_clustersSEXP);
    Rcpp::traits::input_parameter< bool >::type include_wcd(include_wcdSEXP);
    Rcpp::traits::input_parameter< int >::type leap_size(leap_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_prop_sd(alpha_prop_sdSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_init(alpha_initSEXP);
    Rcpp::traits::input_parameter< int >::type alpha_jump(alpha_jumpSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< int >::type thinning(thinningSEXP);
    Rcpp::traits::input_parameter< bool >::type save_augmented_data(save_augmented_dataSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(run_mcmc(rankings, nmc, constraints, cardinalities, logz_estimate, rho_init, metric, n_clusters, include_wcd, leap_size, alpha_prop_sd, alpha_init, alpha_jump, lambda, psi, thinning, save_augmented_data, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BayesMallows_get_summation_distances", (DL_FUNC) &_BayesMallows_get_summation_distances, 3},
    {"_BayesMallows_get_rank_distance", (DL_FUNC) &_BayesMallows_get_rank_distance, 3},
    {"_BayesMallows_compute_importance_sampling_estimate", (DL_FUNC) &_BayesMallows_compute_importance_sampling_estimate, 4},
    {"_BayesMallows_factorial", (DL_FUNC) &_BayesMallows_factorial, 1},
    {"_BayesMallows_binomial_coefficient", (DL_FUNC) &_BayesMallows_binomial_coefficient, 2},
    {"_BayesMallows_std_setdiff", (DL_FUNC) &_BayesMallows_std_setdiff, 2},
    {"_BayesMallows_sample_int", (DL_FUNC) &_BayesMallows_sample_int, 1},
    {"_BayesMallows_get_partition_function", (DL_FUNC) &_BayesMallows_get_partition_function, 5},
    {"_BayesMallows_asymptotic_partition_function", (DL_FUNC) &_BayesMallows_asymptotic_partition_function, 5},
    {"_BayesMallows_run_mcmc", (DL_FUNC) &_BayesMallows_run_mcmc, 18},
    {NULL, NULL, 0}
};

RcppExport void R_init_BayesMallows(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
