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
              content_ : SFString('HelloWorldCommented.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('19 December 2015')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HelloWorldCommented.json')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HelloWorldCommentedOriginalEncoding.json')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HelloWorldCommentedAlternativeEncoding.json')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/license.html')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          /*Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)*/
          /*WorldInfo begin*/
          children_ : [
            WorldInfo(
              title_ : SFString('Hello world!')),
          /*WorldInfo complete, Group begin*/

            Group(
              /*Viewpoint begin*/
              children_ : [
                Viewpoint(
                  DEF_ : SFString('ViewUpClose'),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(-1), SFDouble(0)]),
                  description_ : SFString('Hello world!'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(-1), SFDouble(7)])),
              /*Viewpoint complete, Transform begin*/

                Transform(
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3)]),
                  /*Shape begin*/
                  child_ : 
                    Shape(
                      /*Sphere begin*/
                      /*Sphere complete, Appearance begin*/
                      /*Appearance complete*/
                      geometry_ : 
                        Sphere(),
                      appearance_ : 
                        Appearance(
                          /*Material begin*/
                          /*Material complete, ImageTexture begin*/
                          /*ImageTexture complete*/
                          material_ : 
                            Material(
                              DEF_ : SFString('MaterialLightBlue'),
                              diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.5), SFDouble(1)])),
                          texture_ : 
                            ImageTexture(
                              DEF_ : SFString('ImageCloudlessEarth'),
                              url_ : MFString([SFString("earth-topo.png"), SFString("earth-topo.jpg"), SFString("earth-topo-small.gif"), SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"), SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg"), SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif")])))),
                  /*Shape complete*/),
              /*Transform complete, Transform begin*/

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-2), SFDouble(0)]),
                  /*Shape begin*/
                  child_ : 
                    Shape(
                      /*Text begin*/
                      /*Text complete, Appearance begin*/
                      /*Appearance complete*/
                      geometry_ : 
                        Text(
                          DEF_ : SFString('TextMessage'),
                          string_ : MFString([SFString("Hello"), SFString("world!")]),
                          /*FontStyle begin*/
                          /*FontStyle complete*/
                          fontStyle_ : 
                            FontStyle(
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                      appearance_ : 
                        Appearance(
                          /*Material begin*/
                          /*Material complete*/
                          material_ : 
                            Material(
                              USE_ : SFString('MaterialLightBlue')))),
                  /*Shape complete*/),
              /*Transform complete*/]),
          /*Group complete*/]));
void main() { exit(0); }
