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
 * Character 7 will be created in programs chosen when using this header
 *
 */
 void drawChar7(double ulCornerX, double ulCornerY, double height)
 {
      double ulY = ulCornerY;
      double ulX = ulCornerX;
      double urY = ulCornerY;
      double urX = ulCornerX + (0.75*height);
      double lrY = ulCornerY + height;
      double lrX = ulCornerX + (0.5*height); 
      double llY = ulCornerY + height;
      double llX = ulCornerX + (0.2*height);
      double mrY = ulCornerY + (0.25*height);
      double mrX = ulCornerX + (0.4*height);      
      double mlY = ulCornerY + (0.25*height);
      double mlX = ulCornerX;
      
      gfx_line(ulX,ulY,urX,urY);
      gfx_line(urX,urY,lrX,lrY);
      gfx_line(lrX,lrY,llX,llY);
      gfx_line(llX,llY,mrX,mrY);
      gfx_line(mrX,mrY,mlX,mlY);
      gfx_line(mlX,mlY,ulX,ulY);
      
 }
 
