// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('HeadsUpDisplayPrototype.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Generic Heads Up Display (HUD) prototype to keep children on screen.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('9 November 2003')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('14 January 2014')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('HUD Heads Up Display')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('HeadsUpDisplay'),
              appinfo_ : SFString('HeadsUpDisplay positions child geometry in screen space, movable by the user'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('children'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Displayed subscene positioned as a HUD.'),
                      /*default is null array of nodes*/),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('dragChildren'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.'),
                      /*default is null array of nodes*/),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('locationOffset'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('Modified screen location and distance (for size).'),
                      value_ : SFString('-2 -2 0')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('traceEnabled'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('Enable/disable console output for troubleshooting.'),
                      value_ : SFString('false'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Group(
                      children_ : [
                        ProximitySensor(
                          DEF_ : SFString('WhereSensor'),
                          size_ : SFVec3f([SFDouble(1000000000), SFDouble(1000000000), SFDouble(1000000000)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('center'),
                                  protoField_ : SFString('locationOffset'))])),

                        Transform(
                          DEF_ : SFString('FixedLocation'),
                          children_ : [
                            Transform(
                              DEF_ : SFString('MovableLocation'),
                              children_ : [
                                Transform(
                                  DEF_ : SFString('LocationOffset'),
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('translation'),
                                          protoField_ : SFString('locationOffset'))]),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-10)]),
                                      children_ : [
                                        Group(
                                          IS_ : 
                                            IS(
                                              connect_ : [
                                                connect(
                                                  nodeField_ : SFString('children'),
                                                  protoField_ : SFString('children'))])),

                                        Group(
                                          DEF_ : SFString('PlaneMovementSensorGroup'),
                                          children_ : [
                                            Group(
                                              DEF_ : SFString('DragGeometry'),
                                              IS_ : 
                                                IS(
                                                  connect_ : [
                                                    connect(
                                                      nodeField_ : SFString('children'),
                                                      protoField_ : SFString('dragChildren'))])),

                                            PlaneSensor(
                                              DEF_ : SFString('PlaneMovementSensor'),
                                              description_ : SFString('click and drag to move interface'),
                                              IS_ : 
                                                IS(
                                                  connect_ : [
                                                    connect(
                                                      nodeField_ : SFString('offset'),
                                                      protoField_ : SFString('locationOffset'))])),

                                            VisibilitySensor(
                                              DEF_ : SFString('MovementVisibilitySensor')),

                                            Script(
                                              DEF_ : SFString('VisibilityControlScript'),
                                              field_ : [
                                                field(
                                                  type_ : SFString("SFBool"),
                                                  name_ : SFString('traceEnabled'),
                                                  accessType_ : SFString("initializeOnly")),

                                                field(
                                                  type_ : SFString("SFBool"),
                                                  name_ : SFString('isVisible'),
                                                  accessType_ : SFString("initializeOnly"),
                                                  value_ : SFString('true')),

                                                field(
                                                  type_ : SFString("SFVec3f"),
                                                  name_ : SFString('planeSensorTranslation'),
                                                  accessType_ : SFString("initializeOnly"),
                                                  value_ : SFString('0 0 0')),

                                                field(
                                                  type_ : SFString("SFBool"),
                                                  name_ : SFString('setIsVisible'),
                                                  accessType_ : SFString("inputOnly")),

                                                field(
                                                  type_ : SFString("SFBool"),
                                                  name_ : SFString('setPlaneSensorIsActive'),
                                                  accessType_ : SFString("inputOnly")),

                                                field(
                                                  type_ : SFString("SFVec3f"),
                                                  name_ : SFString('setPlaneSensorTranslation'),
                                                  accessType_ : SFString("inputOnly")),

                                                field(
                                                  type_ : SFString("SFVec3f"),
                                                  name_ : SFString('translationChanged'),
                                                  accessType_ : SFString("outputOnly")),

                                                field(
                                                  type_ : SFString("SFVec3f"),
                                                  name_ : SFString('translationOffsetChanged'),
                                                  accessType_ : SFString("outputOnly"))],

                                              IS_ : 
                                                IS(
                                                  connect_ : [
                                                    connect(
                                                      nodeField_ : SFString('traceEnabled'),
                                                      protoField_ : SFString('traceEnabled'))]),
                                              ,
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
})),

                                            ROUTE(
                                              fromField_ : SFString('isActive'),
                                              fromNode_ : SFString('PlaneMovementSensor'),
                                              toField_ : SFString('setPlaneSensorIsActive'),
                                              toNode_ : SFString('VisibilityControlScript')),

                                            ROUTE(
                                              fromField_ : SFString('translation_changed'),
                                              fromNode_ : SFString('PlaneMovementSensor'),
                                              toField_ : SFString('setPlaneSensorTranslation'),
                                              toNode_ : SFString('VisibilityControlScript')),

                                            ROUTE(
                                              fromField_ : SFString('isActive'),
                                              fromNode_ : SFString('MovementVisibilitySensor'),
                                              toField_ : SFString('setIsVisible'),
                                              toNode_ : SFString('VisibilityControlScript'))])])]),

                                ROUTE(
                                  fromField_ : SFString('translation_changed'),
                                  fromNode_ : SFString('PlaneMovementSensor'),
                                  toField_ : SFString('set_translation'),
                                  toNode_ : SFString('MovableLocation')),

                                ROUTE(
                                  fromField_ : SFString('translationChanged'),
                                  fromNode_ : SFString('VisibilityControlScript'),
                                  toField_ : SFString('set_translation'),
                                  toNode_ : SFString('MovableLocation')),

                                ROUTE(
                                  fromField_ : SFString('translationOffsetChanged'),
                                  fromNode_ : SFString('VisibilityControlScript'),
                                  toField_ : SFString('set_offset'),
                                  toNode_ : SFString('PlaneMovementSensor'))])]),

                        ROUTE(
                          fromField_ : SFString('position_changed'),
                          fromNode_ : SFString('WhereSensor'),
                          toField_ : SFString('set_translation'),
                          toNode_ : SFString('FixedLocation')),

                        ROUTE(
                          fromField_ : SFString('orientation_changed'),
                          fromNode_ : SFString('WhereSensor'),
                          toField_ : SFString('set_rotation'),
                          toNode_ : SFString('FixedLocation'))])])),
          /*====================*/

            Background(
              groundColor_ : MFColor([SFColor(0.1), SFColor(0.1), SFColor(0.3)]),
              skyColor_ : MFColor([SFColor(0.5), SFColor(0.5), SFColor(0.1)])),

            Anchor(
              description_ : SFString('HeadsUpDisplayExample'),
              parameter_ : MFString([SFString("target=_blank")]),
              url_ : MFString([SFString("HeadsUpDisplayExample.x3d"), SFString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d"), SFString("HeadsUpDisplayExample.wrl"), SFString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl")]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(1)]),
                          emissiveColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(1)]))),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("HeadsUpDisplayPrototype.x3d"), SFString("is a Prototype definition file."), SFString(""), SFString("To see an example scene using this node"), SFString("click this text to view"), SFString("HeadsUpDisplayExample.x3d")]),
                      fontStyle_ : 
                        FontStyle(
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                          size_ : 0.8)))])]));
void main() { exit(0); }
