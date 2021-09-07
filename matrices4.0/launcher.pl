#!/usr/bin/perl

# Fichero para automatizacion de ejecucion por lotes, de un ejecutable,
# dados parametros de entrada.

$repetition = 30;
$path = "/home/sebastian/workspace-cs/computacion-paralela-y-dis/matrices3.0/";
@ejecutables = ("matrixAPP.out");
@matrixSize = ("50", "100", "200", "300", "400", "500", "600", "700", "800", "1000", "1200", "2000", "4000");
@threads = ("1", "2", "4", "8")

foreach $exe (@ejecutables){
    foreach $size (@matrixSize){
        foreach $thread (@threads){
            $fichero = "$path"."outputs/$exe-size$size-T$thread.txt";
            for($i = 0; $i < $repetition; $i++){
                print("$fichero");
                system("$path$exe $size >> $fichero\n");
            }

        }
    }
}

exit(1);
