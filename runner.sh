g++ $1 -o "$1.out"
echo "$2"| "./$1.out" $2
echo
