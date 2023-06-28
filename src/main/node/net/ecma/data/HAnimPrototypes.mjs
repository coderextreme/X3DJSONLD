'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          /*Originally these fundamental prototypes were defined in InterchangableActorsViaDynamicRoutingPrototypes.x3d*/
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimPrototypes.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes.")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes.")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint).")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("Need support for skin")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Ozan APAYDIN, Don Brutzman")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Ozan APAYDIN, Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("15 November 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("23 May 2020")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("upgrade to match support requirements for HAnim 2.2")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Specifications/HAnim2001")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.HAnim.org")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Models")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Specifications")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("InterchangableActorsViaDynamicRoutingPrototypes.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          /***********Human Model Protypes**********/
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Humanoid1_1"),
              appinfo : new SFString("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model."),
              documentation : new SFString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  /*HAnim v1.1 field definitions*/
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("name"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("version"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("legal values: 1.1 or 2.0"),
                      value : new SFString("1.1")}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("humanoidVersion"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Version of the humanoid being modeled. Hint: HAnim version 2.0")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("info"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("rotation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("scaleOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxCenter"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxSize"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1 -1 -1")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("humanoidBody"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton."),
                      documentation : new SFString("http://HAnim.org/Specifications/HAnim1.1/#humanoid")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("skeleton"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody"),
                      documentation : new SFString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("joints"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Container field for Joint nodes")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("segments"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Container field for Segment nodes")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("sites"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Container field for Site nodes")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("viewpoints"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Container field for Viewpoint nodes")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("skinCoord"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Hint: HAnim version 2.0"),
                      /*NULL*/}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("skinNormal"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Hint: HAnim version 2.0"),
                      /*NULL*/})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("HumanoidTransform"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")}),

                            new connect({
                              nodeField : new SFString("rotation"),
                              protoField : new SFString("rotation")}),

                            new connect({
                              nodeField : new SFString("center"),
                              protoField : new SFString("center")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("scale")}),

                            new connect({
                              nodeField : new SFString("scaleOrientation"),
                              protoField : new SFString("scaleOrientation")}),

                            new connect({
                              nodeField : new SFString("bboxCenter"),
                              protoField : new SFString("bboxCenter")}),

                            new connect({
                              nodeField : new SFString("bboxSize"),
                              protoField : new SFString("bboxSize")})])})),
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("HumanoidGroup1"),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("humanoidBody")})])}))}),

                        new Group({
                          DEF : new SFString("HumanoidGroup2"),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("skeleton")})])}))}),

                        new Group({
                          DEF : new SFString("HumanoidGroup3"),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("viewpoints")})])}))})])})])}))}),

            new ProtoDeclare({
              name : new SFString("Joint"),
              appinfo : new SFString("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid."),
              documentation : new SFString("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("name"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("ulimit"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("llimit"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("limitOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("skinCoordIndex"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("skinCoordWeight"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("stiffness"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("rotation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("scaleOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxCenter"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxSize"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1 -1 -1")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("addChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("removeChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("JointTransform"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")}),

                            new connect({
                              nodeField : new SFString("rotation"),
                              protoField : new SFString("rotation")}),

                            new connect({
                              nodeField : new SFString("center"),
                              protoField : new SFString("center")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("scale")}),

                            new connect({
                              nodeField : new SFString("scaleOrientation"),
                              protoField : new SFString("scaleOrientation")}),

                            new connect({
                              nodeField : new SFString("bboxCenter"),
                              protoField : new SFString("bboxCenter")}),

                            new connect({
                              nodeField : new SFString("bboxSize"),
                              protoField : new SFString("bboxSize")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")}),

                            new connect({
                              nodeField : new SFString("addChildren"),
                              protoField : new SFString("addChildren")}),

                            new connect({
                              nodeField : new SFString("removeChildren"),
                              protoField : new SFString("removeChildren")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("Segment"),
              appinfo : new SFString("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node."),
              documentation : new SFString("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("name"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("mass"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("centerOfMass"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("momentsOfInertia"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0 0 0 0 0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxCenter"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxSize"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1 -1 -1")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("addChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("removeChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("coord"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("contains Coordinate nodes"),
                      /*NULL*/}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("displacers"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("contains Displacer nodes")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("SegmentGroup"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("bboxCenter"),
                              protoField : new SFString("bboxCenter")}),

                            new connect({
                              nodeField : new SFString("bboxSize"),
                              protoField : new SFString("bboxSize")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")}),

                            new connect({
                              nodeField : new SFString("addChildren"),
                              protoField : new SFString("addChildren")}),

                            new connect({
                              nodeField : new SFString("removeChildren"),
                              protoField : new SFString("removeChildren")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("Site"),
              appinfo : new SFString("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds)."),
              documentation : new SFString("http://HAnim.org/Specifications/HAnim2001/part1/Site.html"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("name"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("rotation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("scaleOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxCenter"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxSize"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1 -1 -1")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("addChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("removeChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("SiteTransform"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")}),

                            new connect({
                              nodeField : new SFString("rotation"),
                              protoField : new SFString("rotation")}),

                            new connect({
                              nodeField : new SFString("center"),
                              protoField : new SFString("center")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("scale")}),

                            new connect({
                              nodeField : new SFString("scaleOrientation"),
                              protoField : new SFString("scaleOrientation")}),

                            new connect({
                              nodeField : new SFString("bboxCenter"),
                              protoField : new SFString("bboxCenter")}),

                            new connect({
                              nodeField : new SFString("bboxSize"),
                              protoField : new SFString("bboxSize")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")}),

                            new connect({
                              nodeField : new SFString("addChildren"),
                              protoField : new SFString("addChildren")}),

                            new connect({
                              nodeField : new SFString("removeChildren"),
                              protoField : new SFString("removeChildren")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("Displacer"),
              appinfo : new SFString("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment."),
              documentation : new SFString("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("name"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("coordIndex"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("displacements"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new WorldInfo({
                      info : new MFString(["null body node"])})])}))}),

            new Shape({
              geometry : new SFNode(
                new Text({
                  string : new MFString(["Humanoid Animation","(HAnim) prototype","implementations"]),
                  fontStyle : new SFNode(
                    new FontStyle({
                      justify : new MFString(["MIDDLE","MIDDLE"])}))})),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      ambientIntensity : new SFFloat(0.25),
                      diffuseColor : new SFColor([0.795918,0.505869,0.093315]),
                      shininess : new SFFloat(0.39),
                      specularColor : new SFColor([0.923469,0.428866,0.006369]),
                      /*Universal Media Library: Autumn 9*/}))}))})])}))});
console.log(X3D0.toXMLNode());
