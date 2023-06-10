'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("creator"),
              content : new SFString("Carlson, I")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Carlson, II")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Carlson, III")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0,0])}))})),
                  geometry : new SFNode(
                    new Box({}))})])}),

            new Transform({
              rotation : new SFRotation([7,8,9,3.14]),
              scale : new SFVec3f([4,5,6]),
              translation : new SFVec3f([1,2,3])})])}))});
console.log(X3D0.toXMLNode());
