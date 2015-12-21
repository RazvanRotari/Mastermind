#!/bin/bash

premake4 gmake
rm test
make test
./test
