#!/bin/bash

echo "How many number of directories do you want to create?"
read n
for ((calc=0; calc<n;calc ++))do
mkdir calculation_$calc
done