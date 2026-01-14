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
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var PixelTexture = require('./x3d.mjs');
var SFImage = require('./x3d.mjs');
var TextureProperties = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("indexedfaceset_pixeltexture_whole.x3d")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("file did not transform to vrml97")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("indexedfaceset_pixeltexture_whole-front.jpg")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("indexedfaceset_pixeltexture_whole-rear.jpg")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("indexedfaceset_pixeltexture_whole-top.jpg")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("indexedfaceset_pixeltexture_whole-bottom.jpg")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("indexedfaceset_pixeltexture_whole-left.jpg")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("indexedfaceset_pixeltexture_whole-right.jpg")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.nist.gov/vrml.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("http://www.itl.nist.gov/div897/ctg/vrml/members.html")}),

            new meta({
              name : new SFString("disclaimer"),
              content : new SFString("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Michael Kass NIST, Don Brutzman NPS")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("21 January 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("13 January 2014")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              description : new SFString("Front View")}),

            new Viewpoint({
              description : new SFString("Rear View"),
              orientation : new SFRotation([0,1,0,3.14]),
              position : new SFVec3f([0,0,-10])}),

            new Viewpoint({
              description : new SFString("Top View"),
              orientation : new SFRotation([1,0,0,-1.57]),
              position : new SFVec3f([0,10,0])}),

            new Viewpoint({
              description : new SFString("Bottom View"),
              orientation : new SFRotation([1,0,0,1.57]),
              position : new SFVec3f([0,-10,0])}),

            new Viewpoint({
              description : new SFString("Right View"),
              orientation : new SFRotation([0,1,0,1.57]),
              position : new SFVec3f([10,0,0])}),

            new Viewpoint({
              description : new SFString("Left View"),
              orientation : new SFRotation([0,1,0,-1.57]),
              position : new SFVec3f([-10,0,0])}),

            new NavigationInfo({
              type : ["EXAMINE"]}),
          /*<Environment id=\"gamma\" gammaCorrectionDefault=\"none\"></Environment>*/

            new Shape({
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({})),
                  texture : new SFNode(
                    new PixelTexture({
                      image : new SFImage([2,2,4,4278190335,16711935,4294967295,4294902015]),
                      textureProperties : new SFNode(
                        new TextureProperties({
                          magnificationFilter : new SFString("NEAREST_PIXEL")}))}))})),
              geometry : new SFNode(
                new IndexedFaceSet({
                  colorPerVertex : new SFBool(false),
                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                  creaseAngle : new SFFloat(0.5),
                  texCoordIndex : new MFInt32([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]),
                  color : new SFNode(
                    new Color({
                      color : new MFColor([0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0])})),
                  coord : new SFNode(
                    new Coordinate({
                      point : new MFVec3f([-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1])})),
                  texCoord : new SFNode(
                    new TextureCoordinate({
                      point : new MFVec2f([0,1,0,0,1,1,1,0])}))}))})])}))});
console.log(X3D0.toXMLNode());
