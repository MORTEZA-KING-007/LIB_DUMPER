echo -e "\e[1;32m[+] Setting up the tool wait for a second ....."


# -- do not edit this file

clang++ dumper dumper.cpp
mv ./dumper $PREFIX/bin/

echo -e "\e[1;32m[+] Run tool just by typing dumper ...✓"
echo -e "\e[1;32m[+] All done enjoy ....."
