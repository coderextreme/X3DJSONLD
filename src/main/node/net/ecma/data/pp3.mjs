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
import { SFFloat } from './x3d.mjs';
import { Extrusion } from './x3d.mjs';
import { MFVec2f } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { StringSensor } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { TouchSensor } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
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
              content : new SFString("pp3.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("5 May 2015")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("23 Dec 2022")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("A process pipeline between three spheres (try typing on spheres and blue")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/x3d/pp3.x3d")}),

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
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0.7,1,0]),
                                      transparency : new SFFloat(0.5)}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  creaseAngle : new SFFloat(0.785),
                                  crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]),
                                  spine : new MFVec3f([-2.5,0,0,-1.5,0,0])}))}),
                          /*<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>*/])}),
                      /*right*/

                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0,0.7,1]),
                                      transparency : new SFFloat(0.5)}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  creaseAngle : new SFFloat(0.785),
                                  crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]),
                                  spine : new MFVec3f([1.5,0,0,2.5,0,0])}))}),

                            new Transform({
                              translation : new SFVec3f([2,0,0]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          DEF : new SFString("MaterialLightBlue"),
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new Text({
                                      DEF : new SFString("RightString"),
                                      string : new MFString(["r"])}))})])}),

                            new StringSensor({
                              DEF : new SFString("RightSensor"),
                              enabled : new SFBool(false)}),

                            new TouchSensor({
                              description : new SFString("touch to activate"),
                              DEF : new SFString("RightTouch")})])}),
                      /*up*/

                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0,0.7,1]),
                                      transparency : new SFFloat(0.5)}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  creaseAngle : new SFFloat(0.785),
                                  crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]),
                                  spine : new MFVec3f([0,1.5,0,0,2.5,0])}))}),

                            new Transform({
                              translation : new SFVec3f([-0.5,2,0]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("MaterialLightBlue")}))})),
                                  geometry : new SFNode(
                                    new Text({
                                      DEF : new SFString("UpString"),
                                      string : new MFString(["u"])}))})])}),

                            new StringSensor({
                              DEF : new SFString("UpSensor"),
                              enabled : new SFBool(false)}),

                            new TouchSensor({
                              description : new SFString("touch to activate"),
                              DEF : new SFString("UpTouch")})])}),
                      /*down*/

                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0.7,1,0]),
                                      transparency : new SFFloat(0.5)}))})),
                              geometry : new SFNode(
                                new Extrusion({
                                  creaseAngle : new SFFloat(0.785),
                                  crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]),
                                  spine : new MFVec3f([0,-2.5,0,0,-1.5,0])}))}),
                          /*<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>*/])}),
                      /*center*/

                        new Transform({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,0,0.7])}))})),
                              geometry : new SFNode(
                                new Sphere({}))}),

                            new Transform({
                              scale : new SFVec3f([0.5,0.5,0.5]),
                              translation : new SFVec3f([-0.5,0,1]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("MaterialLightBlue")}))})),
                                  geometry : new SFNode(
                                    new Text({
                                      DEF : new SFString("CenterString")}))})])}),

                            new StringSensor({
                              DEF : new SFString("CenterSensor"),
                              enabled : new SFBool(false)}),

                            new TouchSensor({
                              description : new SFString("touch to activate"),
                              DEF : new SFString("CenterTouch")})])})])}),

                    new Script({
                      DEF : new SFString("RightSingleToMultiString"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFSTRING,
                          name : new SFString("set_rightstring"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("rightlines"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                      ]),
ecmascript:eval (0

, function initialize() {
	rightlines = new MFString("");
}

, function set_rightstring(rightstr) {
	rightlines = new MFString(rightstr);
})}),

                    new Script({
                      DEF : new SFString("UpSingleToMultiString"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFSTRING,
                          name : new SFString("set_upstring"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("uplines"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                      ]),
ecmascript:eval (0

, function initialize() {
	uplines = new MFString("");
}

, function set_upstring(upstr) {
	uplines = new MFString(upstr);
})}),

                    new Script({
                      DEF : new SFString("CenterSingleToMultiString"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFSTRING,
                          name : new SFString("set_centerstring"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("centerlines"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                      ]),
ecmascript:eval (0

, function initialize() {
	centerlines = new MFString("");
}

, function set_centerstring(centerstr) {
	centerlines = new MFString(centerstr);
})}),

                    new ROUTE({
                      fromField : new SFString("enteredText"),
                      fromNode : new SFString("CenterSensor"),
                      toField : new SFString("set_centerstring"),
                      toNode : new SFString("CenterSingleToMultiString")}),

                    new ROUTE({
                      fromField : new SFString("centerlines"),
                      fromNode : new SFString("CenterSingleToMultiString"),
                      toField : new SFString("set_string"),
                      toNode : new SFString("CenterString")}),

                    new ROUTE({
                      fromField : new SFString("isOver"),
                      fromNode : new SFString("CenterTouch"),
                      toField : new SFString("set_enabled"),
                      toNode : new SFString("CenterSensor")}),

                    new ROUTE({
                      fromField : new SFString("enteredText"),
                      fromNode : new SFString("RightSensor"),
                      toField : new SFString("set_rightstring"),
                      toNode : new SFString("RightSingleToMultiString")}),

                    new ROUTE({
                      fromField : new SFString("rightlines"),
                      fromNode : new SFString("RightSingleToMultiString"),
                      toField : new SFString("set_string"),
                      toNode : new SFString("RightString")}),

                    new ROUTE({
                      fromField : new SFString("isOver"),
                      fromNode : new SFString("RightTouch"),
                      toField : new SFString("set_enabled"),
                      toNode : new SFString("RightSensor")}),

                    new ROUTE({
                      fromField : new SFString("enteredText"),
                      fromNode : new SFString("UpSensor"),
                      toField : new SFString("set_upstring"),
                      toNode : new SFString("UpSingleToMultiString")}),

                    new ROUTE({
                      fromField : new SFString("uplines"),
                      fromNode : new SFString("UpSingleToMultiString"),
                      toField : new SFString("set_string"),
                      toNode : new SFString("UpString")}),

                    new ROUTE({
                      fromField : new SFString("isOver"),
                      fromNode : new SFString("UpTouch"),
                      toField : new SFString("set_enabled"),
                      toNode : new SFString("UpSensor")})])}))}),

            new NavigationInfo({}),

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
