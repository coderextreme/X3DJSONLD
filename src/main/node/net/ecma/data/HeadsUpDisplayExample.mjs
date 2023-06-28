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
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HeadsUpDisplayExample.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Leonard Daly and Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("15 July 2006")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("24 October 2016")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HeadsUpDisplayPrototype.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://X3dGraphics.com")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/X3dResources.html")}),

            new meta({
              name : new SFString("rights"),
              content : new SFString("Copyright 2006, Daly Realism and Don Brutzman")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          /*Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n*/
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("HeadsUpDisplay"),
              appinfo : new SFString("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location"),
              url : new MFString(["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("screenOffset"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("offset position for HUD relative to current view location, default 0 0 -5")}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("children"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("X3D content positioned at HUD offset")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("position_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("HUD position update (in world coordinates) relative to original location")}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("orientation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("HUD orientation update relative to original location")})])}),

            new Background({
              DEF : new SFString("SandyShallowBottom"),
              groundAngle : new MFFloat([0.05,1.52,1.56,1.5707]),
              groundColor : new MFColor([0.2,0.2,0,0.3,0.3,0,0.5,0.5,0.3,0.1,0.3,0.4,0,0.2,0.4]),
              skyAngle : new MFFloat([0.04,0.05,0.1,1.309,1.57]),
              skyColor : new MFColor([0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9])}),

            new Viewpoint({
              description : new SFString("Heads-up display (HUD)")}),
          /*ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence*/

            new ProtoInstance({
              name : new SFString("HeadsUpDisplay"),
              DEF : new SFString("HeadsUpDisplayInstance"),
              /*example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view*/
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("screenOffset"),
                  value : new SFString("-0.75 1 -5")}),

                new fieldValue({
                  name : new SFString("children"),
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["HUD text stays fixed","while user navigates"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              justify : new MFString(["MIDDLE","MIDDLE"]),
                              size : new SFFloat(0.3)}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0.894118,0.819608,1])}))}))})])})])}),

            new Inline({
              url : new MFString(["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"])})])}))});
console.log(X3D0.toXMLNode());
