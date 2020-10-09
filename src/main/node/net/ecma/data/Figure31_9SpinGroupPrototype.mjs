'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { OrientationInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFRotation } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { TouchSensor } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("Figure31_9SpinGroupPrototype.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("24 October 2000")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Figure31_9SpinGroupPrototype.x3d")}),

            new ProtoDeclare({
              name : new SFString("SpinGroup"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      { "#comment" : new CommentsBlock("NULL node initialization") }}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("cycleInterval"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("loop"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("false")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("stopTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("SpinGroupTransform"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")})])}))}),
                  { "#comment" : new CommentsBlock("following nodes will not be rendered, only the first node of a ProtoBody is drawn") },

                    new TimeSensor({
                      DEF : new SFString("SpinGroupClock"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("cycleInterval"),
                              protoField : new SFString("cycleInterval")}),

                            new connect({
                              nodeField : new SFString("loop"),
                              protoField : new SFString("loop")}),

                            new connect({
                              nodeField : new SFString("startTime"),
                              protoField : new SFString("startTime")}),

                            new connect({
                              nodeField : new SFString("stopTime"),
                              protoField : new SFString("stopTime")})])}))}),

                    new OrientationInterpolator({
                      DEF : new SFString("Spinner"),
                      key : new MFFloat([0,0.5,1]),
                      keyValue : new MFRotation([0,1,0,0,0,1,0,3.14,0,1,0,6.28])}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("SpinGroupClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("Spinner")}),

                    new ROUTE({
                      fromField : new SFString("value_changed"),
                      fromNode : new SFString("Spinner"),
                      toField : new SFString("set_rotation"),
                      toNode : new SFString("SpinGroupTransform")})])}))}),
          { "#comment" : new CommentsBlock("Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare).") },

            new Viewpoint({
              description : new SFString("Click on blue crossbar to activate second SpinGroup"),
              orientation : new SFRotation([1,0,0,-0.52]),
              position : new SFVec3f([0,18,30])}),
          { "#comment" : new CommentsBlock("Create an instance, meaning actual nodes that render") },

            new ProtoInstance({
              name : new SFString("SpinGroup"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("cycleInterval"),
                  value : new SFString("8")}),

                new fieldValue({
                  name : new SFString("loop"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("children"),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([25,2,2])})),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("Green"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,1,0.3])}))}))}),

                    new Shape({
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([2,25,2])})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("Green")}))}),

                    new ProtoInstance({
                      name : new SFString("SpinGroup"),
                      DEF : new SFString("SecondSpinGroup"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("cycleInterval"),
                          value : new SFString("4")}),

                        new fieldValue({
                          name : new SFString("loop"),
                          value : new SFString("true")}),

                        new fieldValue({
                          name : new SFString("stopTime"),
                          value : new SFString("1")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("ActivateSecondSpinGroup"),
                              description : new SFString("Activate second SpinGroup by clicking blue bar")}),

                            new Shape({
                              geometry : new SFNode(
                                new Box({
                                  size : new SFVec3f([2,2.05,25])})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0,0.3,1])}))}))})])}),
                      { "#comment" : new CommentsBlock("stopTime > startTime ensures that initial state is stopped") }])})])})])}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("ActivateSecondSpinGroup"),
              toField : new SFString("startTime"),
              toNode : new SFString("SecondSpinGroup")})])}))});
console.log(X3D0.toXMLNode());
