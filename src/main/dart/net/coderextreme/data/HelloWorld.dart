// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          /*Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON*/
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('HelloWorld.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Simple X3D model example: Hello World!')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('30 October 2000')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('HelloWorld.tall.png')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://en.wikipedia.org/wiki/Hello_world')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://en.wikipedia.org/wiki/\"Hello,_World!\"_program')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.HelloWorldExample.net')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/realtime-3d/news/internationalization-x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HelloWorld.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/license.html')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HelloWorld.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HelloWorld.x3dv')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HelloWorld.x3db')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HelloWorld.xhtml')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HelloWorld.json'))]),
      Scene_ : 
        Scene(
          /*Example scene to illustrate X3D nodes and fields (XML elements and attributes)*/
          children_ : [
            WorldInfo(
              info_ : MFString([SFString("Example scene to illustrate a simple X3D model")]),
              title_ : SFString('Hello World!')),

            Group(
              children_ : [
                Viewpoint(
                  DEF_ : SFString('ViewUpClose'),
                  centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(-1), SFDouble(0)]),
                  description_ : SFString('Hello world!'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(-1), SFDouble(7)])),

                Transform(
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Sphere(),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              DEF_ : SFString('MaterialLightBlue'),
                              diffuseColor_ : SFColor([SFDouble(0.1), SFDouble(0.5), SFDouble(1)])),
                          texture_ : 
                            ImageTexture(
                              DEF_ : SFString('ImageCloudlessEarth'),
                              url_ : MFString([SFString("earth-topo.png"), SFString("earth-topo.jpg"), SFString("earth-topo-small.gif"), SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"), SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg"), SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif")]))))]),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-2), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          DEF_ : SFString('TextMessage'),
                          string_ : MFString([SFString("Hello"), SFString("world!")]),
                          fontStyle_ : 
                            FontStyle(
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              USE_ : SFString('MaterialLightBlue'))))])])]));
void main() { exit(0); }
