#ifndef GLIDE_H
#define GLIDE_H

#ifdef __cplusplus
extern "C" {
#endif

// Initialize the Glide system
void gxInit(void);

// Shut down Glide
void gxShutdown(void);

// Load a surface (image, sprite, etc.)
int gxLoadSurface(const char* path);

// Blit a surface to the screen at (x, y)
void gxBlit(int surfaceId, int x, int y);

// Present the final frame
void gxPresent(void);

// Set the active palette (256 colors)
void gxSetPalette(const unsigned char* palette);

#ifdef __cplusplus
}
#endif

#endif
