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
import { MFColor } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
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
              name : new SFString("title"),
              content : new SFString("bubs3.x3d")}),

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
              content : new SFString("https://coderextreme.net/X3DJSONLD/bubs.x3d")})])})),
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
              topUrl : new MFString(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]),
              skyColor : new MFColor([0,0,0]),
              transparency : new SFFloat(0)}),

            new Transform({
              DEF : new SFString("DECLBubble_bubbleA"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.25)})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0,0]),
                          transparency : new SFFloat(0.2)}))}))}),

                new TimeSensor({
                  DEF : new SFString("DECLBubble_bubbleA_bubbleClock"),
                  cycleInterval : new SFTime(10),
                  loop : new SFBool(true)}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleA_bounce"),
                  fromField : new SFString("translation_changed"),
                  toNode : new SFString("DECLBubble_transform"),
                  toField : new SFString("set_translation")}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleA_bounce"),
                  fromField : new SFString("scale_changed"),
                  toNode : new SFString("DECLBubble_transform"),
                  toField : new SFString("set_scale")}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleA_bubbleClock"),
                  fromField : new SFString("fraction_changed"),
                  toNode : new SFString("DECLBubble_bubbleA_bounce"),
                  toField : new SFString("set_fraction")}),
              X3DScript : new SFNode(
                new X3DScript({
                  DEF : new SFString("DECLBubble_bubbleA_bounce"),
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
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])}))])}),

            new Transform({
              DEF : new SFString("DECLBubble_bubbleB"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.25)})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0,0]),
                          transparency : new SFFloat(0.2)}))}))}),

                new TimeSensor({
                  DEF : new SFString("DECLBubble_bubbleB_bubbleClock"),
                  cycleInterval : new SFTime(10),
                  loop : new SFBool(true)}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleB_bounce"),
                  fromField : new SFString("translation_changed"),
                  toNode : new SFString("DECLBubble_transform"),
                  toField : new SFString("set_translation")}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleB_bounce"),
                  fromField : new SFString("scale_changed"),
                  toNode : new SFString("DECLBubble_transform"),
                  toField : new SFString("set_scale")}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleB_bubbleClock"),
                  fromField : new SFString("fraction_changed"),
                  toNode : new SFString("DECLBubble_bubbleB_bounce"),
                  toField : new SFString("set_fraction")}),
              X3DScript : new SFNode(
                new X3DScript({
                  DEF : new SFString("DECLBubble_bubbleB_bounce"),
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
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])}))])}),

            new Transform({
              DEF : new SFString("DECLBubble_bubbleC"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.25)})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0,0]),
                          transparency : new SFFloat(0.2)}))}))}),

                new TimeSensor({
                  DEF : new SFString("DECLBubble_bubbleC_bubbleClock"),
                  cycleInterval : new SFTime(10),
                  loop : new SFBool(true)}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleC_bounce"),
                  fromField : new SFString("translation_changed"),
                  toNode : new SFString("DECLBubble_transform"),
                  toField : new SFString("set_translation")}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleC_bounce"),
                  fromField : new SFString("scale_changed"),
                  toNode : new SFString("DECLBubble_transform"),
                  toField : new SFString("set_scale")}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleC_bubbleClock"),
                  fromField : new SFString("fraction_changed"),
                  toNode : new SFString("DECLBubble_bubbleC_bounce"),
                  toField : new SFString("set_fraction")}),
              X3DScript : new SFNode(
                new X3DScript({
                  DEF : new SFString("DECLBubble_bubbleC_bounce"),
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
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])}))])}),

            new Transform({
              DEF : new SFString("DECLBubble_bubbleD"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.25)})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0,0]),
                          transparency : new SFFloat(0.2)}))}))}),

                new TimeSensor({
                  DEF : new SFString("DECLBubble_bubbleD_bubbleClock"),
                  cycleInterval : new SFTime(10),
                  loop : new SFBool(true)}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleD_bounce"),
                  fromField : new SFString("translation_changed"),
                  toNode : new SFString("DECLBubble_transform"),
                  toField : new SFString("set_translation")}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleD_bounce"),
                  fromField : new SFString("scale_changed"),
                  toNode : new SFString("DECLBubble_transform"),
                  toField : new SFString("set_scale")}),

                new ROUTE({
                  fromNode : new SFString("DECLBubble_bubbleD_bubbleClock"),
                  fromField : new SFString("fraction_changed"),
                  toNode : new SFString("DECLBubble_bubbleD_bounce"),
                  toField : new SFString("set_fraction")}),
              X3DScript : new SFNode(
                new X3DScript({
                  DEF : new SFString("DECLBubble_bubbleD_bounce"),
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
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])}))])})])}))});
console.log(X3D0.toXMLNode());
