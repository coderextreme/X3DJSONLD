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
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ComposedShader = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var ShaderPart = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Shaders"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("SimpleShader.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Simple shader example")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Stewart")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("26 May 2009")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("15 October 2009")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.opengl.org/wiki/Fragment_Shader")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D shader example")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/simpleShader.x3dv")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("ShaderTutorialInstantReality.pdf")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V3.0.3, http://titania.create3000.de")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("outputStyle"),
              content : new SFString("nicest")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")}),
          /*meta content='under development' name='warning'/*/])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("myPrototype"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("myInputRange"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0.95 0.44 0.22")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("TR"),
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.5,0.5,0.9])})),
                              shaders : new SFNode(
                                new ComposedShader({
                                  language : new SFString("GLSL"),
                                  field : new MFNode([
                                    new field({
                                      type : field.TYPE_SFVEC3F,
                                      name : new SFString("decis"),
                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("decis"),
                                          protoField : new SFString("myInputRange")})])})]),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "VERTEX"})),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "FRAGMENT"}))})),
                              shaders : new SFNode(
                                new ComposedShader({
                                  DEF : new SFString("Cobweb"),
                                  language : new SFString("GLSL"),
                                  field : new MFNode([
                                    new field({
                                      type : field.TYPE_SFVEC3F,
                                      name : new SFString("decis"),
                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                      value : new SFString("0.95 0.77 0.44")}),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "VERTEX"})]),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "FRAGMENT",
                                      DEF : new SFString("_1")}))}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(1.75)}))}))})])}))}),

            new WorldInfo({
              title : new SFString("SimpleShader"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("nodes"),
                          DEF : new SFString("nodes"),
                          reference : new SFString("http://titania.create3000.de"),
                          /*NULL*/}))})),
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
                          value : new MFDouble([6.24067728185014,0.00250837343276661,2.92117542307615])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-0.808320198626341,-0.358072370409949,0.22817191560906])}))}))})])}),

            new ProtoInstance({
              name : new SFString("myPrototype")})])}))});
console.log(X3D0.toXMLNode());
