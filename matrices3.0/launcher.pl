#!/usr/bin/perl

# Fichero para automatizacion de ejecucion por lotes, de un ejecutable,
# dados parametros de entrada.

$repetition = 30;
$path = "/home/sebastian/workspace-cs/computacion-paralela-y-dis/matrices3.0/";
@ejecutables = ("matrixAPP.out");
@matrixSize = ("100", "200", "400", "800", "1000", "1200", "2000", "4000");

foreach $exe (@ejecutables){
    foreach $size (@matrixSize){
        $fichero = "$path"."outputs/$exe-size$size.txt";
        for($i = 0; $i < $repetition; $i++){
            print("$fichero\n");
            system("$path$exe $size >> $fichero\n");
        }
    }
}

exit(1);
