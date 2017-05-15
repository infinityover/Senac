#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main ( void )
{
      double mercurioX = 0, venusX = 0, terraX = 0, marteX = 0, jupiterX = 0, saturnoX = 0, uranoX = 0, netunoX = 0, mercurioY, venusY, terraY, marteY, jupiterY, saturnoY, uranoY, netunoY;

      char * iniciodocumento ="\\documentclass{beamer}\n"
                              "\\usetheme{default}\n"
                              "\\usepackage{tikz}\n"
                              "\\usepackage{xcolor}\n"
                              "\\beamertemplatenavigationsymbolsempty\n"

                              "\\definecolor{sol} {rgb}{0.992156863,0.792156863,0.003921569}\n"
                              "\\definecolor{mercurio} {rgb}{0.850980392,0.733333333,0.478431373}\n"
                              "\\definecolor{venus} {rgb}{0.992156863,0.792156863,0.003921569}\n"
                              "\\definecolor{terra} {rgb}{0.003921569,0.2,0.592156863}\n"
                              "\\definecolor{marte} {rgb}{1,0.207843137,0.003921569}\n"
                              "\\definecolor{jupiter} {rgb}{0.505882353,0.4,0.278431373}\n"
                              "\\definecolor{saturno} {rgb}{0.850980392,0.733333333,0.478431373}\n"
                              "\\definecolor{urano} {rgb}{0.4,0.4,0.4}\n"
                              "\\definecolor{netuno} {rgb}{0.003921569,0.411764706,0.788235294}\n"
                              "\\begin{document}\n";
      char * fimdocumento =   "\\end{document}";

      FILE * Output;
      Output = fopen("tikz.tex", "a");
      fprintf(Output, "%s",iniciodocumento);
      for(double i = 0; i < 365 ;i++){
            fprintf(Output, "\\begin{frame}\n");
            fprintf(Output, "\\transduration{0.0416666666666667}\n");
            fprintf(Output, "\\begin{tikzpicture}[scale=0.5]\n");
            fprintf(Output, "\\fill[sol] (6,6) circle(10.00000000mm);\n");
            //fprintf(Output, "\\fill[mercurio] (%10.10f,%10.10f) circle(1.035053161mm);\n",(sin(i * M_PI / 180.0)*6),(cos(i * M_PI / 180.0)*7));
            //fprintf(Output, "\\fill[venus] (%10.10f,%10.10f) circle(0.586951149mm);\n"),(sin(i * M_PI / 180.0)*6),(cos(i * M_PI / 180.0)*7) ;
            fprintf(Output, "\\fill[terra] (%10.10f,%10.10f) circle(0.591639368mm);\n",6*sin(((i/365)*360) * (M_PI / 180.0))+2,6*cos(((i/365)*360) * (M_PI / 180.0))+2);
            //fprintf(Output, "\\fill[marte] (%10.10f,%10.10f)      circle(0.548795977mm);\n",(sin(i * M_PI / 180.0)*6),(cos(i * M_PI / 180.0)*7));
            //fprintf(Output, "\\fill[jupiter] (%10.10f,%10.10f) circle(3.027183908mm);\n",(sin(i * M_PI / 180.0)*6),(cos(i * M_PI / 180.0)*7));
            //fprintf(Output, "\\draw[saturno,thick,densely dotted] (%10.10f,%10.10f) circle(3.797758621mm);\n",(sin(i * M_PI / 180.0)*6),(cos(i * M_PI / 180.0)*7));
            //fprintf(Output, "\\fill[saturno] (%10.10f,%10.10f) circle(2.86591954mm);\n",(sin(i * M_PI / 180.0)*6),(cos(i * M_PI / 180.0)*6));
            //fprintf(Output, "\\fill[urano] (%10.10f,%10.10f) circle(0.867227011mm);\n",(sin(i * M_PI / 180.0)*6),(cos(i * M_PI / 180.0)*6));
            //fprintf(Output, "\\fill[netuno] (%10.10f,%10.10f) circle(0.855804598mm);\n",(sin(i * M_PI / 180.0)*6),(cos(i * M_PI / 180.0)*6));
            fprintf(Output, "\\end{tikzpicture}\n");
            fprintf(Output, "\\end{frame}\n");
            }
      fprintf(Output, "%s\n",fimdocumento);
                        fclose(Output);
                        return 0;
}
/*
\begin{document}
      \begin{frame}
      \transduration{0.1}
            \begin{tikzpicture}
            
            
            "\\fill[venus] (3,7) circle(0.586951149mm);"
            "\\fill[terra] (3.5,7) circle(0.591639368mm);"
            "\\fill[marte] (4,7)      circle(0.548795977mm);"
            "\\fill[jupiter] (4.7,7) circle(3.027183908mm);"
            "\\draw[saturno,thick,densely dotted] (5.7,7) circle(3.797758621mm);"
            "\\fill[saturno] (5.7,7) circle(2.86591954mm);"
            "\\fill[urano] (6.5,7) circle(0.867227011mm);"
            "\\fill[netuno] (7,7) circle(0.855804598mm);"
            \end{tikzpicture}
      \end{frame}

\end{document}


thisform.usAngulo = thisform.usAngulo + .01
THISFORM.shpTERRA.top =  (180*SIN(DTOR(thisform.usANGULO)))
THISFORM.shpTERRA.left = (180*COS(DTOR(thisform.usANGULO)))
      
Thisform.usANGULOLUA = thisform.usANGULOLUA + .1
THISFORM.shpLUA.top =  THISFORM.shpTERRA.top+12+(30*SIN(DTOR(thisform.usANGULOLUA)))
THISFORM.shpLUA.left = THISFORM.shpTERRA.left+4+(30*COS(DTOR(thisform.usANGULOLUA)))

*/
