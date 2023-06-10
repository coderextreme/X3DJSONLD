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
import { Shape } from './x3d.mjs';
import { Extrusion } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { MFVec2f } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ExtrusionHeart.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Simple extrusion of a Valentine heart.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Class participants in course Introduction to VRML/X3D.")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("14 February 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("27 November 2015")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              description : new SFString("Extrusion Heart"),
              orientation : new SFRotation([1,0,0,1.57]),
              position : new SFVec3f([0,-4,0])}),

            new Transform({
              translation : new SFVec3f([0,-0.5,0]),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Extrusion({
                      creaseAngle : new SFFloat(3.14159),
                      crossSection : new MFVec2f([0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8]),
                      scale : new MFVec2f([0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01]),
                      solid : new SFBool(false),
                      spine : new MFVec3f([0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0])})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.8,0.3,0.3])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
