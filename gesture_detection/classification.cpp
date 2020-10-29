#include<iostream>
#include "classification.h"
using namespace std;

void Classification::DetectMotion(){
  cout << "Calling Classification::DetectMotion - identify change in input" << endl;
}

void Classification::Classifier(){
  cout << "Calling Classification::Classifier - classifies the gesture (1, 2, 3)" << endl;
}

void Classification::Response(){
  cout << "Calling Classification::Response - countdown until number of photos are taken based on gesture" << endl;
}
