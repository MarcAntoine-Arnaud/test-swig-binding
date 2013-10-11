%module helloBinding

%include "std_string.i"

%{
#include "helloWorld.hpp"
%}

%include "helloWorld.hpp"
