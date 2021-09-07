#!/usr/bin/perl

# Fichero para automatizacion de ejecucion por lotes, de un ejecutable,
# dados parametros de entrada.

$repetition = 30;
$path = "/home/sebastian/workspace-cs/computacion-paralela-y-dis/matrices2.0/";
@ejecutables = ("matrixAPP.out");
@matrixSize = ("100", "200", "400", "800");

foreach $exe (@ejecutables){
    foreach $size (@matrixSize){
        $fichero = "$path"."outputs/$exe-size$size.txt";
        for($i = 0; $i < $repetition; $i++){
            system("$path$exe $size >> $fichero\n");
        }
        print("$fichero\n");
    }
}

exit(1);
