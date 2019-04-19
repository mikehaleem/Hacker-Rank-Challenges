/*
 ============================================================================
 Name        : stats.c
 Author      : Michael GEORGEY
 Date	     : 20th April 2019
 Copyright   : Welcome Anytime ;)
 Description : Introduction to Embedded Systems Software and Development Environments week1
  ============================================================================
 */

#ifndef STATS_H_
#define STATS_H_

#define SIZE (40)
/**
 * @brief <A function that prints the statistics of an array including minimum,
 * 			 maximum, mean, and median.
 * @param <char_array> pointer to the array of data set.
 * @return void
 */
void print_statistics(unsigned char *char_array);

/**
 * @brief <Given an array of data and a length, prints the array to the screen
 * @param "char_array" pointer to the array of data set.
 * @return void
 */
void print_array(unsigned char *char_array);

/**
 * @brief <Given an array of data and a length, returns the median value
 * @param "char_array" pointer the array of data set.
 * @return median_value char
 */
char find_median(unsigned char *char_array);

/**
 * @brief <Given an array of data and a length, returns the mean
 * @param "char_array" pointer the array of data set.
 * @return mean_value char
 */
char find_mean(unsigned char *char_array);

/**
 * @brief <Given an array of data and a length, returns the maximum
 * @param "char_array" the array of data set.
 * @return maximum_value char
 */
char find_maximum(unsigned char *char_array);

/**
 * @brief <Given an array of data and a length, returns the minimum
 * @param "char_array" the array of data set.
 * @return minimum_value char
 */
char find_minimum(unsigned char *char_array);

/**
 * @brief <Given an array of data and a length, sorts the array from largest to smallest
 * @param "char_array" the array of data set.
 * @return void
 */
void sort_array(unsigned char *char_array);
#endif /* STATS_H_ */
