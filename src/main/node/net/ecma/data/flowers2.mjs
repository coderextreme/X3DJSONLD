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
import { NavigationInfo } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { DirectionalLight } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { OrientationInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFRotation } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { IndexedFaceSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { X3DScript } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Scripting"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("flowers2.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("transcriber"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("23 January 2005")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("21 March 2018")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manually written")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),

            new Viewpoint({
              description : new SFString("Two mathematical orbitals"),
              position : new SFVec3f([0,0,50])}),

            new Group({
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new DirectionalLight({
                  direction : new SFVec3f([1,1,1])}),

                new ProtoDeclare({
                  name : new SFString("orbit"),
                  ProtoInterface : new SFNode(
                    new ProtoInterface({
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("translation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("-8 0 0")}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("diffuseColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("1 0.5 0")}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("specularColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("1 0.5 0")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("transparency"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          value : new SFString("0.75")})])})),
                  ProtoBody : new SFNode(
                    new ProtoBody({
                      children : new MFNode([
                        new Group({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Clock"),
                              cycleInterval : new SFTime(16),
                              loop : new SFBool(true)}),

                            new OrientationInterpolator({
                              DEF : new SFString("OrbitPath"),
                              key : new MFFloat([0,0.5,1]),
                              keyValue : new MFRotation([1,0,0,0,1,0,0,3.14,1,0,0,6.28])}),

                            new Transform({
                              DEF : new SFString("OrbitTransform"),
                              bboxCenter : new SFVec3f([0,0,0]),
                              bboxSize : new SFVec3f([-1,-1,-1]),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("translation"),
                                      protoField : new SFString("translation")})])})),
                              children : new MFNode([
                                new Shape({
                                  bboxCenter : new SFVec3f([0,0,0]),
                                  bboxSize : new SFVec3f([-1,-1,-1]),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          IS : new SFNode(
                                            new IS({
                                              connect : new MFNode([
                                                new connect({
                                                  nodeField : new SFString("diffuseColor"),
                                                  protoField : new SFString("diffuseColor")}),

                                                new connect({
                                                  nodeField : new SFString("specularColor"),
                                                  protoField : new SFString("specularColor")}),

                                                new connect({
                                                  nodeField : new SFString("transparency"),
                                                  protoField : new SFString("transparency")})])}))}))})),
                                  { "#comment" : new CommentsBlock("<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>") },
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
                              toField : new SFString("set_fraction")}),

                            new ROUTE({
                              fromNode : new SFString("OrbitPath"),
                              fromField : new SFString("value_changed"),
                              toNode : new SFString("OrbitTransform"),
                              toField : new SFString("rotation")}),

                            new ROUTE({
                              fromNode : new SFString("Clock"),
                              fromField : new SFString("fraction_changed"),
                              toNode : new SFString("OrbitPath"),
                              toField : new SFString("set_fraction")}),
                          X3DScript : new SFNode(
                            new X3DScript({
                              DEF : new SFString("OrbitScript"),
                              field : new MFNode([
                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("set_fraction"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_MFVEC3F,
                                  name : new SFString("coordinates"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_MFINT32,
                                  name : new SFString("coordIndexes"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("e"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("5")}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("f"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("5")}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("g"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("5")}),

                                new field({
                                  type : field.TYPE_SFFLOAT,
                                  name : new SFString("h"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("5")}),

                                new field({
                                  type : field.TYPE_SFINT32,
                                  name : new SFString("resolution"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("50")})])}))])})])}))}),

                new ProtoInstance({
                  name : new SFString("orbit"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("translation"),
                      value : new SFString("-8 0 0")}),

                    new fieldValue({
                      name : new SFString("diffuseColor"),
                      value : new SFString("1 0.5 0")}),

                    new fieldValue({
                      name : new SFString("specularColor"),
                      value : new SFString("1 0.5 0")}),

                    new fieldValue({
                      name : new SFString("transparency"),
                      value : new SFString("0.75")})])}),

                new ProtoInstance({
                  name : new SFString("orbit"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("translation"),
                      value : new SFString("8 0 0")}),

                    new fieldValue({
                      name : new SFString("diffuseColor"),
                      value : new SFString("0 0.5 1")}),

                    new fieldValue({
                      name : new SFString("specularColor"),
                      value : new SFString("0 0.5 1")}),

                    new fieldValue({
                      name : new SFString("transparency"),
                      value : new SFString("0.5")})])})])})])}))});
console.log(X3D0.toXMLNode());