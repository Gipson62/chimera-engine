# Game Design Document: Knights of Avalon (Working Title)

## 1. Project Overview

* **Genre:** Isometric Co-op Top-Down Action RPG / Dungeon Crawler
* **Core Loop:** Instanced dungeon clearing (1-4 players) for narrative progression and mechanic mastery, high-difficulty raids (8 players) for endgame synchronization and progression.
* **Primary Influences:** Lost Ark (raid mechanics), Albion Online, Path of Exile, Diablo, Fellowship, Guild Wars (level scaling).
* **Scope & Delivery:** Solo developer project. Semi-live service model with iterative additions to dungeon and raid tiers.
> NB: There might be other people helping me on the project after a while
* **Platform:** Mostly PC, with Windows & Linux in mind. Possible to play with a controller for Steam Deck support
* **Monetization:** Either buy to play, or Open Source with donation available. Who knows

## 2. Core Gameplay Mechanics

* **Perspective:** Isometric / Top-Down.
* **Environment:** Strictly instanced zones (dungeons/raids). No open-world exploration. Optional standalone social hub.
* **Party Sizes:**
    * **Dungeons:** 1-4 Players (Solo viable).
    * **Raids:** 8 Players (Requires maximum synchronization).
    > 2 parties of 4

# 3. Combat & Gear System
* **Combat System:** Action-based RPG combat requiring strict party synchronization for raid execution.
* **Ambient Magic:** Gear channels magic from the environment (air, ground, water, plants).
* **Knight Orders (Factions):** Equippable passive abilities derived from allied factions.
    * *Example - Blue Knight Order:* +50% Defense when HP drops below 30%.
    * *Example -     Green Knight Order:* Cooldown reduction and Attack Speed increase upon critical strikes.

## 4. Progression Systems

* **Leveling:** Linear level cap achievement followed by strict horizontal progression over the quality of the gear you acquire (capped as well) and the masteries you have over weapon types (akin to Albion Online). The idea is to expand the pool of possibilities without making you necessarily stronger, players stay humans, just enhanced with gear infused with magic.
* **Economy/Loot:** Gear acquisition scales horizontally to prevent power creep and infinite scaling metrics.

## 5. Multiplayer & Network Architecture

* **Networking Model:** Authoritative server, with LAN support.
    * **LAN:** server ships with the game, so player can host their own possibly modded realms.
    * **Official servers:** planned. Character import between servers still undecided.
* **Server Authority:** Client-side trust / Host authority. No dedicated anti-chear. Player inputs are largely trusted, though the server will run checks to avoid blatant cheating.
> NB: If character import is supported, there needs to be a way to avoid mass item injection from offline characters to flood the economy.
* **Cheat Mitigation:** Handled via design limitations, horizontal progression limits the systemic impact of statistical inflation.

## 6. Narrative & World Design

* **Setting:** Avalon (Arthurian Mythology).
* **Player Identity:** Expeditionary Knight defending the frontier borders.
* **Narrative Structure:**
    * **Act I (Training):** Basically a tutorial where players fight in the barracks and in low risk mission (e.g. small werewolves/creatures)
    * **Act II (To War):** The Kingdom of Avalon is at war, meaning the players have been called under King Arthur's banners.
    * **Act III (Border Defense):** The war has ended, but threats at the border of the kingdom have arised. Threats such as demons, dragons, giant werewolves.
    * **Act IV (Lancelot's Betrayl):** Internal conflict driven by Lancelot's treason. Combating corrupted Avalon knights, Lancelot and other mythical entities.
    * **Act V (The Fool King):** The treason of Lancelot has turned the king into a crazy blood monster. Players need to stop him at all cost before he does too much damage. The kingdom has already fallen.
* **Boss Roster (non-final):**
    * Knight Trainer (Tutorial boss scaling to General Knight for group iteration)
    * Sir Lancelot
    * Dragons
    * Giant Werewolf
    * The Giant Green Knight
    * Enemy Knights / Witches
    * Demon Faction (Pending)
    * King Arthur (Pending narrative degradation)

## 7. Per-Act Content Template

* **Dungeons:** About 4 per act, each with 1 to 3 bosses. Always soloable, support up to 4 players. 
> Designed with scalable mechanics in mind e.g. if there is a switch to activate when solo, there is now 4 switches to activate, when in party of 4, in either a certain order, or at the same time.
* **Raids:** On raid tier per act, minimum 3 raids, each with 3 to 6 bosses. The final boss of each raid is a significant character in the story and the final boss of the last raid is the Act's primary antagonist (e.g. Lancelot in Act IV & King Arthur in Act V).
> Act I will probably not follow this as it serves as the tutorial.

## 8. Content Scope (Initial Prototype & Launch)

* **Prototype Milestone:** One fully playable dungeon.
* **Launch Target:**
    * 3 Dungeons covering Act I.
    * 1 Raid Tier (3 distinct raids).
    * 3-5 Boss encounters per raid.

## 9. Modding Support

* **Custom Content:** Native support and tooling for custom raid and dungeon creation by the community.
* **Side stories:** Community voting system to allow for popular mods/sides stories to be added to the game. (They will most probably not be canon)
* **Steam Workshop:** Native support

## 10. Technical Specifications

* **Engine:** Proprietary custom engine.
* **Language:** Custom programming language ([Atlas77](https://github.com/atlas77-lang/atlas77)).
* **Library Stack:**
    * Networking: ENet (Tentative)
    * ECS: flecs
    * Texture Loading: stb_image
    * Model Loading: assimp
    * Graphics API: OpenGL 4.6
    * Windowing/Input: glfw3 or SDL3
    * UI: Dear ImGui