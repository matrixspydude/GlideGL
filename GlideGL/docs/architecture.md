\# Glide Architecture Overview



Glide.api is the official graphics API of 3Dfx Glide Interactive, inspired by the legacy

of the original 3dfx Interactive. Its goal is to provide retro‑correct graphics behavior

for DOS and Windows 95 era games while remaining modern, portable, and easy to extend.



\## Core Principles

\- Authentic behavior inspired by 1990s rendering pipelines

\- Simple, predictable API surface

\- Palette-based rendering for retro accuracy

\- Surface-based blitting model

\- Minimal dependencies



\## Layers



\### 1. API Layer (glide.h)

Public functions exposed to developers:

\- Initialization

\- Shutdown

\- Surface loading

\- Blitting

\- Palette control

\- Frame presentation



\### 2. Core Engine (src/)

Implements:

\- Surface management

\- Palette operations

\- Software rendering pipeline

\- Framebuffer composition



\### 3. Platform Layer

Handles:

\- Window creation

\- Input (future)

\- Timing

\- OS abstraction



\### 4. Compatibility Layer (future)

Provides:

\- DOS/Win95 behavior simulation

\- Retro timing quirks

\- Palette fade accuracy

\- Scanline simulation (optional)



\## Future Hardware Path

Glide.api will eventually serve as the rendering API for new 3Dfx Glide Interactive

hardware prototypes, providing native acceleration paths for both retro and modern rendering.



