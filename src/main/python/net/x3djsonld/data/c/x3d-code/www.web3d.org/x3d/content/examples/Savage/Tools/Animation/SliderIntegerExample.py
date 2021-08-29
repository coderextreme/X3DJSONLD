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
    meta(content='SliderIntegerExample.x3d',name='title'),
    meta(content='This is an example of the SliderInteger prototype, showing a slider bar starting at 12 and ranging from 0 to 24.',name='description'),
    meta(content='Jane Wu',name='creator'),
    meta(content='19 September 2001',name='created'),
    meta(content='3 March 2013',name='modified'),
    meta(content='slider example',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/SliderIntegerExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Slider user-interface widget that produces integer output values',name='SliderInteger',url=["../../../Savage/Tools/Animation/SliderIntegerPrototype.x3d#SliderInteger","https://savage.nps.edu/Savage/Tools/Animation/SliderIntegerPrototype.x3d#SliderInteger","../../../Savage/Tools/Animation/SliderIntegerPrototype.wrl#SliderInteger","https://savage.nps.edu/Savage/Tools/Animation/SliderIntegerPrototype.wrl#SliderInteger"],
      field=[
      field(accessType='initializeOnly',appinfo='default value 1.0',name='height',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='default value 0.1',name='radius',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='default value .8 .4 .8',name='sliderBarColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='default value .3 .4 .8',name='sliderBallColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='default value .2 .3 .9',name='sliderEndColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='default value 0',name='min',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='default value 10',name='max',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='default value 0',name='value',type='SFInt32'),
      field(accessType='inputOnly',appinfo='set minimum value for slider bar',name='setMin',type='SFInt32'),
      field(accessType='inputOnly',appinfo='set maximum value for slider bar',name='setMax',type='SFInt32'),
      field(accessType='inputOnly',appinfo='set value for slider bar',name='setValue',type='SFInt32'),
      field(accessType='outputOnly',appinfo='output value for slider bar',name='valueChanged',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='default value 0.02',name='barRadius',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Enable/disable console output for troubleshooting',name='traceEnabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Allowed values: vertical, horizontal',name='layoutDirection',type='SFString')]),
    ExternProtoDeclare(appinfo='SingleTypeConversion converts from a single typed value to various other types of values',name='SingleTypeConversion',url=["../../../Savage/Tools/Authoring/SingleTypeConversionPrototype.x3d#SingleTypeConversion","https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionPrototype.x3d#SingleTypeConversion","../../../Savage/Tools/Authoring/SingleTypeConversionPrototype.wrl#SingleTypeConversion","https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionPrototype.wrl#SingleTypeConversion"],
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
    #  Scene graph begins here 
    Viewpoint(description='Drag slider ball to change values',position=(0,1,9)),
    Billboard(axisOfRotation=(0,0,0),
      children=[
      Transform(translation=(0,2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,1))),
          geometry=Text(string=["Drag slider ball","to change values,","select end stops to","increment/decrement"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))]),
      Transform(translation=(-0.4,-1.2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(DEF='ResultString'))]),
      Transform(translation=(0,-2,0),
        children=[
        ProtoInstance(DEF='SliderExample',name='SliderInteger',
          fieldValue=[
          fieldValue(name='layoutDirection',value='horizontal'),
          fieldValue(name='height',value=5),
          fieldValue(name='radius',value=0.1),
          fieldValue(name='min',value=0),
          fieldValue(name='max',value=24),
          fieldValue(name='value',value=12),
          fieldValue(name='sliderBarColor',value=(0.8,0.4,0.8)),
          fieldValue(name='sliderBallColor',value=(0.3,0.4,0.8)),
          fieldValue(name='sliderEndColor',value=(0.2,0.3,0.9)),
          fieldValue(name='traceEnabled',value=True)])])]),
    ProtoInstance(DEF='IntegerConverter',name='SingleTypeConversion'),
    ROUTE(fromField='valueChanged',fromNode='SliderExample',toField='IntegerValue',toNode='IntegerConverter'),
    ROUTE(fromField='StringsResult',fromNode='IntegerConverter',toField='set_string',toNode='ResultString')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SliderIntegerExample.py")
