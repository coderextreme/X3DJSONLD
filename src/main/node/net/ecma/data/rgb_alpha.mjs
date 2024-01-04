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
var NavigationInfo = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var PixelTexture = require('./x3d.mjs');
var SFImage = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("rgb_alpha.x3d")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("rgb_alpha-front.jpg")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("rgb_alpha-rear.jpg")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("rgb_alpha-top.jpg")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("rgb_alpha-bottom.jpg")}),

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
              content : new SFString("Sat, 30 Dec 2023 07:56:51 GMT")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["EXAMINE","WALK","FLY","ANY"]}),

            new Group({
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([6.14221,0.0694613,-0.000999451]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new PixelTexture({
                              DEF : new SFString("RgbOpacityCheckerboard"),
                              image : new SFImage([2,2,4,4278190335,4294901760,4294901760,4278190335])}))})),
                      geometry : new SFNode(
                        new Box({}))}))}),

                new Transform({
                  translation : new SFVec3f([-4.85443,0.0694381,-0.00149918]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new PixelTexture({
                              USE : new SFString("RgbOpacityCheckerboard")}))})),
                      geometry : new SFNode(
                        new Sphere({}))}))}),

                new Transform({
                  translation : new SFVec3f([-1.47341,0.036672,-0.00175095]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new PixelTexture({
                              USE : new SFString("RgbOpacityCheckerboard")}))})),
                      geometry : new SFNode(
                        new Cone({}))}))}),

                new Transform({
                  translation : new SFVec3f([2.31094,0.0694206,-0.00187683]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new PixelTexture({
                              USE : new SFString("RgbOpacityCheckerboard")}))})),
                      geometry : new SFNode(
                        new Cylinder({}))}))})])})])}))});
console.log(X3D0.toXMLNode());
