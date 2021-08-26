#!/usr/bin/perl

# Fichero para automatizacion de ejecucion por lotes, de un ejecutable,
# dados parametros de entrada.

$repetition = 30;
$path = "/home/sebastian/workspace-cs/computacion-paralela-y-dis/matrices2.0/";
@ejecutables = ("matrixAPP.out");
@matrixSize = ("50", "100", "200", "300", "400", "500", "600", "700", "800");

foreach $exe (@ejecutables){
    foreach $size (@matrixSize){
        $fichero = "$path"."outputs/$exe-size$size";
        for($i = 0; $i < $repetition; $i++){
            #print("$path$exe $size >> $fichero\n");
            system("$path$exe $size >> $fichero\n");
        }
    }
}

exit(1);
