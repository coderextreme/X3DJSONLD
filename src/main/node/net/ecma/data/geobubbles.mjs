'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { GeoViewpoint } from './x3d.mjs';
import { SFVec3d } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { GeoPositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFVec3d } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Geospatial"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("geobubbles.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/geobubbles.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("geo bubbles")})])})),
      Scene : new SFNode(
        new Scene({
          { "#comment" : new CommentsBlock("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/") },
          { "#comment" : new CommentsBlock("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/") },
          children : new MFNode([
            new GeoViewpoint({
              DEF : new SFString("Tour"),
              position : new SFVec3d([0,0,4]),
              orientation : new SFRotation([1,0,0,0]),
              description : new SFString("Tour Views")}),

            new Background({
              backUrl : new MFString(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]),
              bottomUrl : new MFString(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]),
              frontUrl : new MFString(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]),
              leftUrl : new MFString(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]),
              rightUrl : new MFString(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]),
              topUrl : new MFString(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]),
              skyColor : new MFColor([0,0,0]),
              transparency : new SFFloat(0)}),

            new Transform({
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
                          diffuseColor : new SFColor([0.7,0.7,0.7]),
                          specularColor : new SFColor([0.5,0.5,0.5])}))}))})])}),

            new TimeSensor({
              DEF : new SFString("TourTime"),
              cycleInterval : new SFTime(5),
              loop : new SFBool(true)}),

            new GeoPositionInterpolator({
              DEF : new SFString("TourPosition"),
              key : new MFFloat([0,1]),
              keyValue : new MFVec3d([0.0015708,0,4,0,0.0015708,4])}),

            new ROUTE({
              fromNode : new SFString("TourTime"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("RandomTourTime"),
              toField : new SFString("set_cycle")}),

            new ROUTE({
              fromNode : new SFString("RandomTourTime"),
              fromField : new SFString("position"),
              toNode : new SFString("TourPosition"),
              toField : new SFString("keyValue")}),

            new ROUTE({
              fromNode : new SFString("TourTime"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("TourPosition"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TourPosition"),
              fromField : new SFString("geovalue_changed"),
              toNode : new SFString("Tour"),
              toField : new SFString("set_position")})])}))});
console.log(X3D0.toXMLNode());