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
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ArchHalf.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform > scale or editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Michele Foti, Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("15 December 2014")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("16 February 2016")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("ArchModelingDiagrams.pdf")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wikipedia.org/wiki/Arch")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Shape({
              DEF : new SFString("Arch"),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      DEF : new SFString("MaterialNode"),
                      diffuseColor : new SFColor([1,0.75,0.25])}))})),
              geometry : new SFNode(
                new IndexedFaceSet({
                  DEF : new SFString("ArchIndex"),
                  solid : new SFBool(false),
                  convex : new SFBool(false),
                  coordIndex : new MFInt32([31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,144,-1,149,31,144,147,-1,134,147,144,145,-1,145,144,62,141,-1,132,133,141,62,-1,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,143,-1,148,94,143,146,-1,142,128,146,143,-1,140,125,143,142,-1,125,126,127,140,-1,31,94,95,32,-1,32,95,96,33,-1,33,96,97,34,-1,34,97,98,35,-1,35,98,99,36,-1,36,99,100,37,-1,37,100,101,38,-1,38,101,102,39,-1,39,102,103,40,-1,40,103,104,41,-1,41,104,105,42,-1,42,105,106,43,-1,43,106,107,44,-1,44,107,108,45,-1,45,108,109,46,-1,46,109,110,47,-1,47,110,111,48,-1,48,111,112,49,-1,49,112,113,50,-1,50,113,114,51,-1,51,114,115,52,-1,52,115,116,53,-1,53,116,117,54,-1,54,117,118,55,-1,55,118,119,56,-1,56,119,120,57,-1,57,120,121,58,-1,58,121,122,59,-1,59,122,123,60,-1,60,123,124,61,-1,61,124,125,62,-1,148,149,147,146,-1,146,147,134,128,-1,128,134,145,142,-1,140,141,145,142,-1,127,133,141,140,-1,127,126,132,133,-1,126,132,62,125,-1,31,94,143,144,-1,142,143,144,145,-1,140,125,62,141,-1,31,94,148,149,-1]),
                  coord : new SFNode(
                    new Coordinate({
                      DEF : new SFString("ArchChord"),
                      point : new MFVec3f([2,0,0,1.997498,0.1,0,1.989975,0.2,0,1.977372,0.3,0,1.959592,0.4,0,1.936492,0.5,0,1.907878,0.6,0,1.873499,0.7,0,1.83303,0.8,0,1.786057,0.9,0,1.732051,1,0,1.670329,1.1,0,1.6,1.2,0,1.519868,1.3,0,1.428286,1.4,0,1.322876,1.5,0,1.2,1.6,0,1.053565,1.7,0,0.9020948,1.785,0,0.7599342,1.85,0,0.6244998,1.9,0,0.5425634,1.925,0,0.4444097,1.95,0,0.3618163,1.967,0,0.2821347,1.98,0,0.1997498,1.99,0,0.1671855,1.993,0,0.1413329,1.995,0,0.1095034,1.997,0,0.08942036,1.998,0,0.06323764,1.999,0,0,2,0,-0.06323764,1.999,0,-0.08942036,1.998,0,-0.1095034,1.997,0,-0.1413329,1.995,0,-0.1671855,1.993,0,-0.1997498,1.99,0,-0.2821347,1.98,0,-0.3618163,1.967,0,-0.4444097,1.95,0,-0.5425634,1.925,0,-0.6244998,1.9,0,-0.7599342,1.85,0,-0.9020948,1.785,0,-1.053565,1.7,0,-1.2,1.6,0,-1.322876,1.5,0,-1.428286,1.4,0,-1.519868,1.3,0,-1.6,1.2,0,-1.670329,1.1,0,-1.732051,1,0,-1.786057,0.9,0,-1.83303,0.8,0,-1.873499,0.7,0,-1.907878,0.6,0,-1.936492,0.5,0,-1.959592,0.4,0,-1.977372,0.3,0,-1.989975,0.2,0,-1.997498,0.1,0,-2,0,0,2,0,3,1.997498,0.1,3,1.989975,0.2,3,1.977372,0.3,3,1.959592,0.4,3,1.936492,0.5,3,1.907878,0.6,3,1.873499,0.7,3,1.83303,0.8,3,1.786057,0.9,3,1.732051,1,3,1.670329,1.1,3,1.6,1.2,3,1.519868,1.3,3,1.428286,1.4,3,1.322876,1.5,3,1.2,1.6,3,1.053565,1.7,3,0.9020948,1.785,3,0.7599342,1.85,3,0.6244998,1.9,3,0.5425634,1.925,3,0.4444097,1.95,3,0.3618163,1.967,3,0.2821347,1.98,3,0.1997498,1.99,3,0.1671855,1.993,3,0.1413329,1.995,3,0.1095034,1.997,3,0.08942036,1.998,3,0.06323764,1.999,3,0,2,3,-0.06323764,1.999,3,-0.08942036,1.998,3,-0.1095034,1.997,3,-0.1413329,1.995,3,-0.1671855,1.993,3,-0.1997498,1.99,3,-0.2821347,1.98,3,-0.3618163,1.967,3,-0.4444097,1.95,3,-0.5425634,1.925,3,-0.6244998,1.9,3,-0.7599342,1.85,3,-0.9020948,1.785,3,-1.053565,1.7,3,-1.2,1.6,3,-1.322876,1.5,3,-1.428286,1.4,3,-1.519868,1.3,3,-1.6,1.2,3,-1.670329,1.1,3,-1.732051,1,3,-1.786057,0.9,3,-1.83303,0.8,3,-1.873499,0.7,3,-1.907878,0.6,3,-1.936492,0.5,3,-1.959592,0.4,3,-1.977372,0.3,3,-1.989975,0.2,3,-1.997498,0.1,3,-2,0,3,-2,-1,3,-2.5,-1,3,-2.5,2.5,3,2.5,2.5,3,2.5,-1,3,2,-1,3,-2,-1,0,-2.5,-1,0,-2.5,2.5,0,2.5,2.5,0,2.5,-1,0,2,-1,0,2.5,0,3,2.5,0,0,-2.5,0,3,-2.5,0,0,-2.5,2,3,-2,2,3,-2,2,0,-2.5,2,0,-2,2.5,3,-2,2.5,0,0,2.5,3,0,2.5,0,2,2,3,2.5,2,3,2.5,2,0,2,2,0,2,2.5,3,2,2.5,0])}))}))})])}))});
console.log(X3D0.toXMLNode());
