#include<stdio.h>
#include<stdlib.h>

int myStrStr (char * haystack, char * needle, char * buffer){
  int num_match = 0;
  while (*haystack != '\0') {
    while (*needle == *haystack && *needle != '\0') {
      *(buffer+num_match) = *haystack;
      haystack++;
      needle++;
      num_match++;
    }
    *(buffer+num_match) = '\0';
    
    if (*needle == '\0'){
      return 1;
    }
    needle = needle - num_match;
    haystack++;
    num_match = 0;
  }
  return 0;
};

unsigned int countOnes(int num){
  int ones = 0;
  while (num != 0){
    ones = ones + 1;
    num = num & (num-1);
  }
  return ones;
};

void binaryArray(int n, int array[], int size){
  for (int i = 0; i < size; i++) {
    array[size-i-1] = (n >> i) & 1;
  }
};

void binaryPrinter(int array[], int size){
  for (int i = 0; i < size; i++) {
    printf("%d",array[i]);
  }
};
