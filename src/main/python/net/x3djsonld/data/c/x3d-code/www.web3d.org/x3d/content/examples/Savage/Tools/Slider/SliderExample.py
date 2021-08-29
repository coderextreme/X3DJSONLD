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
    meta(content='SliderExample.x3d',name='title'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='12 February 2001',name='created'),
    meta(content='11 November 2015',name='modified'),
    meta(content='This example uses an external proto SliderProto to generate a slider that produces integer values.',name='description'),
    meta(content='needs troubleshooting.',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='Slider',url=["SliderPrototype.x3d#Slider","https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderPrototype.x3d#Slider","SliderPrototype.wrl#Slider","https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderPrototype.wrl#Slider"],
      field=[
      field(accessType='initializeOnly',name='height',type='SFFloat'),
      field(accessType='initializeOnly',name='radius',type='SFFloat'),
      field(accessType='initializeOnly',name='min',type='SFInt32'),
      field(accessType='initializeOnly',name='max',type='SFInt32'),
      field(accessType='initializeOnly',name='value',type='SFInt32'),
      field(accessType='inputOnly',name='set_min',type='SFInt32'),
      field(accessType='inputOnly',name='set_max',type='SFInt32'),
      field(accessType='outputOnly',name='set_value',type='SFInt32'),
      field(accessType='outputOnly',name='value_changed',type='SFInt32')]),
    ExternProtoDeclare(name='ScaledSFFloat',url=["SliderPrototype.x3d#ScaledSFFloat","https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderPrototype.x3d#ScaledSFFloat","SliderPrototype.wrl#ScaledSFFloat","https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderPrototype.wrl#ScaledSFFloat"],
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
      field(accessType='outputOnly',name='value_changed',type='SFFloat')]),
    ExternProtoDeclare(name='SingleTypeConversion',url=["SliderPrototype.x3d#SingleTypeConversion","https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderPrototype.x3d#SingleTypeConversion","SliderPrototype.wrl#SingleTypeConversion","https://savage.nps.edu/Savage/Tools/ExerciseClock/SliderPrototype.wrl#SingleTypeConversion"],
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
    Viewpoint(description='Slider Example'),
    Transform(rotation=(0,0,1,-1.57079),
      children=[
      ProtoInstance(DEF='Slider',name='Slider',
        fieldValue=[
        fieldValue(name='min',value=0),
        fieldValue(name='max',value=24),
        fieldValue(name='height',value=5),
        fieldValue(name='radius',value=0.1),
        fieldValue(name='value',value=12)])]),
    Transform(translation=(4,2,0),
      children=[
      Shape(
        geometry=Text(DEF='VALUE_TEXT',string=["Value"]))]),
    ProtoInstance(DEF='Converter',name='SingleTypeConversion'),
    ProtoInstance(DEF='Scaler',name='ScaledSFFloat',
      fieldValue=[
      fieldValue(name='oldMin',value=0),
      fieldValue(name='oldMax',value=24),
      fieldValue(name='newMin',value=0),
      fieldValue(name='newMax',value=1)]),
    ROUTE(fromField='value_changed',fromNode='Slider',toField='SFInt32Value',toNode='Converter'),
    ROUTE(fromField='SFFloatResult',fromNode='Converter',toField='set_value',toNode='Scaler'),
    ROUTE(fromField='MFStringResult',fromNode='Converter',toField='set_string',toNode='VALUE_TEXT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SliderExample.py")
