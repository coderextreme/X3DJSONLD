'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { IndexedFaceSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { Normal } from './x3d.mjs';
import { Color } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ifscubeworks.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Template for an Indexed Face Set")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("4 April 2017")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      DEF : new SFString("IndexedFaceSet"),
                      coordIndex : new MFInt32([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]),
                      normalIndex : new MFInt32([0,0,1,2,3,4,5]),
                      normalPerVertex : new SFBool(false),
                      colorIndex : new MFInt32([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0,0,1,0,1,1,1,1,1,1,0,1])})),
                      normal : new SFNode(
                        new Normal({
                          vector : new MFVec3f([1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1])})),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0,1,0])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
