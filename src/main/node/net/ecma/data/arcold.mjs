'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Cylinder } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { X3DScript } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("arcold.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/arc.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("an attempt to implement an arc in a graph")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              position : new SFVec3f([0,0,5]),
              description : new SFString("a moving graph")}),

            new Background({
              skyColor : new MFColor([0.4,0.4,0.4]),
              transparency : new SFFloat(0)}),

            new Transform({
              DEF : new SFString("trans1"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("rotscale1"),
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
                              diffuseColor : new SFColor([0.2,0.7,0.7])}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          radius : new SFFloat(0.1)}))})])})])}),

            new Transform({
              DEF : new SFString("trans2"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("rotscale2"),
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
                              diffuseColor : new SFColor([0.2,0.7,0.7])}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          radius : new SFFloat(0.1)}))})])})])}),

            new Transform({
              DEF : new SFString("trans3"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("rotscale3"),
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
                              diffuseColor : new SFColor([0.2,0.7,0.7])}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          radius : new SFFloat(0.1)}))})])})])}),

            new ProtoDeclare({
              name : new SFString("point"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("node"),
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
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.1)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,0,0])}))}))}),

                        new PositionInterpolator({
                          DEF : new SFString("PI1"),
                          key : new MFFloat([0,1]),
                          keyValue : new MFVec3f([0,0,0,0,5,0])}),

                        new TimeSensor({
                          DEF : new SFString("CL1"),
                          cycleInterval : new SFTime(3),
                          loop : new SFBool(true)}),

                        new ROUTE({
                          fromNode : new SFString("CL1"),
                          fromField : new SFString("cycleTime"),
                          toNode : new SFString("MB1"),
                          toField : new SFString("set_location")}),

                        new ROUTE({
                          fromNode : new SFString("CL1"),
                          fromField : new SFString("fraction_changed"),
                          toNode : new SFString("PI1"),
                          toField : new SFString("set_fraction")}),

                        new ROUTE({
                          fromNode : new SFString("MB1"),
                          fromField : new SFString("keyValue"),
                          toNode : new SFString("PI1"),
                          toField : new SFString("keyValue")}),

                        new ROUTE({
                          fromNode : new SFString("PI1"),
                          fromField : new SFString("value_changed"),
                          toNode : new SFString("node"),
                          toField : new SFString("set_translation")}),
                      X3DScript : new SFNode(
                        new X3DScript({
                          DEF : new SFString("MB1"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("translation"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("50 50 0")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("old"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0 0 0")}),

                            new field({
                              type : field.TYPE_SFTIME,
                              name : new SFString("set_location"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_MFVEC3F,
                              name : new SFString("keyValue"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}))])})])}))}),
          { "#comment" : new CommentsBlock("from doug sanden") },

            new ProtoDeclare({
              name : new SFString("x3dconnector"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("startnode"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("endnode"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("transnode"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("rotscalenode"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("set_startpoint"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("set_endpoint"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  X3DScript : new SFNode(
                    new X3DScript({
                      DEF : new SFString("S1"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("startnode"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("endnode"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("transnode"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("rotscalenode"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("set_startpoint"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("set_endpoint"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("startnode"),
                              protoField : new SFString("startnode")}),

                            new connect({
                              nodeField : new SFString("endnode"),
                              protoField : new SFString("endnode")}),

                            new connect({
                              nodeField : new SFString("transnode"),
                              protoField : new SFString("transnode")}),

                            new connect({
                              nodeField : new SFString("rotscalenode"),
                              protoField : new SFString("rotscalenode")}),

                            new connect({
                              nodeField : new SFString("set_startpoint"),
                              protoField : new SFString("set_startpoint")}),

                            new connect({
                              nodeField : new SFString("set_endpoint"),
                              protoField : new SFString("set_endpoint")})])}))])}))}))}),

            new ProtoInstance({
              name : new SFString("point"),
              DEF : new SFString("G1")}),

            new ProtoInstance({
              name : new SFString("point"),
              DEF : new SFString("G2")}),

            new ProtoInstance({
              name : new SFString("point"),
              DEF : new SFString("G3")}),

            new ProtoInstance({
              name : new SFString("point"),
              DEF : new SFString("G4")}),

            new ProtoInstance({
              name : new SFString("x3dconnector"),
              DEF : new SFString("connector1"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("startnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G1")})])}),

                new fieldValue({
                  name : new SFString("endnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G2")})])}),

                new fieldValue({
                  name : new SFString("transnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("trans1")})])}),

                new fieldValue({
                  name : new SFString("rotscalenode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("rotscale1")})])})])}),

            new ProtoInstance({
              name : new SFString("x3dconnector"),
              DEF : new SFString("connector2"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("startnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G1")})])}),

                new fieldValue({
                  name : new SFString("endnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G3")})])}),

                new fieldValue({
                  name : new SFString("transnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("trans2")})])}),

                new fieldValue({
                  name : new SFString("rotscalenode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("rotscale2")})])})])}),

            new ProtoInstance({
              name : new SFString("x3dconnector"),
              DEF : new SFString("connector3"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("startnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G1")})])}),

                new fieldValue({
                  name : new SFString("endnode"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("G4")})])}),

                new fieldValue({
                  name : new SFString("transnode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("trans3")})])}),

                new fieldValue({
                  name : new SFString("rotscalenode"),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("rotscale3")})])})])}),

            new ROUTE({
              fromNode : new SFString("G1"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector1"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("G2"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector1"),
              toField : new SFString("set_endpoint")}),

            new ROUTE({
              fromNode : new SFString("G1"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector2"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("G3"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector2"),
              toField : new SFString("set_endpoint")}),

            new ROUTE({
              fromNode : new SFString("G1"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector3"),
              toField : new SFString("set_startpoint")}),

            new ROUTE({
              fromNode : new SFString("G4"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("connector3"),
              toField : new SFString("set_endpoint")})])}))});
console.log(X3D0.toXMLNode());
