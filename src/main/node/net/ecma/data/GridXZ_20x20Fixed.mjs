'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { IndexedLineSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { Color } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { Billboard } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("GridXZ_20x20Fixed.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("MV4204 class")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("3 September 2000")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("30 March 2016")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("GridXY_20x20Fixed.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("GridYZ_20x20Fixed.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              description : new SFString("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)"),
              orientation : new SFRotation([1,0,0,-0.4]),
              position : new SFVec3f([0,10,25])}),

            new Transform({
              DEF : new SFString("GridLocation"),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("LinesAlignedAlongZ"),
                      geometry : new SFNode(
                        new IndexedLineSet({
                          colorIndex : new MFInt32([1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1]),
                          colorPerVertex : new SFBool(false),
                          coordIndex : new MFInt32([1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("EndPoints"),
                              point : new MFVec3f([0,0,0,-10,0,10,-9,0,10,-8,0,10,-7,0,10,-6,0,10,-5,0,10,-4,0,10,-3,0,10,-2,0,10,-1,0,10,0,0,10,1,0,10,2,0,10,3,0,10,4,0,10,5,0,10,6,0,10,7,0,10,8,0,10,9,0,10,10,0,10,-10,0,-10,-9,0,-10,-8,0,-10,-7,0,-10,-6,0,-10,-5,0,-10,-4,0,-10,-3,0,-10,-2,0,-10,-1,0,-10,0,0,-10,1,0,-10,2,0,-10,3,0,-10,4,0,-10,5,0,-10,6,0,-10,7,0,-10,8,0,-10,9,0,-10,10,0,-10])})),
                          color : new SFNode(
                            new Color({
                              color : new MFColor([0.4,0.4,0.4,0.8,0.2,0,0.4,0.1,0.05])}))}))}),

                    new Transform({
                      DEF : new SFString("LinesAlignedAlongX"),
                      rotation : new SFRotation([0,1,0,1.57079]),
                      children : new MFNode([
                        new Shape({
                          USE : new SFString("LinesAlignedAlongZ")})])}),

                    new Transform({
                      translation : new SFVec3f([0,-0.5,0]),
                      children : new MFNode([
                        new Billboard({
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  DEF : new SFString("CenterTextNode"),
                                  string : new MFString(["origin"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      DEF : new SFString("FS4"),
                                      justify : new MFString(["MIDDLE","MIDDLE"]),
                                      size : new SFFloat(0.4)}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("DefaultAppearance"),
                                  material : new SFNode(
                                    new Material({}))}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([10,-0.5,10]),
                      children : new MFNode([
                        new Billboard({
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["10 0 10"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("FS4")}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("DefaultAppearance")}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([10,-0.5,-10]),
                      children : new MFNode([
                        new Billboard({
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["10 0 -10"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("FS4")}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("DefaultAppearance")}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([-10,-0.5,10]),
                      children : new MFNode([
                        new Billboard({
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["-10 0 10"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("FS4")}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("DefaultAppearance")}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([-10,-0.5,-10]),
                      children : new MFNode([
                        new Billboard({
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["-10 0 -10"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("FS4")}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("DefaultAppearance")}))})])})])})])})])})])}))});
console.log(X3D0.toXMLNode());
