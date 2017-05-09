#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main ( void )
{
      double 
      mercurioX = 0, venusX = 0, terraX = 0, marteX = 0, jupiterX = 0, saturnoX = 0, uranoX = 0, netunoX = 0, mercurioY, venusY, terraY, marteY, jupiterY, saturnoY, uranoY, netunoY;

      string iniciodocumento ="\documentclass{beamer}"
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

      string fimdocumento =   "\end{document}";

      FILE * Output;
      Output = fopen("tikz.txt", "a");

      for(double i = 0; i < 360 ;i++){
            sin()


      }
     
                    
                        
                        fprintf(Output, "data");
                        fclose(Output);
                        return 0;
}


/*thisform.usAngulo = thisform.usAngulo + .01
THISFORM.shpTERRA.top =  (180*SIN(DTOR(thisform.usANGULO)))
THISFORM.shpTERRA.left = (180*COS(DTOR(thisform.usANGULO)))
      
Thisform.usANGULOLUA = thisform.usANGULOLUA + .1
THISFORM.shpLUA.top =  THISFORM.shpTERRA.top+12+(30*SIN(DTOR(thisform.usANGULOLUA)))
THISFORM.shpLUA.left = THISFORM.shpTERRA.left+4+(30*COS(DTOR(thisform.usANGULOLUA)))

*/
