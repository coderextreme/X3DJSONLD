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
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
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
              content : new SFString("20 October 2019")}),

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
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d")}),

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
              title : new SFString("ViewFrustumExample.x3d")}),

            new Viewpoint({
              description : new SFString("ViewFrustum from above, looking down"),
              orientation : new SFRotation([1,0,0,-1.57]),
              position : new SFVec3f([0,40,0])}),

            new Viewpoint({
              description : new SFString("ViewFrustum from point of view")}),

            new Viewpoint({
              description : new SFString("ViewFrustum behind point of view"),
              position : new SFVec3f([0,0,15])}),

            new Viewpoint({
              description : new SFString("ViewFrustum oblique side view"),
              orientation : new SFRotation([0.8005,0.5926,0.0898,-0.3743]),
              position : new SFVec3f([-5,5,20])}),

            new NavigationInfo({
              type : ["EXAMINE","FLY","ANY"]}),

            new ExternProtoDeclare({
              name : new SFString("ViewFrustum"),
              appinfo : new SFString("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"),
              url : new MFString(["ViewFrustumPrototype.x3d#ViewFrustum"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("ViewpointNode"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("required: insert Viewpoint DEF or USE node for view of interest")}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("NavigationInfoNode"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("required: insert NavigationInfo DEF or USE node of interest")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("visible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("whether or not frustum geometry is rendered")}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("lineColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9")}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("frustumColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("transparency"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("transparency of ViewFrustum hull geometry, default value 0.5")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("aspectRatio"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("assumed ratio height/width, default value 0.75")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("trace"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("debug support, default false")})])}),
          /*Example use*/

            new ProtoInstance({
              name : new SFString("ViewFrustum"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("ViewpointNode"),
                  /*prefer empty description to prevent entry in player's ViewpointList*/
                  children : new MFNode([
                    new Viewpoint({
                      description : new SFString("ViewFrustum ViewpointNode")})])}),

                new fieldValue({
                  name : new SFString("NavigationInfoNode"),
                  children : new MFNode([
                    new NavigationInfo({
                      visibilityLimit : new SFFloat(15)})])}),

                new fieldValue({
                  name : new SFString("visible"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("lineColor"),
                  value : new SFString("0.9 0.9 0.9")}),

                new fieldValue({
                  name : new SFString("frustumColor"),
                  value : new SFString("0.8 0.8 0.8")}),

                new fieldValue({
                  name : new SFString("transparency"),
                  value : new SFString("0.75")}),

                new fieldValue({
                  name : new SFString("trace"),
                  value : new SFString("true")})])}),
          /*Visualization assists*/

            new Inline({
              DEF : new SFString("GridXZ"),
              url : new MFString(["GridXZ_20x20Fixed.x3d"])}),

            new Transform({
              scale : new SFVec3f([5,5,5]),
              children : new MFNode([
                new Inline({
                  DEF : new SFString("CoordinateAxes"),
                  url : new MFString(["CoordinateAxes.x3d"])})])})])}))});
console.log(X3D0.toXMLNode());
