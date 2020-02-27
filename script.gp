#Este archivo se compila con: gnuplot -persist script.gp
set multiplot layout 1, 2
set title "Netflix"
plot "Netflix.dat"
set title "Hulu"
plot "Hulu.dat"
unset multiplot