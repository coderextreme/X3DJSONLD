find . -name '*.java'| grep -v " "| sed 's/\.java$/.class/'| xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }'| sed "s/^'\.\///" | sed "s/\.class':/.java/"
