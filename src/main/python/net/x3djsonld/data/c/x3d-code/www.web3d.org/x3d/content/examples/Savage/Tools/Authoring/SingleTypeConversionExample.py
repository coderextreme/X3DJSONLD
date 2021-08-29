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
    meta(content='SingleTypeConversionExample.x3d',name='title'),
    meta(content='Converts from a single typed value to various other types of values.',name='description'),
    meta(content='Don Brutzman, Mike Hunsberger, Jane Wu',name='creator'),
    meta(content='8 June 2003',name='created'),
    meta(content='28 February 2010',name='modified'),
    meta(content='type conversion',name='subject'),
    meta(content='SingleTypeConversionExampleDisplayBegin.png',name='Image'),
    meta(content='SingleTypeConversionExampleDisplayEnd.png',name='Image'),
    meta(content='http://www.cs.brown.edu/~gss/VRML98/paper.rev.html',name='reference'),
    meta(content='http://www.cs.brown.edu/~gss/vrml/hprotos.wrl',name='reference'),
    meta(content='http://www.cs.brown.edu/~gss/vrml/hotpot.zip',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='SingleTypeConversion converts from a single typed value to various other types of values',name='SingleTypeConversion',url=["SingleTypeConversionPrototype.x3d#SingleTypeConversion","../../../Savage/Tools/Authoring/SingleTypeConversionPrototype.x3d#SingleTypeConversion","https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionPrototype.x3d#SingleTypeConversion","SingleTypeConversionPrototype.wrl#SingleTypeConversion","../../../Savage/Tools/Authoring/SingleTypeConversionPrototype.wrl#SingleTypeConversion","https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionPrototype.wrl#SingleTypeConversion"],
      field=[
      field(accessType='initializeOnly',appinfo='decimalPlaces is the number of significant digits after the decimal point, use -1 to indicate no round off',name='decimalPlaces',type='SFInt32'),
      field(accessType='inputOnly',name='setDecimalPlaces',type='SFInt32'),
      field(accessType='inputOnly',name='BooleanValue',type='SFBool'),
      field(accessType='inputOnly',name='FloatValue',type='SFFloat'),
      field(accessType='inputOnly',name='IntegerValue',type='SFInt32'),
      field(accessType='inputOnly',name='TimeValue',type='SFTime'),
      field(accessType='outputOnly',name='BooleanResult',type='SFBool'),
      field(accessType='outputOnly',name='FloatResult',type='SFFloat'),
      field(accessType='outputOnly',name='IntegerResult',type='SFInt32'),
      field(accessType='outputOnly',name='TimeResult',type='SFTime'),
      field(accessType='outputOnly',name='StringResult',type='SFString'),
      field(accessType='outputOnly',name='StringsResult',type='MFString')]),
    #  ==================== 
    Group(
      children=[
      Transform(translation=(0,2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.6,0.1))),
          geometry=Text(string=["Example prototype use","SingleTypeConversion"],
            fontStyle=FontStyle(DEF='MIDDLE_MIDDLE',justify=["MIDDLE","MIDDLE"],size=0.75)))]),
      Transform(translation=(0,-0.25,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.35,0.4))),
          geometry=Text(string=["Integer 23 and a float counter","are converted into text below"],
            fontStyle=FontStyle(USE='MIDDLE_MIDDLE')))]),
      TimeSensor(DEF='ClockTrigger',cycleInterval=0.5,loop=True),
      BooleanTrigger(DEF='ConvertTimeToBoolean'),
      IntegerTrigger(DEF='TriggerNode',integerKey=23),
      ProtoInstance(DEF='IntegerConverter',name='SingleTypeConversion'),
      ROUTE(fromField='cycleTime',fromNode='ClockTrigger',toField='set_triggerTime',toNode='ConvertTimeToBoolean'),
      ROUTE(fromField='triggerTrue',fromNode='ConvertTimeToBoolean',toField='set_boolean',toNode='TriggerNode'),
      ROUTE(fromField='triggerValue',fromNode='TriggerNode',toField='IntegerValue',toNode='IntegerConverter'),
      Transform(translation=(-1.8,-2.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0,0))),
          geometry=Text(DEF='IntegerText',string=["__"],
            fontStyle=FontStyle(DEF='BEGIN_MIDDLE',justify=["BEGIN","MIDDLE"]))),
        ROUTE(fromField='StringsResult',fromNode='IntegerConverter',toField='set_string',toNode='IntegerText')]),
      Transform(translation=(0.2,-2.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0,0))),
          geometry=Text(DEF='FloatText',string=["_._"],
            fontStyle=FontStyle(USE='BEGIN_MIDDLE'))),
        TimeSensor(DEF='FloatClock',cycleInterval=5,loop=True),
        ScalarInterpolator(DEF='FloatCounter',key=[0,0.2,0.4,1],keyValue=[23.000,23.000,45.67,45.67]),
        ProtoInstance(DEF='FloatConverter',name='SingleTypeConversion',
          fieldValue=[
          fieldValue(name='decimalPlaces',value=2)]),
        ROUTE(fromField='fraction_changed',fromNode='FloatClock',toField='set_fraction',toNode='FloatCounter'),
        ROUTE(fromField='value_changed',fromNode='FloatCounter',toField='FloatValue',toNode='FloatConverter'),
        ROUTE(fromField='StringsResult',fromNode='FloatConverter',toField='set_string',toNode='FloatText')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SingleTypeConversionExample.py")
