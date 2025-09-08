#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-bool-literals"
#pragma ide diagnostic ignored "ConstantConditionsOC"
#pragma ide diagnostic ignored "UnreachableCode"
#pragma ide diagnostic ignored "Simplify"

#include <bits/stdc++.h>
using namespace std;

// @formatter:off
int main() {

  // good indent
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      for (int k = 0; k < 10; k++) {
        for (int l = 0; l < 10; l++) {
          cout << i << ' ' << j << ' ' << k << ' ' << l << '\n';
        }
      }
    }
  }

//  // bad indent
//  for (int i = 0; i < 100; i++) {
//  for (int j = 0; j < 100; j++) {
//  for (int k = 0; k < 100; k++) {
//  for (int l = 0; l < 100; l++) {
//  cout << i << ' ' << j << ' ' << k << ' ' << l << '\n';
//  }
//  }
//  }
//  }
//
//  // bad indent
//  for (int i = 0; i < 100; i++) {
//        for (int j = 0; j < 100; j++) {
//      for (int k = 0; k < 100; k++) {
//          for (int l = 0; l < 100; l++) {
//          cout << i << ' ' << j << ' ' << k << ' ' << l << '\n';
//            }
//        }
//      }
//      }

  // very bad indent

        if(1) {  if(1) {  if(1) {
    if(1) {                   if(1) {
    if(1) {                   if(1) {
    if(1) {                   if(1) {
    if(1) {                   if(1) {
    if(1) {                   if(1) {
    if(1) {                   if(1) {
    if(1) {                   if(1) {
    if(1) {                   if(1) {
    if(1) {                   if(1) {
    if(1) {                   if(1) {
        }}}}}}}}}}}}}}}}}}}}}}}




  int i = 96;

  if (i % 4 == 0 || i % 3 == 0) {
    if (!(i > 100)) {
      cout << 'a' << endl;
    } else {
      cout << 'b' << endl;
    }
  } else {
    if (i == 96) {
      cout << 'c' << endl;
    } else {
      cout << 'd' << endl;
    }
  }


  return 0;
}

// @formatter:on
#pragma clang diagnostic pop