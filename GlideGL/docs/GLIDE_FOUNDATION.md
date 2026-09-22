\# Glide Foundation Document



A high-level overview of the mission, architecture, goals, and long-term vision of the

Glide project.



\---



\## Mission Statement

Glide.api aims to unify the graphics behavior of DOS, Windows 95, DirectDraw, Glide,

and early OpenGL into a single retro‑correct API that runs on modern hardware through Vulkan.



\---



\## Core Principles



1\. \*\*Authenticity\*\*  

&#x20;  Preserve historical rendering behavior exactly as it existed.



2\. \*\*Simplicity\*\*  

&#x20;  Provide a clean, minimal API inspired by Glide and early graphics pipelines.



3\. \*\*Accuracy\*\*  

&#x20;  Reproduce timing, palette, rasterization, and pipeline quirks faithfully.



4\. \*\*Modern Compatibility\*\*  

&#x20;  Map retro behavior onto Vulkan for stable cross-platform support.



5\. \*\*Future Hardware Path\*\*  

&#x20;  Provide a foundation for future 3Dfx-inspired hardware.



\---



\## Architecture Overview



\### Layer 1 — Retro Emulation Layer

\- DOS framebuffer emulation

\- Mode X planar emulation

\- DirectDraw surface model

\- Glide TMU + combine mode emulation



\### Layer 2 — Unified API Layer

\- Glide.api (retro-correct)

\- Unified surface model

\- Unified texture pipeline

\- Unified rasterization rules



\### Layer 3 — Modern Backend Layer

\- Vulkan pipelines

\- Vulkan command buffers

\- Vulkan memory model

\- Vulkan synchronization



\---



\## Long-Term Vision

\- Glide 1.x → Full retro pipeline unification  

\- Glide 2.x → Optional DX8/9 expansion  

\- Glide Hardware → Custom 3Dfx-inspired GPU architecture  



\---



\## Purpose

This document defines the foundational philosophy and architecture of Glide.api for contributors and future maintainers.



