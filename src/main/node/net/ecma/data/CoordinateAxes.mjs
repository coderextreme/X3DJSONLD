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
import { Collision } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Cylinder } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Cone } from './x3d.mjs';
import { Billboard } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("CoordinateAxes.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman, Byounghyun Yoo")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("14 July 2000")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d")}),

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
              title : new SFString("CoordinateAxes.x3d")}),

            new Collision({
              DEF : new SFString("DoNotCollideWithVisualizationWidget"),
              /*Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.*/
              /*This NavigationInfo allows examine mode and will be overridden by any parent scene.*/
              /*Each arrow goes from +1m to -1m to allow linear scaling to fit a scene*/
              /*Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user*/
              proxy : new SFNode(
                new Group({
                  /*Vertical Y arrow and label*/
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("ArrowGreen"),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Cylinder({
                              DEF : new SFString("ArrowCylinder"),
                              radius : new SFFloat(0.025),
                              top : new SFBool(false)})),
                          appearance : new SFNode(
                            new Appearance({
                              DEF : new SFString("Green"),
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.1,0.6,0.1]),
                                  emissiveColor : new SFColor([0.05,0.2,0.05])}))}))}),

                        new Transform({
                          translation : new SFVec3f([0,1,0]),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Cone({
                                  DEF : new SFString("ArrowCone"),
                                  bottomRadius : new SFFloat(0.05),
                                  height : new SFFloat(0.1)})),
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("Green")}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([0,1.08,0]),
                      children : new MFNode([
                        new Billboard({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("LABEL_APPEARANCE"),
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,0.3]),
                                      emissiveColor : new SFColor([0.33,0.33,0.1])}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Y"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      DEF : new SFString("LABEL_FONT"),
                                      family : new MFString(["SANS"]),
                                      justify : new MFString(["MIDDLE","MIDDLE"]),
                                      size : new SFFloat(0.2)}))}))})])})])})])})),
              proxy : new SFNode(
                new Transform({
                  rotation : new SFRotation([0,0,1,-1.57079]),
                  /*Horizontal X arrow and label*/
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("ArrowRed"),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  USE : new SFString("ArrowCylinder")})),
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("Red"),
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0.7,0.1,0.1]),
                                      emissiveColor : new SFColor([0.33,0,0])}))}))}),

                            new Transform({
                              translation : new SFVec3f([0,1,0]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new Cone({
                                      USE : new SFString("ArrowCone")})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("Red")}))})])})])}),

                        new Transform({
                          rotation : new SFRotation([0,0,1,1.57079]),
                          translation : new SFVec3f([0.072,1.1,0]),
                          /*note label rotated back to original coordinate frame*/
                          children : new MFNode([
                            new Billboard({
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("LABEL_APPEARANCE")})),
                                  geometry : new SFNode(
                                    new Text({
                                      string : new MFString(["X"]),
                                      fontStyle : new SFNode(
                                        new FontStyle({
                                          USE : new SFString("LABEL_FONT")}))}))})])})])})])})])})),
              proxy : new SFNode(
                new Transform({
                  rotation : new SFRotation([1,0,0,1.57079]),
                  /*Perpendicular Z arrow and label, note right-hand rule*/
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("ArrowBlue"),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  USE : new SFString("ArrowCylinder")})),
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("Blue"),
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0.3,0.3,1]),
                                      emissiveColor : new SFColor([0.1,0.1,0.33])}))}))}),

                            new Transform({
                              translation : new SFVec3f([0,1,0]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new Cone({
                                      USE : new SFString("ArrowCone")})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("Blue")}))})])})])}),

                        new Transform({
                          rotation : new SFRotation([1,0,0,-1.57079]),
                          translation : new SFVec3f([0,1.1,0.072]),
                          /*note label rotated back to original coordinate frame*/
                          children : new MFNode([
                            new Billboard({
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("LABEL_APPEARANCE")})),
                                  geometry : new SFNode(
                                    new Text({
                                      string : new MFString(["Z"]),
                                      fontStyle : new SFNode(
                                        new FontStyle({
                                          USE : new SFString("LABEL_FONT")}))}))})])})])})])})])}))})])}))});
console.log(X3D0.toXMLNode());
