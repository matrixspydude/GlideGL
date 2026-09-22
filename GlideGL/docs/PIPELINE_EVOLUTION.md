\# Glide Pipeline Evolution



A unified historical and technical overview of PC graphics pipelines from 1986–2000,

and how Glide.api maps, preserves, and modernizes them.



This document explains:

\- how each graphics pipeline worked,

\- how they evolved,

\- how they relate to one another,

\- and how Glide.api unifies them under a single retro‑correct API.



...



\## 7. Glide Unification Model



\### Overview

Glide.api aims to unify the behavior of all these eras into a single retro‑correct API

that maps cleanly onto modern GPUs.



\### Glide Goals

\- Preserve DOS timing and palette behavior

\- Preserve Windows 95 blitting semantics

\- Preserve DirectDraw flipping and locking rules

\- Preserve Glide TMU and combine behavior

\- Preserve OpenGL fixed‑function semantics

\- Map all retro behavior onto Vulkan

\- Provide a stable foundation for future 3Dfx-inspired hardware



\### Glide Mapping Strategy

\- DOS → Software layer (CPU emulation + Vulkan blit)

\- Win95 → GDI/WinG behavior → Vulkan surfaces

\- DirectDraw → Surface model → Vulkan swapchains

\- Glide → Fixed‑function emulation → Vulkan pipelines

\- OpenGL 1.x → Immediate mode → Vulkan command generation

\- Vulkan → Modern backend for all layers



\---



\## Purpose of This Document

This file serves as:

\- a historical pipeline map,

\- a contributor guide,

\- a technical foundation,

\- and a roadmap for Glide authenticity.



It links to external documentation only and contains no copyrighted manuals.



