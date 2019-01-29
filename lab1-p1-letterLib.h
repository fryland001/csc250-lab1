/* lab1-p1-letterLib.h
*
* created to give my assignment letter/numer to the class
* this will be expanded on later 
*
* Author fryland001 1/29/2019
*/
 #include "gfx2.h"
 
 /* drawChar7
 *
 * Charater 7 will be created in programs choosen when using this header
 *
 */
 void drawChar7(double width, double height, size)
 {
      double ulCornerY = height;
      double ulCornerX = width;
      double urCornerY = height;
      double urCornerX = width + (0.75*size);
      double lrCornerY = height + size;
      double lrCornerX = width + (0.5*size); 
      double llCornerY = height+ size;
      double llCornerX = width + (0.2*size);
      double mrCornerY = height + (0.25*size);
      double mrCornerX = width + (0.4*size);      
      double mlCornerY = height + (0.25*size);
      double mlCornerX = width;
      
      gfx_line(ulCornerX,ulCornerY,urCornerX,urCornerY);
      gfx_line(urCornerX,urCornerY,lrCornerX,lrCornerY);
      gfx_line(lrCornerX,lrCornerY,llCornerX,llCornerY);
      gfx_line(llCornerX,llCornerY,mrCornerX,mrCornerY);
      gfx_line(mrCornerX,mrCornerY,mlCornerX,mlCornerY);
      gfx_line(mlCornerX,mlCornerY,ulCornerX,ulCornerY);
      
 }
 
