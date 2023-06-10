'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
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
import { Group } from './x3d.mjs';
import { ProximitySensor } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { PlaneSensor } from './x3d.mjs';
import { VisibilitySensor } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { Anchor } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HeadsUpDisplayPrototype.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Generic Heads Up Display (HUD) prototype to keep children on screen.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("9 November 2003")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("14 January 2014")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("HUD Heads Up Display")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("HeadsUpDisplay"),
              appinfo : new SFString("HeadsUpDisplay positions child geometry in screen space, movable by the user"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Displayed subscene positioned as a HUD."),
                      /*default is null array of nodes*/}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("dragChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position."),
                      /*default is null array of nodes*/}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("locationOffset"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("Modified screen location and distance (for size)."),
                      value : new SFString("-2 -2 0")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("traceEnabled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("Enable/disable console output for troubleshooting."),
                      value : new SFString("false")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new ProximitySensor({
                          DEF : new SFString("WhereSensor"),
                          size : new SFVec3f([1000000000,1000000000,1000000000]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("center"),
                                  protoField : new SFString("locationOffset")})])}))}),

                        new Transform({
                          DEF : new SFString("FixedLocation"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("MovableLocation"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("LocationOffset"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("translation"),
                                          protoField : new SFString("locationOffset")})])})),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0,0,-10]),
                                      children : new MFNode([
                                        new Group({
                                          IS : new SFNode(
                                            new IS({
                                              connect : new MFNode([
                                                new connect({
                                                  nodeField : new SFString("children"),
                                                  protoField : new SFString("children")})])}))}),

                                        new Group({
                                          DEF : new SFString("PlaneMovementSensorGroup"),
                                          children : new MFNode([
                                            new Group({
                                              DEF : new SFString("DragGeometry"),
                                              IS : new SFNode(
                                                new IS({
                                                  connect : new MFNode([
                                                    new connect({
                                                      nodeField : new SFString("children"),
                                                      protoField : new SFString("dragChildren")})])}))}),

                                            new PlaneSensor({
                                              DEF : new SFString("PlaneMovementSensor"),
                                              description : new SFString("click and drag to move interface"),
                                              IS : new SFNode(
                                                new IS({
                                                  connect : new MFNode([
                                                    new connect({
                                                      nodeField : new SFString("offset"),
                                                      protoField : new SFString("locationOffset")})])}))}),

                                            new VisibilitySensor({
                                              DEF : new SFString("MovementVisibilitySensor")}),

                                            new Script({
                                              DEF : new SFString("VisibilityControlScript"),
                                              field : new MFNode([
                                                new field({
                                                  type : field.TYPE_SFBOOL,
                                                  name : new SFString("traceEnabled"),
                                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                                                new field({
                                                  type : field.TYPE_SFBOOL,
                                                  name : new SFString("isVisible"),
                                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                                  value : new SFString("true")}),

                                                new field({
                                                  type : field.TYPE_SFVEC3F,
                                                  name : new SFString("planeSensorTranslation"),
                                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                                  value : new SFString("0 0 0")}),

                                                new field({
                                                  type : field.TYPE_SFBOOL,
                                                  name : new SFString("setIsVisible"),
                                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                                new field({
                                                  type : field.TYPE_SFBOOL,
                                                  name : new SFString("setPlaneSensorIsActive"),
                                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                                new field({
                                                  type : field.TYPE_SFVEC3F,
                                                  name : new SFString("setPlaneSensorTranslation"),
                                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                                new field({
                                                  type : field.TYPE_SFVEC3F,
                                                  name : new SFString("translationChanged"),
                                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                                new field({
                                                  type : field.TYPE_SFVEC3F,
                                                  name : new SFString("translationOffsetChanged"),
                                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                                              IS : new SFNode(
                                                new IS({
                                                  connect : new MFNode([
                                                    new connect({
                                                      nodeField : new SFString("traceEnabled"),
                                                      protoField : new SFString("traceEnabled")})])})]),
                                              
ecmascript:eval (0

, function tracePrint (text)
{
	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);
}
, function setIsVisible (value, timeStamp)
{
	isVisible = value;
	tracePrint('isVisible=' + value);
}
, function setPlaneSensorIsActive (value, timeStamp)
{
	tracePrint('PlaneSensor isActive=' + value);

	if (value == false)
	{
		tracePrint('planeSensorTranslation=' + planeSensorTranslation);
		if (isVisible)
		{
			translationChanged = planeSensorTranslation;
		}
		else
		{
			// fell off screen, reset to center
			translationChanged = new SFVec3f(0, 0, 0);
			translationOffsetChanged  = new SFVec3f(0, 0, 0);
		}
	}
}
, function setPlaneSensorTranslation (value, timeStamp)
{
	planeSensorTranslation = value;
	tracePrint('planeSensorTranslation=' + value);
})}),

                                            new ROUTE({
                                              fromField : new SFString("isActive"),
                                              fromNode : new SFString("PlaneMovementSensor"),
                                              toField : new SFString("setPlaneSensorIsActive"),
                                              toNode : new SFString("VisibilityControlScript")}),

                                            new ROUTE({
                                              fromField : new SFString("translation_changed"),
                                              fromNode : new SFString("PlaneMovementSensor"),
                                              toField : new SFString("setPlaneSensorTranslation"),
                                              toNode : new SFString("VisibilityControlScript")}),

                                            new ROUTE({
                                              fromField : new SFString("isActive"),
                                              fromNode : new SFString("MovementVisibilitySensor"),
                                              toField : new SFString("setIsVisible"),
                                              toNode : new SFString("VisibilityControlScript")})])})])})])}),

                                new ROUTE({
                                  fromField : new SFString("translation_changed"),
                                  fromNode : new SFString("PlaneMovementSensor"),
                                  toField : new SFString("set_translation"),
                                  toNode : new SFString("MovableLocation")}),

                                new ROUTE({
                                  fromField : new SFString("translationChanged"),
                                  fromNode : new SFString("VisibilityControlScript"),
                                  toField : new SFString("set_translation"),
                                  toNode : new SFString("MovableLocation")}),

                                new ROUTE({
                                  fromField : new SFString("translationOffsetChanged"),
                                  fromNode : new SFString("VisibilityControlScript"),
                                  toField : new SFString("set_offset"),
                                  toNode : new SFString("PlaneMovementSensor")})])})])}),

                        new ROUTE({
                          fromField : new SFString("position_changed"),
                          fromNode : new SFString("WhereSensor"),
                          toField : new SFString("set_translation"),
                          toNode : new SFString("FixedLocation")}),

                        new ROUTE({
                          fromField : new SFString("orientation_changed"),
                          fromNode : new SFString("WhereSensor"),
                          toField : new SFString("set_rotation"),
                          toNode : new SFString("FixedLocation")})])})])}))}),
          /*====================*/

            new Background({
              groundColor : new MFColor([0.1,0.1,0.3]),
              skyColor : new MFColor([0.5,0.5,0.1])}),

            new Anchor({
              description : new SFString("HeadsUpDisplayExample"),
              parameter : new MFString(["target=_blank"]),
              url : new MFString(["HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,1,1]),
                          emissiveColor : new SFColor([0,1,1])}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          justify : new MFString(["MIDDLE","MIDDLE"]),
                          size : new SFFloat(0.8)}))}))})])})])}))});
console.log(X3D0.toXMLNode());
