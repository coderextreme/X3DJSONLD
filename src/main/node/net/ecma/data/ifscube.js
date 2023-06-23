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
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var Group = require('./x3d.js');
var Shape = require('./x3d.js');
var IndexedFaceSet = require('./x3d.js');
var SFFloat = require('./x3d.js');
var MFInt32 = require('./x3d.js');
var SFBool = require('./x3d.js');
var Coordinate = require('./x3d.js');
var MFVec3f = require('./x3d.js');
var Normal = require('./x3d.js');
var Color = require('./x3d.js');
var MFColor = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ifscube.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Template for an Indexed Face Set")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("4 April 2017")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(1.57),
                      DEF : new SFString("IndexedFaceSet"),
                      coordIndex : new MFInt32([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]),
                      normalIndex : new MFInt32([0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1]),
                      normalPerVertex : new SFBool(false),
                      colorIndex : new MFInt32([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0,0,1,0,1,1,1,1,1,1,0,1])})),
                      normal : new SFNode(
                        new Normal({
                          vector : new MFVec3f([1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1])})),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0,1,0])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
