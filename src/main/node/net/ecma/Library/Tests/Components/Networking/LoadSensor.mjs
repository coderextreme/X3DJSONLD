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
var LoadSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var MovieTexture = require('./x3d.mjs');
var ShaderPart = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
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
              content : new SFString("Sun, 27 Dec 2015 07:44:48 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 27 Dec 2015 12:41:22 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("LoadSensor"),
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

            new LoadSensor({
              DEF : new SFString("_1"),
              timeOut : new SFTime(10),
              children : new MFNode([
                new Inline({
                  url : new MFString(["../Geometry3D/box.x3d"])}),

                new ImageTexture({
                  url : new MFString(["../images/ubuntu.png"])}),

                new ImageTexture({
                  url : new MFString(["https://avatars0.githubusercontent.com/u/6417246?v=3&s=96"])}),

                new AudioClip({
                  url : new MFString(["../Sound/04. Like A Virgin.mp3"])}),

                new MovieTexture({
                  url : new MFString(["../../../../../Titania/Library/Examples/Vattenfall/stage/film6.mpv"])}),

                new ShaderPart({
                  type : "VERTEX",
                  data:text/plain,
#version 120

void main (void)
{
	gl_Position     = ftransform ();
	gl_TexCoord [0] = gl_TextureMatrix [0] * gl_MultiTexCoord0;
})}),

                new Script({
                  vrmlscript:)}),

                new Inline({
                  url : new MFString([""])})])}),

            new Script({
              DEF : new SFString("_2"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_active"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_loaded"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("set_progress"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_loadTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("string_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),vrmlscript:
, function initialize ()
{
	set_progress (0);
}

, function set_active (value, time)
{
	print ('isActive: ', value);
}

, function set_loaded (value, time)
{
	print ('isLoaded: ', value);
}

, function set_progress (value, time)
{
	print ('progress: ', value);
	string_changed = new MFString (value);
}

, function set_loadTime (value, time)
{
	print ('loadTime: ', value);
})}),

            new Transform({
              DEF : new SFString("Text"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Text({
                      DEF : new SFString("_3"),
                      string : new MFString(["0.75"]),
                      solid : new SFBool(true),
                      fontStyle : new SFNode(
                        new FontStyle({
                          justify : new MFString(["MIDDLE"])}))}))})])}),

            new Anchor({
              DEF : new SFString("_4"),
              url : new MFString(["#Viewpoint"]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Sphere"),
                  translation : new SFVec3f([0,-1.1894,0]),
                  scale : new SFVec3f([0.230247,0.230247,0.230247]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({}))})),
                      geometry : new SFNode(
                        new Sphere({}))})])})])}),

            new LoadSensor({
              DEF : new SFString("_5"),
              children : new MFNode([
                new Anchor({
                  USE : new SFString("_4")})])}),

            new Viewpoint({
              DEF : new SFString("Viewpoint_1")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_2"),
              toField : new SFString("set_active")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isLoaded"),
              toNode : new SFString("_2"),
              toField : new SFString("set_loaded")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("progress"),
              toNode : new SFString("_2"),
              toField : new SFString("set_progress")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("loadTime"),
              toNode : new SFString("_2"),
              toField : new SFString("set_loadTime")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("string_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_string")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_2"),
              toField : new SFString("set_active")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("isLoaded"),
              toNode : new SFString("_2"),
              toField : new SFString("set_loaded")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("progress"),
              toNode : new SFString("_2"),
              toField : new SFString("set_progress")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("loadTime"),
              toNode : new SFString("_2"),
              toField : new SFString("set_loadTime")})])}))});
console.log(X3D0.toXMLNode());
