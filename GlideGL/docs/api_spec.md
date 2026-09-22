\# Glide API Specification (3Dfx Glide Interactive)



\## Initialization

void gxInit(void);

void gxShutdown(void);



\## Surfaces

int gxLoadSurface(const char\* path);



\## Rendering

void gxBlit(int surfaceId, int x, int y);

void gxPresent(void);



\## Palette

void gxSetPalette(const unsigned char\* palette);



