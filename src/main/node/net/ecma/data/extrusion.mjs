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
import { Extrusion } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { MFVec2f } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { X3DScript } from './x3d.mjs';
import { field } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("creator"),
              content : new SFString("John W Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("December 13 2015")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("extrusion.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/force.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("beginnings of a force directed graph in 3D")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")})])})),
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
                    new Extrusion({
                      DEF : new SFString("extrusion"),
                      spine : new MFVec3f([-50,-50,0,50,50,0]),
                      creaseAngle : new SFFloat(0.785),
                      crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0])})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,1,0])}))}))}),

                new TimeSensor({
                  DEF : new SFString("TourTime"),
                  loop : new SFBool(true)}),

                new ROUTE({
                  fromNode : new SFString("TourTime"),
                  fromField : new SFString("cycleTime"),
                  toNode : new SFString("MoveCylinder"),
                  toField : new SFString("set_cycle")}),

                new ROUTE({
                  fromNode : new SFString("MoveCylinder"),
                  fromField : new SFString("spine_changed"),
                  toNode : new SFString("extrusion"),
                  toField : new SFString("spine")}),
              X3DScript : new SFNode(
                new X3DScript({
                  DEF : new SFString("MoveCylinder"),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("set_cycle"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("spine"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-50 -50 0 50 50 0")})])}))])})])}))});
console.log(X3D0.toXMLNode());
