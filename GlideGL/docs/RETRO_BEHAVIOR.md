\# Glide Retro Behavior Specification



This document defines the retro‑correct rendering behaviors Glide.api aims to preserve

across DOS, Windows 95, DirectDraw, Glide-era, and early OpenGL graphics pipelines.



\---



\## 1. DOS Rendering Behavior



\### Pixel Output Rules

\- CPU-driven rendering

\- VGA memory writes (A000:0000)

\- Mode 13h linear framebuffer

\- Mode X planar writes

\- Palette-based color output

\- Vertical retrace timing sensitivity



\### Timing Characteristics

\- Frame pacing tied to CPU speed

\- No vsync enforcement

\- Palette animation dependent on CPU loops



\### Required Glide Preservation

\- Accurate palette behavior

\- Authentic Mode X planar emulation

\- CPU-timed blitting simulation

\- Optional “cycle-correct” mode



\---



\## 2. Windows 95 Rendering Behavior



\### GDI / WinG Rules

\- BitBlt semantics (SRC, PATCOPY, SRCCOPY)

\- DIB section behavior

\- Palette realization rules

\- Cooperative fullscreen mode quirks



\### Required Glide Preservation

\- Authentic BitBlt behavior

\- Palette realization timing

\- DIB section pixel format rules

\- WinG-style blitting semantics



\---



\## 3. DirectDraw Rendering Behavior



\### Surface Model

\- Primary surface + backbuffer

\- Page flipping

\- Lock/Unlock semantics

\- Clip lists

\- Palette objects



\### Required Glide Preservation

\- Flip timing identical to DirectDraw

\- Lock/Unlock behavior (blocking, pitch rules)

\- Accurate blitting (Blt / BltFast)

\- Surface capability flags



\---



\## 4. Glide Rendering Behavior (3dfx Era)



\### Fixed-Function Pipeline Rules

\- TMU combine modes

\- Fog tables

\- LOD calculation

\- Triangle setup rules

\- 16-bit color pipeline

\- Ordered dithering



\### Required Glide Preservation

\- Authentic TMU behavior

\- Glide fog table interpolation

\- Glide-style rasterization

\- Glide-style mipmap LOD



\---



\## 5. OpenGL 1.x Behavior



\### Immediate Mode Rules

\- glBegin/glEnd semantics

\- Matrix stack behavior

\- Fixed-function lighting

\- Texture environment modes



\### Required Glide Preservation

\- Immediate-mode emulation

\- Fixed-function pipeline mapping

\- Fog, alpha test, blending rules



\---



\## Purpose



This document defines the retro behaviors Glide.api must preserve to ensure historically

accurate rendering across all supported eras.



