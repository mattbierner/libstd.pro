#ifndef prosopon_prosopon_libcore_h
#define prosopon_prosopon_libcore_h

#include "prosopon_config.h"
#include "prosopon.h"


#pragma mark String

/**
 * Creates a new string in the current environment
 */
PRO_LIBCORE pro_lookup* pro_string_create(pro_state*, const char* data);


#pragma mark Number

/**
 * Creates a new number in the current environment
 */
PRO_LIBCORE pro_lookup* pro_number_create(pro_state*, double data);


#endif