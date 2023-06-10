'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Extrusion } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { MFVec2f } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("qq3.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("11 Jan 2015")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("05 May 2017")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("12 extrusions to test prototype expander")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/x3d/qq3.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Process"),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      /*left*/
                      children : new MFNode([
                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new Shape({
                              DEF : new SFString("ShapeLeftDown"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0.7,1,0])}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  spine : new MFVec3f([-2.5,0,0,-1.5,0,0]),
                                  creaseAngle : new SFFloat(0.785),
                                  crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])}))})])}),
                      /*right*/

                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new Shape({
                              DEF : new SFString("ShapeUpRight"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0,0.7,1])}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  spine : new MFVec3f([1.5,0,0,2.5,0,0]),
                                  creaseAngle : new SFFloat(0.785),
                                  crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])}))})])}),
                      /*up*/

                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new Shape({
                              USE : new SFString("ShapeUpRight")})])}),
                      /*down*/

                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new Shape({
                              USE : new SFString("ShapeLeftDown")})])})])})])}))}),

            new Viewpoint({
              description : new SFString("Process pipes"),
              orientation : new SFRotation([1,0,0,-0.4]),
              position : new SFVec3f([0,5,12])}),

            new Transform({
              translation : new SFVec3f([0,-2.5,0]),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Process")})])}),

            new Transform({
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Process")})])}),

            new Transform({
              translation : new SFVec3f([0,2.5,0]),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Process")})])})])}))});
console.log(X3D0.toXMLNode());
