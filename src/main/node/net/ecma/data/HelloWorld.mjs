'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { ImageTexture } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HelloWorld.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Simple X3D scene example: Hello World!")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("30 October 2000")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("14 April 2017")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HelloWorld.tall.png")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://en.wikipedia.org/wiki/Hello_world")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.HelloWorldExample.net")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.web3D.org")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.web3d.org/realtime-3d/news/internationalization-x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/HelloWorld.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/license.html")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorld.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorld.x3dv")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorld.x3db")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorld.xhtml")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorld.json")}),
          { "#comment" : new CommentsBlock("Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON") }])})),
      Scene : new SFNode(
        new Scene({
          { "#comment" : new CommentsBlock("Example scene to illustrate X3D nodes and fields (XML elements and attributes)") },
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Hello world!")}),

            new Group({
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Viewpoint({
                  DEF : new SFString("ViewUpClose"),
                  centerOfRotation : new SFVec3f([0,-1,0]),
                  description : new SFString("Hello world!"),
                  position : new SFVec3f([0,-1,7])}),

                new Transform({
                  rotation : new SFRotation([0,1,0,3]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Shape({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      geometry : new SFNode(
                        new Sphere({})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("MaterialLightBlue"),
                              diffuseColor : new SFColor([0.1,0.5,1])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("ImageCloudlessEarth"),
                              url : new MFString(["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","http://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([0,-2,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Shape({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      geometry : new SFNode(
                        new Text({
                          DEF : new SFString("TextMessage"),
                          string : new MFString(["Hello","world!"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("MaterialLightBlue")}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
