#!/usr/bin/env bash
for numero in {1..10}; do
if (( numero % 2 == 0 )); then
  echo "El número $i es par"
else
  echo "El número $i es impar"
fi
done
