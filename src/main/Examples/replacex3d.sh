#!/bin/sh
find . -name '*json'| xargs perl -p -i -e 's/(@url.*\.)x3d/$1json/'
find . -name '*json'| xargs perl -p -i -e 's/(@url.*\.)x3d/$1json/'
