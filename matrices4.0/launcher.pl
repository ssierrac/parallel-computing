#!/usr/bin/perl

# Fichero para automatizacion de ejecucion por lotes, de un ejecutable,
# dados parametros de entrada.

$repetition = 30;
$path = "/home/sebastian/workspace-cs/computacion-paralela-y-dis/matrices4.0/";
@ejecutables = ("matrixAPP.out");
@matrixSize = ("100", "200", "400", "800", "1000", "1200", "2000", "4000");
@threads = ("1", "2", "4", "8");

foreach $exe (@ejecutables){
    foreach $size (@matrixSize){
        foreach $thread (@threads){
            $fichero = "$path"."outputs/$exe-size$size-T$thread.txt";
            for($i = 0; $i < $repetition; $i++){
                system("$path$exe $size $thread >> $fichero\n");
            }
            print("$fichero\n");
        }
    }
}

exit(1);
