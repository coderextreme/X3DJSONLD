'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
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
              content : new SFString("HelloWorldCommented.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("19 December 2015")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorldCommented.json")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorldCommentedOriginalEncoding.json")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HelloWorldCommentedAlternativeEncoding.json")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/license.html")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          /*Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)*/
          /*WorldInfo begin*/
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Hello world!")}),
          /*WorldInfo complete, Group begin*/

            new Group({
              /*Viewpoint begin*/
              children : new MFNode([
                new Viewpoint({
                  DEF : new SFString("ViewUpClose"),
                  centerOfRotation : new SFVec3f([0,-1,0]),
                  description : new SFString("Hello world!"),
                  position : new SFVec3f([0,-1,7])}),
              /*Viewpoint complete, Transform begin*/

                new Transform({
                  rotation : new SFRotation([0,1,0,3]),
                  /*Shape begin*/
                  children : new MFNode([
                    new Shape({
                      /*Sphere begin*/
                      /*Sphere complete, Appearance begin*/
                      /*Appearance complete*/
                      geometry : new SFNode(
                        new Sphere({})),
                      appearance : new SFNode(
                        new Appearance({
                          /*Material begin*/
                          /*Material complete, ImageTexture begin*/
                          /*ImageTexture complete*/
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("MaterialLightBlue"),
                              diffuseColor : new SFColor([0.1,0.5,1])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("ImageCloudlessEarth"),
                              url : new MFString(["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])}))}))}),
                  /*Shape complete*/])}),
              /*Transform complete, Transform begin*/

                new Transform({
                  translation : new SFVec3f([0,-2,0]),
                  /*Shape begin*/
                  children : new MFNode([
                    new Shape({
                      /*Text begin*/
                      /*Text complete, Appearance begin*/
                      /*Appearance complete*/
                      geometry : new SFNode(
                        new Text({
                          DEF : new SFString("TextMessage"),
                          string : new MFString(["Hello","world!"]),
                          /*FontStyle begin*/
                          /*FontStyle complete*/
                          fontStyle : new SFNode(
                            new FontStyle({
                              justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          /*Material begin*/
                          /*Material complete*/
                          material : new SFNode(
                            new Material({
                              USE : new SFString("MaterialLightBlue")}))}))}),
                  /*Shape complete*/])}),
              /*Transform complete*/])}),
          /*Group complete*/])}))});
console.log(X3D0.toXMLNode());
