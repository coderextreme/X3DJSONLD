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
var WorldInfo = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ViewFrustumPrototype.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("16 August 2008")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("ViewFrustumExample.x3d")}),

            new meta({
              name : new SFString("drawing"),
              content : new SFString("ViewFrustumComputation.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("ViewFrustumOverheadView.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("ViewFrustumObliqueView.png")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("view culling frustum")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("ViewFrustumPrototype.x3d")}),

            new ProtoDeclare({
              name : new SFString("ViewFrustum"),
              appinfo : new SFString("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("ViewpointNode"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("required: insert Viewpoint DEF or USE node for view of interest"),
                      /*NULL node, ProtoInstance must provide*/}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("NavigationInfoNode"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("required: insert NavigationInfo DEF or USE node of interest"),
                      /*NULL node, ProtoInstance must provide*/}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("visible"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("whether or not frustum geometry is rendered"),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("lineColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"),
                      value : new SFString("0.9 0.9 0.9")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("frustumColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"),
                      value : new SFString("0.8 0.8 0.8")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("transparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("transparency of ViewFrustum hull geometry, default value 0.5"),
                      value : new SFString("0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("aspectRatio"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("assumed ratio height/width, default value 0.75"),
                      value : new SFString("0.75")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("trace"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("debug support, default false"),
                      value : new SFString("false")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("VisibilitySwitch"),
                      whichChoice : new SFInt32(-1),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("PositionTransform"),
                          rotation : new SFRotation([0,1,0,3.14159]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("OrientationTransform"),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("FrustumLines"),
                                      coordIndex : new MFInt32([0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("FrustumCoordinate"),
                                          point : new MFVec3f([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          IS : new SFNode(
                                            new IS({
                                              connect : new MFNode([
                                                new connect({
                                                  nodeField : new SFString("emissiveColor"),
                                                  protoField : new SFString("lineColor")})])}))}))}))})),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Extrusion({
                                      DEF : new SFString("FrustumExtrusion")})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      DEF : new SFString("FrustumAppearance"),
                                      material : new SFNode(
                                        new Material({
                                          IS : new SFNode(
                                            new IS({
                                              connect : new MFNode([
                                                new connect({
                                                  nodeField : new SFString("diffuseColor"),
                                                  protoField : new SFString("frustumColor")}),

                                                new connect({
                                                  nodeField : new SFString("transparency"),
                                                  protoField : new SFString("transparency")})])}))}))}))})),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Sphere({
                                      radius : new SFFloat(0.08)})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("FrustumAppearance")}))}))})])})])}),

                    new Script({
                      DEF : new SFString("GeometryComputationScript"),
                      directOutput : new SFBool(true),
                      url : new MFString(["ViewFrustumPrototypeScript.js"]),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("visible"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Whether or not frustum geometry is rendered")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("visibilitySwitchSelection"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("Adjust Switch selection to make geometry visible or not")}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ViewpointNode"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          /*initialization node (if any) goes here*/}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("NavigationInfoNode"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          /*initialization node (if any) goes here*/}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("FrustumCoordinate"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Coordinate({
                              USE : new SFString("FrustumCoordinate")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("FrustumExtrusion"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Extrusion({
                              USE : new SFString("FrustumExtrusion")})])}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("recompute"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("aspectRatio"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("assumed ratio height/width")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("position_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("orientation_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("spine_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("scale_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("point_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("trace"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("visible"),
                              protoField : new SFString("visible")}),

                            new connect({
                              nodeField : new SFString("ViewpointNode"),
                              protoField : new SFString("ViewpointNode")}),

                            new connect({
                              nodeField : new SFString("NavigationInfoNode"),
                              protoField : new SFString("NavigationInfoNode")}),

                            new connect({
                              nodeField : new SFString("aspectRatio"),
                              protoField : new SFString("aspectRatio")}),

                            new connect({
                              nodeField : new SFString("trace"),
                              protoField : new SFString("trace")})])})])}),

                    new ROUTE({
                      fromField : new SFString("visibilitySwitchSelection"),
                      fromNode : new SFString("GeometryComputationScript"),
                      toField : new SFString("whichChoice"),
                      toNode : new SFString("VisibilitySwitch")}),

                    new ROUTE({
                      fromField : new SFString("position_changed"),
                      fromNode : new SFString("GeometryComputationScript"),
                      toField : new SFString("translation"),
                      toNode : new SFString("PositionTransform")}),

                    new ROUTE({
                      fromField : new SFString("orientation_changed"),
                      fromNode : new SFString("GeometryComputationScript"),
                      toField : new SFString("rotation"),
                      toNode : new SFString("OrientationTransform")}),

                    new ROUTE({
                      fromField : new SFString("spine_changed"),
                      fromNode : new SFString("GeometryComputationScript"),
                      toField : new SFString("set_spine"),
                      toNode : new SFString("FrustumExtrusion")}),

                    new ROUTE({
                      fromField : new SFString("scale_changed"),
                      fromNode : new SFString("GeometryComputationScript"),
                      toField : new SFString("set_scale"),
                      toNode : new SFString("FrustumExtrusion")}),

                    new ROUTE({
                      fromField : new SFString("point_changed"),
                      fromNode : new SFString("GeometryComputationScript"),
                      toField : new SFString("point"),
                      toNode : new SFString("FrustumCoordinate")})])}))}),
          /*Example use is in separate scene*/

            new Anchor({
              description : new SFString("ViewFrustum Example"),
              url : new MFString(["ViewFrustumExample.x3d"]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.8,0.4,0])}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          justify : new MFString(["MIDDLE","MIDDLE"]),
                          size : new SFFloat(0.8)}))}))})])})])}))});
console.log(X3D0.toXMLNode());
