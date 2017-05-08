#include <stdio.h>
#include <stdlib.h>
 
int main ( void )
{
    string iniciodocumento = "\documentclass{beamer}"
                              "\usetheme{default}"
                              "\usepackage{tikz}"
                              "\usepackage{xcolor}"
                              "\beamertemplatenavigationsymbolsempty"

                              "\definecolor{sol} {rgb}{0.992156863,0.792156863,0.003921569}"
                              "\definecolor{mercurio} {rgb}{0.850980392,0.733333333,0.478431373}"
                              "\definecolor{venus} {rgb}{0.992156863,0.792156863,0.003921569}"
                              "\definecolor{terra} {rgb}{0.003921569,0.2,0.592156863}"
                              "\definecolor{marte} {rgb}{1,0.207843137,0.003921569}"
                              "\definecolor{jupiter} {rgb}{0.505882353,0.4,0.278431373}"
                              "\definecolor{saturno} {rgb}{0.850980392,0.733333333,0.478431373}"
                              "\definecolor{urano} {rgb}{0.4,0.4,0.4}"
                              "\definecolor{netuno} {rgb}{0.003921569,0.411764706,0.788235294}";

     string fimdocumento = "\end{document}";
                    
                    
                    
                        FILE * Output;
                        Output = fopen("tikz.txt", "a");
                        fprintf(Output, "data");
                        fclose(Output);
                        return 0;
}
