'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { DirectionalLight } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { IndexedFaceSet } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("flower.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a flower")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),

            new DirectionalLight({
              direction : new SFVec3f([0,-0.8,-0.2]),
              intensity : new SFFloat(0.5)}),

            new Background({
              skyColor : new MFColor([1,1,1])}),

            new Viewpoint({
              description : new SFString("One mathematical orbital"),
              position : new SFVec3f([0,0,50])}),

            new Transform({
              translation : new SFVec3f([0,-1,1]),
              rotation : new SFRotation([0,1,0,3.1415926]),
              scale : new SFVec3f([1.5,1.5,1.5]),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(0.1),
                          diffuseColor : new SFColor([0.9,0.3,0.3]),
                          specularColor : new SFColor([0.8,0.8,0.8]),
                          shininess : new SFFloat(0.145)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      ccw : new SFBool(false),
                      convex : new SFBool(false),
                      coordIndex : new MFInt32([0,1,2,-1]),
                      DEF : new SFString("Orbit"),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("OrbitCoordinates"),
                          point : new MFVec3f([0,0,1,0,1,0,1,0,0])}))}))})])}),

            new TimeSensor({
              DEF : new SFString("Clock"),
              cycleInterval : new SFTime(16),
              loop : new SFBool(true)}),

            new ROUTE({
              fromNode : new SFString("OrbitScript"),
              fromField : new SFString("coordIndexes"),
              toNode : new SFString("Orbit"),
              toField : new SFString("coordIndex")}),

            new ROUTE({
              fromNode : new SFString("OrbitScript"),
              fromField : new SFString("coordinates"),
              toNode : new SFString("OrbitCoordinates"),
              toField : new SFString("point")}),

            new ROUTE({
              fromNode : new SFString("Clock"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("OrbitScript"),
              toField : new SFString("set_fraction")})])}))});
console.log(X3D0.toXMLNode());
