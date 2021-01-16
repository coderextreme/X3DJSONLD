'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { MFString } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      { "#comment" : new CommentsBlock("All head/meta tags are optional, WorldInfo is also optional") },
      { "#comment" : new CommentsBlock("Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1") },
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HelloWorldMinimal.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Hello World minimal example scene.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("19 January 2020")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("24 January 2020")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://helloworldcollection.de")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wiktionary.org/wiki/Hello_World")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("HelloWorldMinimal.x3d")}),

            new Shape({
              geometry : new SFNode(
                new Text({
                  string : new MFString(["hello, world"])}))})])}))});
console.log(X3D0.toXMLNode());
