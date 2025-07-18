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
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var LineSet = require('./x3d.mjs');
var ColorRGBA = require('./x3d.mjs');
var MFColorRGBA = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
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
              content : new SFString("JohnJoint.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("An attempt at a standard LOA-4 skeleton")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("h6.pl")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("12 January 2023")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              /*DEF for markerfor XYZ axes*/
              child : new SFNode(
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
                          color : new MFColor([1,0,0,0,0.6,0,0,0,1])}))}))}))}),

            new Group({
              /*DEFS for markers of skeleton joints, segments, and sites*/
              children : new MFNode([
                new Transform({
                  /*<Transform translation='0 2 0'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,2.1,0]),
                      child : new SFNode(
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
                                  transparency : new SFFloat(0.3)}))}))}))}),

                    new Transform({
                      translation : new SFVec3f([0,2.05,0]),
                      child : new SFNode(
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
                                  point : new MFVec3f([-0.05,0,0,0.05,0,0])}))}))}))}),
                  /*<Transform translation='0 2.1 0'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/])})])}),

            new NavigationInfo({
              speed : new SFFloat(1.5)}),

            new Viewpoint({
              description : new SFString("default")})])}))});
console.log(X3D0.toXMLNode());
