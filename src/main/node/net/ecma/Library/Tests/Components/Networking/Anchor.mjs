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
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Wed, 06 Jan 2016 14:05:33 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.2, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 06 Jan 2016 14:07:34 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString(["EXAMINE"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Viewpoint"),
                      DEF : new SFString("Viewpoint"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("position"),
                          DEF : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,10])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,1,0])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))}))})])}),

            new Anchor({
              url : new MFString(["#VP2"]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Box"),
                  translation : new SFVec3f([-3.6511,0,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("Rococo8"),
                              ambientIntensity : new SFFloat(0.226102),
                              diffuseColor : new SFColor([0.904409,0.457768,0.341109]),
                              specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                              shininess : new SFFloat(0.078125)}))})),
                      geometry : new SFNode(
                        new Box({}))})])})])}),

            new Anchor({
              url : new MFString(["http://web3d.org"]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Cone"),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("Rococo14"),
                              ambientIntensity : new SFFloat(0.226102),
                              diffuseColor : new SFColor([0.904409,0.315531,0.544386]),
                              specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                              shininess : new SFFloat(0.078125)}))})),
                      geometry : new SFNode(
                        new Cone({}))})])})])}),

            new Anchor({
              url : new MFString(["http://web3d.org"]),
              parameter : new MFString(["target=_blank"]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Cylinder"),
                  translation : new SFVec3f([3.65254,0,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("Rococo20"),
                              ambientIntensity : new SFFloat(0.226102),
                              diffuseColor : new SFColor([0.52545,0.455896,0.904409]),
                              specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                              shininess : new SFFloat(0.078125)}))})),
                      geometry : new SFNode(
                        new Cylinder({}))})])})])}),

            new Viewpoint({
              DEF : new SFString("VP1"),
              description : new SFString("Viewpoint1")}),

            new Viewpoint({
              DEF : new SFString("VP2"),
              description : new SFString("Viewpoint2"),
              position : new SFVec3f([0,0,15.4598])})])}))});
console.log(X3D0.toXMLNode());
