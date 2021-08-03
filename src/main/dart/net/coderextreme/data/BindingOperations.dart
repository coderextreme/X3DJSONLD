// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('BindingOperations.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('5 January 2008')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('22 July 2013')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('BindingOperations.console.txt')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('BindingStackOperations.png')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('X3D for Web Authors, Section 2.5.1, Figure 4.1')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://X3dGraphics.com')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/X3dResources.html')),

            meta(
              name_ : SFString('rights'),
              content_ : SFString('Copyright Don Brutzman and Leonard Daly 2007')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Viewpoint(
              DEF_ : SFString('View1'),
              centerOfRotation_ : SFVec3f([SFDouble(-6), SFDouble(0), SFDouble(0)]),
              description_ : SFString('Viewpoint 1'),
              position_ : SFVec3f([SFDouble(-6), SFDouble(0), SFDouble(5)])),

            Viewpoint(
              DEF_ : SFString('View2'),
              centerOfRotation_ : SFVec3f([SFDouble(-2), SFDouble(0), SFDouble(0)]),
              description_ : SFString('Viewpoint 2'),
              position_ : SFVec3f([SFDouble(-2), SFDouble(0), SFDouble(5)])),

            Viewpoint(
              DEF_ : SFString('View3'),
              centerOfRotation_ : SFVec3f([SFDouble(2), SFDouble(0), SFDouble(0)]),
              description_ : SFString('Viewpoint 3'),
              position_ : SFVec3f([SFDouble(2), SFDouble(0), SFDouble(5)])),

            Viewpoint(
              DEF_ : SFString('View4'),
              centerOfRotation_ : SFVec3f([SFDouble(6), SFDouble(0), SFDouble(0)]),
              description_ : SFString('Viewpoint 4'),
              position_ : SFVec3f([SFDouble(6), SFDouble(0), SFDouble(5)])),
          /*Script initialization ought to first bind view5 below.*/

            Group(
              children_ : [
                Transform(
                  DEF_ : SFString('Text1'),
                  translation_ : SFVec3f([SFDouble(-6), SFDouble(0), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("View"), SFString("# 1")]),
                          fontStyle_ : 
                            FontStyle(
                              DEF_ : SFString('CenterJustify'),
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))]),

                Transform(
                  DEF_ : SFString('Text2'),
                  translation_ : SFVec3f([SFDouble(-2), SFDouble(0), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("View"), SFString("# 2")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('CenterJustify'))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))))]),

                Transform(
                  DEF_ : SFString('Text3'),
                  translation_ : SFVec3f([SFDouble(2), SFDouble(0), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("View"), SFString("# 3")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('CenterJustify'))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))))]),

                Transform(
                  DEF_ : SFString('Text4'),
                  translation_ : SFVec3f([SFDouble(6), SFDouble(0), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("View"), SFString("# 4")]),
                          fontStyle_ : 
                            FontStyle(
                              USE_ : SFString('CenterJustify'))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material()))])]),
          /*The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9.*/
          /*It does not need to be studied in this chapter.*/

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(-3), SFDouble(8)]),
              /*notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script.*/
              children_ : [
                Viewpoint(
                  DEF_ : SFString('ClickToAnimateView'),
                  description_ : SFString('Select animation sequence'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(7)])),

                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("Click here to animate")]),
                      fontStyle_ : 
                        FontStyle(
                          justify_ : MFString([SFString("MIDDLE"), SFString("BEGIN")]))),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.8), SFDouble(0.4), SFDouble(0)])))),

                Shape(
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(7), SFDouble(1), SFDouble(0.02)])),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          transparency_ : 1))),

                TouchSensor(
                  DEF_ : SFString('TextTouchSensor'),
                  description_ : SFString('Click to begin animating viewpoint selections')),

                TimeSensor(
                  DEF_ : SFString('Clock'),
                  cycleInterval_ : 10),

                ROUTE(
                  fromField_ : SFString('touchTime'),
                  fromNode_ : SFString('TextTouchSensor'),
                  toField_ : SFString('set_startTime'),
                  toNode_ : SFString('Clock')),

                IntegerSequencer(
                  DEF_ : SFString('TimingSequencer'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.2), SFFloat(0.3), SFFloat(0.4), SFFloat(0.5), SFFloat(0.6), SFFloat(0.7), SFFloat(0.8), SFFloat(1)]),
                  keyValue_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(10)])),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('Clock'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('TimingSequencer')),

                Script(
                  DEF_ : SFString('BindingSequencerEngine'),
                  field_ : [
                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('set_timeEvent'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('bindView1'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('bindView2'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('bindView3'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('bindView4'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('bindView5'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('view1Bound'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('view2Bound'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('view3Bound'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('view4Bound'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFInt32"),
                      name_ : SFString('priorInputvalue'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('-1')),
                  ],
ecmascript:eval (0

, function initialize ()
{
    bindView5 = true;
    Browser.print ('Timing script initialized and ready for activation');
}
, function set_timeEvent (inputValue)
{
    if (inputValue == priorInputvalue)
    {
        return; // ignore repeated inputs
    }
    // new value provided
    priorInputvalue = inputValue;
    // Browser.print ('\ntimeEvent inputValue=' + inputValue);

    // mimics user execution of Figure 4.1 steps t_0 through t_8
    if (inputValue == 0)
    {
        Browser.print ('\n===========\n time t0');
        bindView1 = true;
    }
    else if (inputValue == 1)
    {
        Browser.print ('\n===========\n time t1');
        bindView2 = true;
    }
    else if (inputValue == 2)
    {
        Browser.print ('\n===========\n time t2');
        bindView3 = true;
    }
    else if (inputValue == 3)
    {
        Browser.print ('\n===========\n time t3');
        bindView3 = false;
    }
    else if (inputValue == 4)
    {
        Browser.print ('\n===========\n time t4');
        bindView1 = true;
    }
    else if (inputValue == 5)
    {
        Browser.print ('\n===========\n time t5');
        bindView2 = false;
    }
    else if (inputValue == 6)
    {
        Browser.print ('\n===========\n time t6');
        bindView1 = false;
    }
    else if (inputValue == 7)
    {
        Browser.print ('\n===========\n time t7');
        bindView4 = true;

    }
    else if (inputValue == 8)
    {
        Browser.print ('\n===========\n time t8');
        Browser.print (', no action, all done');
        Browser.print ('\n\n');
    }
}

, function view1Bound (inputValue)
{
    Browser.print (', view1Bound ' + (inputValue));
    if (priorInputvalue == -1) Browser.print ('\n');
}
, function view2Bound (inputValue)
{
    Browser.print (', view2Bound ' + (inputValue));
}
, function view3Bound (inputValue)
{
    Browser.print (', view3Bound ' + (inputValue));
}
, function view4Bound (inputValue)
{
    Browser.print (', view4Bound ' + (inputValue));
}
, function view5Bound (inputValue)
{
    Browser.print (', view5Bound ' + (inputValue));
})),
              /*drive Script with TimeSensor clock*/

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('TimingSequencer'),
                  toField_ : SFString('set_timeEvent'),
                  toNode_ : SFString('BindingSequencerEngine')),
              /*Script will bind and unbind Viewpoint nodes*/

                ROUTE(
                  fromField_ : SFString('bindView1'),
                  fromNode_ : SFString('BindingSequencerEngine'),
                  toField_ : SFString('set_bind'),
                  toNode_ : SFString('View1')),

                ROUTE(
                  fromField_ : SFString('bindView2'),
                  fromNode_ : SFString('BindingSequencerEngine'),
                  toField_ : SFString('set_bind'),
                  toNode_ : SFString('View2')),

                ROUTE(
                  fromField_ : SFString('bindView3'),
                  fromNode_ : SFString('BindingSequencerEngine'),
                  toField_ : SFString('set_bind'),
                  toNode_ : SFString('View3')),

                ROUTE(
                  fromField_ : SFString('bindView4'),
                  fromNode_ : SFString('BindingSequencerEngine'),
                  toField_ : SFString('set_bind'),
                  toNode_ : SFString('View4')),

                ROUTE(
                  fromField_ : SFString('bindView5'),
                  fromNode_ : SFString('BindingSequencerEngine'),
                  toField_ : SFString('set_bind'),
                  toNode_ : SFString('ClickToAnimateView')),
              /*Viewpoint nodes report bind and unbind events*/

                ROUTE(
                  fromField_ : SFString('isBound'),
                  fromNode_ : SFString('View1'),
                  toField_ : SFString('view1Bound'),
                  toNode_ : SFString('BindingSequencerEngine')),

                ROUTE(
                  fromField_ : SFString('isBound'),
                  fromNode_ : SFString('View2'),
                  toField_ : SFString('view2Bound'),
                  toNode_ : SFString('BindingSequencerEngine')),

                ROUTE(
                  fromField_ : SFString('isBound'),
                  fromNode_ : SFString('View3'),
                  toField_ : SFString('view3Bound'),
                  toNode_ : SFString('BindingSequencerEngine')),

                ROUTE(
                  fromField_ : SFString('isBound'),
                  fromNode_ : SFString('View4'),
                  toField_ : SFString('view4Bound'),
                  toNode_ : SFString('BindingSequencerEngine'))])]));
void main() { exit(0); }
