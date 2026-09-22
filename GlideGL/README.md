\# Glide: Retro Graphics, Rendered Correctly



\## Mission

Glide.api preserves original rendering behavior for DOS and Windows 95‑era games by providing a

native, authenticity‑focused graphics API that runs classic titles exactly as they were meant to be

seen — even when emulators fail.



\## Vision

Glide.api is building a new graphics ecosystem that begins with retro correctness and grows into

modern rendering innovation — a unified API and future hardware platform designed to bridge the

past, define the present, and shape the next generation of graphics technology.



\---



\## What Glide.api Is

Glide.api is a new graphics API designed to:



\- Run DOS and Windows 95 games natively, without relying on emulators

\- Preserve original timing, palette behavior, blitting, and rendering quirks

\- Provide a stable, modern backend for classic games

\- Offer an alternative path for titles that emulators fail to run correctly

\- Serve as the foundation for future hardware and modern rendering layers



\*\*Glide.api is not an emulator.\*\*  

It is a \*\*native authenticity layer\*\*.



\---



\## Why Glide.api Exists

Many classic games rely on:



\- CPU cycle timing

\- VGA / Mode X behavior

\- Palette animation

\- Early GDI quirks

\- DirectDraw surface flipping

\- Memory models unique to DOS and Windows 95



Emulators often struggle with these edge cases.



Glide.api solves this by recreating the original rendering pipeline — \*\*not\*\* by emulating the

entire system.



This allows games to run:



\- more accurately  

\- more consistently  

\- more authentically  

\- and on modern hardware  



\---



\## Why Glide.api Runs on Existing GPUs First

Glide.api begins as a portable graphics API that runs on today’s GPUs — \*\*Intel, AMD, and NVIDIA\*\*.



This first stage is essential because it allows:



\- developers to use the API immediately

\- retro‑correct rendering to be tested on real systems

\- DOS/Win95 quirks to be validated across multiple GPUs

\- the community to grow before new 3Dfx hardware exists



Once Glide.api matures, future 3Dfx GPUs will provide \*\*dedicated acceleration paths\*\*, making

Glide.api the \*\*native API\*\* for our hardware while remaining compatible with existing GPUs for

maximum reach.



\---



\## Glide.api Roadmap



\### \*\*0.1 — DOS Authenticity Pipeline\*\*

\*\*Focus:\*\* foundational retro correctness  

\- VGA / Mode X rendering  

\- palette support  

\- blitting operations  

\- timing‑correct frame pacing  

\- surface loading  

\- minimal test harness for DOS games  



\### \*\*0.2 — Windows 95 Rendering Preservation\*\*

\*\*Focus:\*\* early Windows graphics  

\- GDI blitting  

\- early DirectDraw behavior  

\- palette animation  

\- surface flipping  

\- Win95 timing quirks  



\### \*\*0.3 — Unified Retro Layer\*\*

\*\*Focus:\*\* bridging DOS → Win95  

\- shared surface model  

\- unified timing system  

\- retro‑correct rendering abstraction  

\- compatibility test suite  



\### \*\*0.4 — Glide.api Core (Modern Layer Begins)\*\*

\*\*Focus:\*\* future expansion  

\- modern rendering primitives  

\- hardware abstraction layer  

\- early GPU pipeline concepts  

\- foundation for future hardware  



\### \*\*0.5 — Hardware Pathfinding\*\*

\*\*Focus:\*\* long‑term vision  

\- low‑level hardware interface  

\- prototype driver model  

\- early research into custom GPU behavior  

\- stepping toward competing with AMD/NVIDIA  



\---



\## Glide.api Development Stages



\*\*Stage 1 — Portable API (Current)\*\*  

Runs on Intel, AMD, and NVIDIA.  

Focus: retro correctness, early modern features, community adoption.



\*\*Stage 2 — Modern Pipeline (Future)\*\*  

Adds shaders, pipelines, buffers, textures, and GPU acceleration.  

Still portable across all major GPUs.



\*\*Stage 3 — 3Dfx Hardware Acceleration (Long‑Term)\*\*  

Glide.api becomes the native API for new 3Dfx GPUs.  

Retro and modern features gain dedicated hardware acceleration.



\---



\## Architecture Overview



\[ DOS / Win95 Game ]  

↓  

\[ Glide.api Authenticity Layer ]  

↓  

\[ GlideGL Modern GPU Backend ]



Glide.api sits between classic games and modern hardware, preserving the original rendering

behavior while providing a stable, modern backend.



\---



\## Core API (Early Draft)



gxInit();  

gxLoadSurface();  

gxBlit();  

gxPresent();  

gxSetPalette();  

gxShutdown();



These functions represent the early shape of Glide.api 0.1 — simple, clear, authenticity‑focused.



\---



\## Design Principles



Glide.api is built on four pillars:



1\. \*\*Authenticity\*\*  

&#x20;  Games must look, feel, and behave exactly as they did originally.



2\. \*\*Preservation\*\*  

&#x20;  Retro games deserve a future — Glide.api ensures they have one.



3\. \*\*Stability\*\*  

&#x20;  A clean, modern backend ensures consistent behavior across systems.



4\. \*\*Evolution\*\*  

&#x20;  Glide.api begins with retro correctness but grows into a modern graphics ecosystem.



\---



\## Who Glide.api Is For



\- DOS and Windows 95 gamers  

\- preservationists  

\- graphics engineers  

\- emulator developers  

\- hardware tinkerers  

\- future collaborators  

\- anyone who cares about authenticity  



\---



\## Long‑Term Goal

Glide.api is not just an API.  

It is the seed of a future graphics platform — one that respects the past while building toward

hardware capable of competing with AMD and NVIDIA.



\---



\## Join the 3Dfx Glide Interactive Project



Glide.api is the official rendering API of \*\*3Dfx Glide Interactive\*\*, inspired by the legacy of

3Dfx Interactive. We’re looking for collaborators who care about retro PC gaming, DOS/Win95

authenticity, graphics engineering, or preservation.



You don’t need to be an expert — just passionate.



If you want to help build a retro‑correct graphics API under the 3Dfx Glide Interactive name,

open an Issue or Pull Request.



\---



\## Help Wanted



\*\*3Dfx Glide Interactive\*\* welcomes contributors in many areas:



\- C/C++ developers  

\- graphics programmers  

\- DOS/Win95 enthusiasts  

\- emulator experts  

\- documentation writers  

\- testers for retro games  

\- hardware tinkerers  

\- preservation advocates  



If any of these describe you, you’re invited to join.



\---



\## Message from the Founder



I’m reviving \*\*3Dfx Glide Interactive\*\*, inspired by the spirit of the original 3Dfx Interactive.

Glide.api is our new rendering API — built for authenticity, preservation, and the future of

retro‑correct hardware.



I’m not a professional coder.  

I’m a retro gamer who believes classic games deserve to be seen exactly as they were meant to be.



If you want to help build Glide.api and the new 3Dfx Glide Interactive ecosystem, you’re welcome

here.



\---



\## Legal Notice



\*\*3Dfx Glide Interactive\*\* is an independent revival project inspired by the legacy of 3dfx

Interactive. Glide.api is an original rendering API created from scratch and does not use any

NVIDIA assets, legacy 3dfx source code, proprietary materials, or intellectual property owned by

NVIDIA.



