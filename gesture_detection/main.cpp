#include<iostream>
#include "classification.h" 
#include "inputoutput.h"
#include "datacapture.h"
using namespace std;
int main(){
  Classification classify;
  InputOutput inout;
  DataCapture datacap;

  inout.ImageInput();
  datacap.ImageProcessor();
  classify.DetectMotion();
  classify.Classifier();
  classify.Response();
  inout.Output();
  

  return 0;
}
