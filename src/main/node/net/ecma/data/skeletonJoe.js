'use strict';
var X3D = require('./x3d.js');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.js');
var SFNode = require('./x3d.js');
var head = require('./x3d.js');
var component = require('./x3d.js');
var SFInt32 = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var Viewpoint = require('./x3d.js');
var Transform = require('./x3d.js');
var Shape = require('./x3d.js');
var IndexedLineSet = require('./x3d.js');
var MFInt32 = require('./x3d.js');
var SFBool = require('./x3d.js');
var Coordinate = require('./x3d.js');
var MFVec3f = require('./x3d.js');
var Color = require('./x3d.js');
var MFColor = require('./x3d.js');
var Group = require('./x3d.js');
var SFVec3f = require('./x3d.js');
var Sphere = require('./x3d.js');
var SFFloat = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var LineSet = require('./x3d.js');
var ColorRGBA = require('./x3d.js');
var MFColorRGBA = require('./x3d.js');
var IndexedFaceSet = require('./x3d.js');
var NavigationInfo = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("skeletonJoe.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/skeletonJoe.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("An attempt at a standard LOA-4 skeleton")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("h.pl")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("12 June 2020")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              description : new SFString("default")}),

            new Transform({
              /*DEF for markerfor XYZ axes*/
              children : new MFNode([
                new Shape({
                  DEF : new SFString("AxisLinesShape"),
                  /*RGB lines showing XYZ axes*/
                  geometry : new SFNode(
                    new IndexedLineSet({
                      colorIndex : new MFInt32([0,1,2]),
                      colorPerVertex : new SFBool(false),
                      coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1])})),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([1,0,0,0,0.6,0,0,0,1])}))}))})])}),

            new Group({
              /*DEFS for markers of skeleton joints, segments, and sites*/
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,2,0]),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HAnimRootShape"),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.02)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("HAnimRootMaterial"),
                                  diffuseColor : new SFColor([0.8,0,0]),
                                  transparency : new SFFloat(0.3)}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,2.1,0]),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HAnimJointShape"),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.02)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("HAnimJointMaterial"),
                                  diffuseColor : new SFColor([0,0,0.8]),
                                  transparency : new SFFloat(0.3)}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,2.05,0]),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HAnimSegmentLine"),
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              color : new SFNode(
                                new ColorRGBA({
                                  DEF : new SFString("HAnimSegmentLineColorRGBA"),
                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.05,0,0,0.05,0,0])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,2.1,0]),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HAnimSiteShape"),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("DiamondIFS"),
                              creaseAngle : new SFFloat(0.5),
                              solid : new SFBool(false),
                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                              color : new SFNode(
                                new ColorRGBA({
                                  DEF : new SFString("HAnimSiteColorRGBA"),
                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,0]),
                                  transparency : new SFFloat(0.3)}))}))})])})])})])}),

            new NavigationInfo({
              speed : new SFFloat(1.5)}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,1,0]),
              description : new SFString("skeletonJoe"),
              position : new SFVec3f([0,1,3])})])}))});
console.log(X3D0.toXMLNode());
