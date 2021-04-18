'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { ProximitySensor } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { Anchor } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Box } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ViewPositionOrientationPrototype.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Leonard Daly and Don Brutzman")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("1 November 2000")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("27 May 2017")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("ViewPositionOrientation prototype provides local position and orientation as user navigates, with optional console output")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("Note fix: metadata is no longer an allowed ProtoDeclare field name, since ProtoInstance already includes a metadata field")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("ViewPositionOrientationExample.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIExample.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.realism.com/Web3D/Examples#WhereAmI")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          /*Thanks to Leonard Daly for the original design of this prototype*/
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("ViewPositionOrientation"),
              appinfo : new SFString("ViewPositionOrientation provides provides console output of local position and orientation as user navigates"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Whether or not ViewPositionOrientation sends output to console"),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("traceEnabled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("Output internal trace messages for debugging this node, intended for developer use only"),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_traceEnabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("Ability to turn output tracing on/off at runtime")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("position_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("Output local position")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("orientation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("Output local orientation")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("outputViewpointString"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("MFString value of new Viewpoint, suitable for use in string field of a Text node")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProximitySensor({
                      DEF : new SFString("WhereSensor"),
                      size : new SFVec3f([1000000000,1000000000,1000000000]),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")})])}))}),
                  /*it's a big old world out there! large box likely handles most use cases.*/

                    new Script({
                      DEF : new SFString("OutputPositionOrientation"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("traceEnabled"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_traceEnabled"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("set_position"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("set_orientation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("position"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("orientation"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 1 0 0")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("position_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("orientation_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("outputViewpointString"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("traceEnabled"),
                              protoField : new SFString("traceEnabled")}),

                            new connect({
                              nodeField : new SFString("set_traceEnabled"),
                              protoField : new SFString("set_traceEnabled")}),

                            new connect({
                              nodeField : new SFString("position_changed"),
                              protoField : new SFString("position_changed")}),

                            new connect({
                              nodeField : new SFString("orientation_changed"),
                              protoField : new SFString("orientation_changed")}),

                            new connect({
                              nodeField : new SFString("outputViewpointString"),
                              protoField : new SFString("outputViewpointString")})])})]),
                      
ecmascript:eval (0

, function roundoff (value, digits) // for local use only
{
	var resolution = 1;
	for (i = 1; i <= digits; i++ )
	{
		resolution *= 10;
	}
	return Math.round (value*resolution) / resolution; // round to resolution
}
, function outputViewpoint ()
{
  var holdString = 
        '<Viewpoint position="' +
		roundoff (position.x, 1) + ' ' +
		roundoff (position.y, 1) + ' ' +
		roundoff (position.z, 1) +
        '" orientation="' +
		roundoff (orientation.x, 3) + ' ' +
		roundoff (orientation.y, 3) + ' ' +
		roundoff (orientation.z, 3) + ' ' +
		roundoff (orientation.angle, 4) + '"/>' ;
   tracePrint (holdString);
   outputViewpointString = new MFString (holdString);
}
, function set_position (value)
{
	position = value; // save persistent value
	position_changed = position; // output event
	outputViewpoint ();
}
, function set_orientation (value)
{
	orientation = value; // save persistent value
	orientation_changed = orientation; // output event
	outputViewpoint ();
}
, function set_traceEnabled (value)
{
	traceEnabled = value;
	alwaysPrint ('traceEnabled=' + traceEnabled);
}
, function alwaysPrint (text)
{
	Browser.print ('[ViewPositionOrientation] ' + text + '\n');
}
, function tracePrint (text)
{
	if (traceEnabled) alwaysPrint (text);
})}),

                    new ROUTE({
                      fromField : new SFString("position_changed"),
                      fromNode : new SFString("WhereSensor"),
                      toField : new SFString("set_position"),
                      toNode : new SFString("OutputPositionOrientation")}),

                    new ROUTE({
                      fromField : new SFString("orientation_changed"),
                      fromNode : new SFString("WhereSensor"),
                      toField : new SFString("set_orientation"),
                      toNode : new SFString("OutputPositionOrientation")})])}))}),
          /*====================*/

            new Viewpoint({
              description : new SFString("ViewPositionOrientation prototype"),
              position : new SFVec3f([0,0,14])}),

            new Anchor({
              description : new SFString("ViewPositionOrientation Example"),
              parameter : new MFString(["target=_blank"]),
              url : new MFString(["ViewPositionOrientationExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d","ViewPositionOrientationExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.wrl"]),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["ViewPositionOrientationPrototype","is a prototype definition file","","Click this text to see","ViewPositionOrientationExample"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          justify : new MFString(["MIDDLE","MIDDLE"]),
                          size : new SFFloat(1.2)}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.6,0.8,0.4])}))}))}),
              /*Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip*/

                new Shape({
                  /*Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.*/
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([16,7,0.001])})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(1)}))}))})])})])}))});
console.log(X3D0.toXMLNode());
