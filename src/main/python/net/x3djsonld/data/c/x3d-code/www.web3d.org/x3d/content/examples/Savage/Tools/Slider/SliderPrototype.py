###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='SliderPrototype.x3d',name='title'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='12 February 2001',name='created'),
    meta(content='11 November 2015',name='modified'),
    meta(content='External prototype of a slider to be used to control scenes where integer values are needed. This file is a combination of a slider prototype and a conversion program.',name='description'),
    meta(content='needs troubleshooting.',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='ScaledSFFloat',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='oldMin',type='SFFloat',value=0),
        field(accessType='initializeOnly',name='oldMax',type='SFFloat',value=1),
        field(accessType='initializeOnly',name='newMin',type='SFFloat',value=0),
        field(accessType='initializeOnly',name='newMax',type='SFFloat',value=1),
        field(accessType='inputOnly',name='set_oldMin',type='SFFloat'),
        field(accessType='inputOnly',name='set_oldMax',type='SFFloat'),
        field(accessType='inputOnly',name='set_newMin',type='SFFloat'),
        field(accessType='inputOnly',name='set_newMax',type='SFFloat'),
        field(accessType='inputOnly',name='set_value',type='SFFloat'),
        field(accessType='outputOnly',name='value_changed',type='SFFloat')]),
      ProtoBody=ProtoBody(
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        children=[
        Script(DEF='ScaledSFFloatScriptNode',url=["ScaledSFFloatScript.class","https://savage.nps.edu/Savage/Tools/ExerciseClock/ScaledSFFloatScript.class"],
          field=[
          field(accessType='initializeOnly',name='oldMin',type='SFFloat'),
          field(accessType='initializeOnly',name='oldMax',type='SFFloat'),
          field(accessType='initializeOnly',name='newMin',type='SFFloat'),
          field(accessType='initializeOnly',name='newMax',type='SFFloat'),
          field(accessType='inputOnly',name='set_oldMin',type='SFFloat'),
          field(accessType='inputOnly',name='set_oldMax',type='SFFloat'),
          field(accessType='inputOnly',name='set_newMin',type='SFFloat'),
          field(accessType='inputOnly',name='set_newMax',type='SFFloat'),
          field(accessType='inputOnly',name='set_value',type='SFFloat'),
          field(accessType='outputOnly',name='value_changed',type='SFFloat')],
          IS=IS(
            connect=[
            connect(nodeField='oldMin',protoField='oldMin'),
            connect(nodeField='oldMax',protoField='oldMax'),
            connect(nodeField='newMin',protoField='newMin'),
            connect(nodeField='newMax',protoField='newMax'),
            connect(nodeField='set_oldMin',protoField='set_oldMin'),
            connect(nodeField='set_oldMax',protoField='set_oldMax'),
            connect(nodeField='set_newMin',protoField='set_newMin'),
            connect(nodeField='set_newMax',protoField='set_newMax'),
            connect(nodeField='set_value',protoField='set_value'),
            connect(nodeField='value_changed',protoField='value_changed')]))])),
    ProtoDeclare(name='SingleTypeConversion',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='SFBoolValue',type='SFBool'),
        field(accessType='inputOnly',name='SFFloatValue',type='SFFloat'),
        field(accessType='inputOnly',name='SFInt32Value',type='SFInt32'),
        field(accessType='inputOnly',name='SFStringValue',type='SFString'),
        field(accessType='outputOnly',name='SFBoolResult',type='SFBool'),
        field(accessType='outputOnly',name='SFFloatResult',type='SFFloat'),
        field(accessType='outputOnly',name='SFInt32Result',type='SFInt32'),
        field(accessType='outputOnly',name='SFStringResult',type='SFString'),
        field(accessType='outputOnly',name='MFStringResult',type='MFString')]),
      ProtoBody=ProtoBody(
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        children=[
        Script(DEF='SingleTypeConversionScriptNode',url=["SingleTypeConversionScript.class","https://savage.nps.edu/Savage/Tools/ExerciseClock/SingleTypeConversionScript.class"],
          field=[
          field(accessType='inputOnly',name='SFBoolValue',type='SFBool'),
          field(accessType='inputOnly',name='SFFloatValue',type='SFFloat'),
          field(accessType='inputOnly',name='SFInt32Value',type='SFInt32'),
          field(accessType='inputOnly',name='SFStringValue',type='SFString'),
          field(accessType='outputOnly',name='SFBoolResult',type='SFBool'),
          field(accessType='outputOnly',name='SFFloatResult',type='SFFloat'),
          field(accessType='outputOnly',name='SFInt32Result',type='SFInt32'),
          field(accessType='outputOnly',name='SFStringResult',type='SFString'),
          field(accessType='outputOnly',name='MFStringResult',type='MFString')],
          IS=IS(
            connect=[
            connect(nodeField='SFBoolValue',protoField='SFBoolValue'),
            connect(nodeField='SFFloatValue',protoField='SFFloatValue'),
            connect(nodeField='SFInt32Value',protoField='SFInt32Value'),
            connect(nodeField='SFStringValue',protoField='SFStringValue'),
            connect(nodeField='SFBoolResult',protoField='SFBoolResult'),
            connect(nodeField='SFFloatResult',protoField='SFFloatResult'),
            connect(nodeField='SFInt32Result',protoField='SFInt32Result'),
            connect(nodeField='SFStringResult',protoField='SFStringResult'),
            connect(nodeField='MFStringResult',protoField='MFStringResult')]))])),
    ProtoDeclare(name='Slider',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='height',type='SFFloat',value=1),
        field(accessType='initializeOnly',name='radius',type='SFFloat',value=.1),
        field(accessType='initializeOnly',name='min',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='max',type='SFInt32',value=10),
        field(accessType='initializeOnly',name='value',type='SFInt32',value=0),
        field(accessType='inputOnly',name='set_min',type='SFInt32'),
        field(accessType='inputOnly',name='set_max',type='SFInt32'),
        field(accessType='outputOnly',name='set_value',type='SFInt32'),
        field(accessType='outputOnly',name='value_changed',type='SFInt32')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='CONNECTOR_TRANS',
            children=[
            Shape(
              geometry=Cylinder(radius=.02),
              appearance=Appearance(
                material=Material(diffuseColor=(.8,.4,.8))))]),
          Transform(DEF='BALL_TRANS',
            children=[
            TouchSensor(DEF='BALL_TOUCH'),
            Shape(
              geometry=Sphere(radius=.1),
              appearance=Appearance(
                material=Material(diffuseColor=(.3,.4,.8)))),
            PlaneSensor(DEF='BALL_PLANE')]),
          Transform(DEF='BOTTOM_DISK_TRANS',
            children=[
            TouchSensor(DEF='BOTTOM_DISK_TOUCH'),
            Shape(
              geometry=Cylinder(height=.05,radius=.1),
              appearance=Appearance(
                material=Material(diffuseColor=(.2,.3,.9))))]),
          Transform(DEF='TOP_DISK_TRANS',
            children=[
            TouchSensor(DEF='TOP_DISK_TOUCH'),
            Shape(
              geometry=Cylinder(height=.05,radius=.1),
              appearance=Appearance(
                material=Material(diffuseColor=(.2,.3,.9))))])]),
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='SLIDER_SCRIPT',url=["SliderScript.class","https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderScript.class"],
          field=[
          field(accessType='initializeOnly',name='height',type='SFFloat'),
          field(accessType='initializeOnly',name='radius',type='SFFloat'),
          field(accessType='initializeOnly',name='min',type='SFInt32'),
          field(accessType='initializeOnly',name='max',type='SFInt32'),
          field(accessType='initializeOnly',name='value',type='SFInt32'),
          field(accessType='inputOnly',name='set_min',type='SFInt32'),
          field(accessType='inputOnly',name='set_max',type='SFInt32'),
          field(accessType='outputOnly',name='set_value',type='SFInt32'),
          field(accessType='outputOnly',name='value_changed',type='SFInt32'),
          field(accessType='inputOnly',name='bottomDiskTouched',type='SFBool'),
          field(accessType='inputOnly',name='topDiskTouched',type='SFBool'),
          field(accessType='inputOnly',name='set_ballTrans',type='SFVec3f'),
          field(accessType='inputOnly',name='set_dragActive',type='SFBool'),
          field(accessType='outputOnly',name='topDiskTrans_changed',type='SFVec3f'),
          field(accessType='outputOnly',name='bottomDiskTrans_changed',type='SFVec3f'),
          field(accessType='outputOnly',name='connectorTrans_changed',type='SFVec3f'),
          field(accessType='outputOnly',name='ballTrans_changed',type='SFVec3f'),
          field(accessType='outputOnly',name='maxBallPosition_changed',type='SFVec2f'),
          field(accessType='outputOnly',name='minBallPosition_changed',type='SFVec2f')],
          IS=IS(
            connect=[
            connect(nodeField='height',protoField='height'),
            connect(nodeField='radius',protoField='radius'),
            connect(nodeField='min',protoField='min'),
            connect(nodeField='max',protoField='max'),
            connect(nodeField='value',protoField='value'),
            connect(nodeField='set_min',protoField='set_min'),
            connect(nodeField='set_max',protoField='set_max'),
            connect(nodeField='set_value',protoField='set_value'),
            connect(nodeField='value_changed',protoField='value_changed')])),
        ROUTE(fromField='bottomDiskTrans_changed',fromNode='SLIDER_SCRIPT',toField='set_translation',toNode='BOTTOM_DISK_TRANS'),
        ROUTE(fromField='topDiskTrans_changed',fromNode='SLIDER_SCRIPT',toField='set_translation',toNode='TOP_DISK_TRANS'),
        ROUTE(fromField='connectorTrans_changed',fromNode='SLIDER_SCRIPT',toField='set_translation',toNode='CONNECTOR_TRANS'),
        ROUTE(fromField='ballTrans_changed',fromNode='SLIDER_SCRIPT',toField='set_translation',toNode='BALL_TRANS'),
        ROUTE(fromField='maxBallPosition_changed',fromNode='SLIDER_SCRIPT',toField='set_maxPosition',toNode='BALL_PLANE'),
        ROUTE(fromField='minBallPosition_changed',fromNode='SLIDER_SCRIPT',toField='set_minPosition',toNode='BALL_PLANE'),
        ROUTE(fromField='isActive',fromNode='BALL_PLANE',toField='set_dragActive',toNode='SLIDER_SCRIPT'),
        ROUTE(fromField='translation_changed',fromNode='BALL_PLANE',toField='set_ballTrans',toNode='SLIDER_SCRIPT'),
        ROUTE(fromField='isActive',fromNode='BOTTOM_DISK_TOUCH',toField='bottomDiskTouched',toNode='SLIDER_SCRIPT'),
        ROUTE(fromField='isActive',fromNode='TOP_DISK_TOUCH',toField='topDiskTouched',toNode='SLIDER_SCRIPT')])),
    Anchor(description='SliderExample',url=["SliderExample.x3d","https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderExample.x3d","SliderExample.wrl","https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["SliderPrototype","holds prototype declarations","","Select text to view","SliderTest.x3d"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.6,0.6))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SliderPrototype.py")
