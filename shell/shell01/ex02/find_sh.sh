#!/bin/sh
find . -type f -name "*.sh" | sed 's/\.sh//g' | cut -c3-100 | sed 's/^.*\//\//' | tr -d "/"
