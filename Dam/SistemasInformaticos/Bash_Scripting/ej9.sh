#!/bin/bash

for SUBDIR in test9/*; do
  if [[ -d "$SUBDIR" ]]; then
    for archivo in "$SUBDIR"/*.txt; do
      if [[ -f "$archivo" ]]; then
        head -n 1 "$archivo"
      fi
    done
  fi
done
