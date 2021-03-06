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
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { field } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("bubs2.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Tour around a prismatic sphere")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/geo.x3d")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("13 March 2016")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["EXAMINE"]}),

            new Viewpoint({
              position : new SFVec3f([0,0,4]),
              orientation : new SFRotation([1,0,0,0]),
              description : new SFString("Bubbles in action")}),

            new Background({
              backUrl : new MFString(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"]),
              bottomUrl : new MFString(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"]),
              frontUrl : new MFString(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"]),
              leftUrl : new MFString(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"]),
              rightUrl : new MFString(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"]),
              topUrl : new MFString(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])}),

            new ProtoDeclare({
              name : new SFString("Bubble"),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("body_trans"),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.25)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,0,0]),
                                  transparency : new SFFloat(0.2)}))}))}),

                        new Script({
                          DEF : new SFString("bounce"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("scale"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("1 1 1")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("translation"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0 0 0")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("velocity"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0 0 0")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("scalvel"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0 0 0")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("set_fraction"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
                          .setSourceCode("ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\n"+
"		translation = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scalvel === 'undefined') {\n"+
"		scalvel = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = new SFVec3f(1, 1, 1);\n"+
"    }\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}")])}),

                        new TimeSensor({
                          DEF : new SFString("bubbleClock"),
                          cycleInterval : new SFTime(10),
                          loop : new SFBool(true)}),

                        new ROUTE({
                          fromNode : new SFString("bounce"),
                          fromField : new SFString("translation_changed"),
                          toNode : new SFString("body_trans"),
                          toField : new SFString("set_translation")}),

                        new ROUTE({
                          fromNode : new SFString("bounce"),
                          fromField : new SFString("scale_changed"),
                          toNode : new SFString("body_trans"),
                          toField : new SFString("set_scale")}),

                        new ROUTE({
                          fromNode : new SFString("bubbleClock"),
                          fromField : new SFString("fraction_changed"),
                          toNode : new SFString("bounce"),
                          toField : new SFString("set_fraction")})])})])}))}),

            new ProtoInstance({
              name : new SFString("Bubble"),
              DEF : new SFString("bubbleA")}),

            new ProtoInstance({
              name : new SFString("Bubble"),
              DEF : new SFString("bubbleB")}),

            new ProtoInstance({
              name : new SFString("Bubble"),
              DEF : new SFString("bubbleC")}),

            new ProtoInstance({
              name : new SFString("Bubble"),
              DEF : new SFString("bubbleD")})])}))});
console.log(X3D0.toXMLNode());
