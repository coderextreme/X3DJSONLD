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
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ViewFrustumExample.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("16 August 2008")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 30 Dec 2023 08:00:26 GMT")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("ViewFrustumPrototype.x3d")}),

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
              name : new SFString("Image"),
              content : new SFString("ViewpointCalculator.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("ViewpointCalculatorComposed.png")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("view culling frustum")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("ViewFrustum"),
              url : new MFString(["ViewFrustumPrototype.x3d#ViewFrustum"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFNODE,
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  name : new SFString("ViewpointNode")}),

                new field({
                  type : field.TYPE_SFNODE,
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  name : new SFString("NavigationInfoNode")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  name : new SFString("visible")}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  name : new SFString("lineColor")}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  name : new SFString("frustumColor")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  name : new SFString("transparency")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  name : new SFString("aspectRatio")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  name : new SFString("trace")})])}),

            new WorldInfo({
              title : new SFString("ViewFrustumExample.x3d")}),

            new Viewpoint({
              description : new SFString("ViewFrustum from above, looking down"),
              position : new SFVec3f([0,40,0]),
              orientation : new SFRotation([1,0,0,-1.57])}),

            new Viewpoint({
              description : new SFString("ViewFrustum from point of view")}),

            new Viewpoint({
              description : new SFString("ViewFrustum behind point of view"),
              position : new SFVec3f([0,0,15])}),

            new Viewpoint({
              description : new SFString("ViewFrustum oblique side view"),
              position : new SFVec3f([-5,5,20]),
              orientation : new SFRotation([0.8005,0.5926,0.0898,-0.3743])}),

            new NavigationInfo({
              type : ["EXAMINE","FLY","ANY"]}),

            new ProtoInstance({
              name : new SFString("ViewFrustum"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("ViewpointNode"),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("_1"),
                      description : new SFString("ViewFrustum ViewpointNode")})])}),

                new fieldValue({
                  name : new SFString("NavigationInfoNode"),
                  children : new MFNode([
                    new NavigationInfo({
                      DEF : new SFString("_2"),
                      visibilityLimit : new SFFloat(15)})])}),

                new fieldValue({
                  name : new SFString("transparency"),
                  value : new SFString("0.75")}),

                new fieldValue({
                  name : new SFString("trace"),
                  value : new SFString("true")})])}),

            new Inline({
              DEF : new SFString("GridXZ"),
              global : new SFBool(true),
              url : new MFString(["GridXZ_20x20Fixed.x3d"])}),

            new Transform({
              scale : new SFVec3f([5,5,5]),
              children : new MFNode([
                new Inline({
                  DEF : new SFString("CoordinateAxes"),
                  global : new SFBool(true),
                  url : new MFString(["CoordinateAxes.x3d"])})])})])}))});
console.log(X3D0.toXMLNode());
