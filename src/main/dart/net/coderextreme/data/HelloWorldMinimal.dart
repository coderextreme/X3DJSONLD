// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('HelloWorldMinimal.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Hello World minimal example scene.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('19 January 2020')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('24 January 2020')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://helloworldcollection.de')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://en.wiktionary.org/wiki/Hello_World')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('HelloWorldMinimal.x3d')),

            Shape(
              geometry_ : 
                Text(
                  string_ : MFString([SFString("hello, world")])))]));
void main() { exit(0); }
