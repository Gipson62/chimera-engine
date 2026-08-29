# Game Design Document: Knights of Avalon (Working Title)

## 1. Project Overview

* **Genre:** Isometric Co-op Top-Down Action RPG / Dungeon Crawler
* **Core Loop:** Instanced dungeon clearing (1-4 players) for narrative progression and mechanic mastery; high-difficulty raids (8-16 players) for endgame synchronization and progression.
* **Primary Influences:** Lost Ark (raid mechanics), Albion Online, Path of Exile, Diablo, Fellowship, Guild Wars (level scaling).
* **Scope & Delivery:** Solo developer project. Semi-live service model with iterative additions to dungeon and raid tiers.

## 2. Core Gameplay Mechanics

* **Perspective:** Isometric / Top-Down.
* **Environment:** Strictly instanced zones (dungeons/raids). No open-world exploration. Optional standalone social hub.
* **Combat System:** Action-based RPG combat requiring strict party synchronization for raid execution.
* **Class/Build System:**
    * **Ambient Magic:** Gear channels magic from the environment (air, ground, water, plants).
    * **Knight Orders (Factions):** Equippable passive abilities derived from allied factions.
        * *Example - Blue Knight Order:* +50% Defense when HP drops below 30%.
        * *Example -     Green Knight Order:* Cooldown reduction and Attack Speed increase upon critical strikes.

## 3. Progression Systems

* **Leveling:** Linear level cap achievement followed by strict horizontal progression.
* **Scaling System:** Dynamic downscaling. High-level players entering low-level content are scaled down to the content's cap. All content remains relevant and yields viable loot.
* **Economy/Loot:** Gear acquisition scales horizontally to prevent power creep and infinite scaling metrics.

## 4. Multiplayer & Network Architecture

* **Networking Model:** Peer-to-Peer (P2P) with one player operating as the local host. Local Area Network (LAN) supported natively.
* **Server Authority:** Client-side trust / Host authority. No dedicated authoritative servers planned for initial launch.
* **Cheat Mitigation:** Handled via design limitations; horizontal progression limits the systemic impact of statistical inflation.
* **Party Sizes:**
    * **Dungeons:** 1-4 Players (Solo viable).
    * **Raids:** 8-16 Players (Requires maximum synchronization).

## 5. Narrative & World Design

* **Setting:** Avalon (Arthurian Mythology).
* **Player Identity:** Expeditionary Knight defending the frontier borders.
* **Narrative Structure:**
    * **Act I (Border Defense):** Combating external threats (dragons, werewolves, enemy knights).
    * **Act II (The Betrayal):** Internal conflict driven by Lancelot's treason. Combating corrupted Avalon knights, Lancelot, and mythical entities.
* **Boss Roster:**
    * Knight Trainer (Tutorial boss scaling to General Knight for group iteration)
    * Sir Lancelot
    * Dragons
    * Giant Werewolf
    * The Giant Green Knight
    * Enemy Knights / Witches
    * Demon Faction (Pending)
    * King Arthur (Pending narrative degradation)

## 6. Content Scope (Initial Prototype & Launch)

* **Prototype Milestone:** Completion of one fully playable dungeon.
* **Launch Target:**
    * 5 Dungeons covering Act I.
    * 1 Raid Tier (3 distinct raids).
    * 3-5 Boss encounters per raid.

## 7. Modding Support

* **Custom Content:** Native support and tooling for custom raid and dungeon creation by the community.

## 8. Technical Specifications

* **Engine:** Proprietary custom engine.
* **Language:** Custom programming language.
* **Library Stack:**
    * Networking: ENet (Tentative)
    * ECS: flecs
    * Texture Loading: stb_image
    * Model Loading: assimp
    * Graphics API: OpenGL 4.6 (Vulkan tentative)
    * Windowing/Input: glfw3
    * UI: Dear ImGui