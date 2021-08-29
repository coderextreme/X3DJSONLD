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
    meta(content='ColorSequencerExample.x3d',name='title'),
    meta(content='This example shows how to use the ColorSequencer prototype in an animated scenario. ColorSequencer outputs an individual SFColor without interpolation, in response to selecting an array value or simply sequencing next/previous.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 May 2003',name='created'),
    meta(content='1 November 2015',name='modified'),
    meta(content='http://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator',name='reference'),
    meta(content='http://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d',name='reference'),
    meta(content='ColorSequencerPrototype.x3d',name='reference'),
    meta(content='color sequencer',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/ColorSequencerExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='ColorSequencer outputs a single color value by selecting an array index or simply sequencing next/previous',name='ColorSequencer',url=["../../../Savage/Tools/Animation/ColorSequencerPrototype.x3d#ColorSequencer","https://savage.nps.edu/Savage/Tools/Animation/ColorSequencerPrototype.x3d#ColorSequencer","../../../Savage/Tools/Animation/ColorSequencerPrototype.wrl#ColorSequencer","https://savage.nps.edu/Savage/Tools/Animation/ColorSequencerPrototype.wrl#ColorSequencer"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not this sequencer is active',name='enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='Initial index is array element 0. Setting index past colors[max] uses final color value setting, while index less than 0 uses colors[0] value.',name='index',type='SFInt32'),
      field(accessType='inputOutput',appinfo='Array of color values that are each the outputs of the sequencer. No interpolation occurs between values.',name='colors',type='MFColor'),
      field(accessType='outputOnly',appinfo='Current output color value of the sequencer corresponding to colors[index] value.',name='color_changed',type='SFColor'),
      field(accessType='inputOnly',appinfo='Trigger previous color value. Wrap around from zeroth color to final color if necessary. Only respond to true inputs.',name='previous',type='SFBool'),
      field(accessType='inputOnly',appinfo='Trigger next color value. Wrap around from final color to zeroth color if necessary. Only respond to true inputs.',name='next',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Enable tracing of node operation on browser console',name='traceEnabled',type='SFBool')]
      #  <field accessType='inputOnly' appinfo='Change colors array' name='set_colors' type='MFColor'/> 
      #  <field accessType='inputOnly' appinfo='Change current colors index must be in range [0 .. colors.length-1]' name='set_index' type='SFInt32'/> 
      ),
    Viewpoint(description='ColorSequencer demo'),
    Background(skyAngle=[0.5,0.5,0.5],skyColor=[(0.5,0.5,0.5)]),
    ProtoInstance(DEF='ColorSequencerInstance',name='ColorSequencer',
      #  ROY G BIV = red orange yellow green blue indigo violet 
      fieldValue=[
      fieldValue(name='colors',value=[(1,0,0),(1,0.5,0),(1,1,0),(0,1,0),(0,0,1),(0.2,0.2,0.2),(0.4,0,0.4)]),
      fieldValue(name='enabled',value=True),
      fieldValue(name='index',value=2),
      fieldValue(name='traceEnabled',value=True)]),
    Transform(translation=(0,1.5,0),
      children=[
      Shape(
        geometry=Text(string=["ColorSequencer","Example"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=1.3)),
        appearance=Appearance(
          material=Material(DEF='MessageMaterial',diffuseColor=(0,1,1)))),
      Transform(translation=(0,-0.25,0),
        children=[
        Shape(
          geometry=Box(size=(10.0,4.0,0.1)),
          appearance=Appearance(
            material=Material(DEF='MessageBackgroundMaterial',transparency=0.8)))]),
      ROUTE(fromField='color_changed',fromNode='ColorSequencerInstance',toField='diffuseColor',toNode='MessageMaterial'),
      ROUTE(fromField='color_changed',fromNode='ColorSequencerInstance',toField='diffuseColor',toNode='MessageBackgroundMaterial')]),
    Transform(translation=(-2.4,-2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Text(string=["previous"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLD'))),
      TouchSensor(DEF='TouchPrevious',description='Select this text to see previous color'),
      ROUTE(fromField='isActive',fromNode='TouchPrevious',toField='previous',toNode='ColorSequencerInstance'),
      Shape(
        geometry=Box(size=(3.4,0.8,0.1)),
        appearance=Appearance(DEF='AppearanceTransparent',
          material=Material(transparency=1)))]),
    Transform(translation=(0.8,-2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0))),
        geometry=Text(string=["cycle"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      Shape(
        geometry=Box(size=(2,0.8,0.1)),
        appearance=Appearance(USE='AppearanceTransparent')),
      TouchSensor(DEF='TouchCycle',description='Select this text to cycle through all colors')]),
    Transform(translation=(3.2,-2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,0))),
        geometry=Text(string=["next"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      Shape(
        geometry=Box(size=(1.8,0.8,0.1)),
        appearance=Appearance(USE='AppearanceTransparent')),
      TouchSensor(DEF='TouchNext',description='Select this text to see next color'),
      ROUTE(fromField='isActive',fromNode='TouchNext',toField='next',toNode='ColorSequencerInstance')]),
    #  cycle toggler logic 
    IntegerSequencer(DEF='Ticker',key=[0,0.125,0.25,0.375,0.5,0.625,0.75],keyValue=[0,1,2,3,4,5,6]),
    TimeSensor(DEF='Clock',cycleInterval=8,enabled=False,loop=True),
    BooleanToggle(DEF='Toggler'),
    ROUTE(fromField='value_changed',fromNode='Ticker',toField='index',toNode='ColorSequencerInstance'),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='Ticker'),
    ROUTE(fromField='toggle_changed',fromNode='Toggler',toField='enabled',toNode='Clock'),
    ROUTE(fromField='isActive',fromNode='TouchCycle',toField='set_boolean',toNode='Toggler'),
    #  Ensure that next, previous selection events also turn off the color cycle 
    BooleanFilter(DEF='TogglerStop'),
    ROUTE(fromField='inputFalse',fromNode='TogglerStop',toField='toggle',toNode='Toggler'),
    ROUTE(fromField='isActive',fromNode='TouchPrevious',toField='set_boolean',toNode='TogglerStop'),
    ROUTE(fromField='isActive',fromNode='TouchNext',toField='set_boolean',toNode='TogglerStop')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ColorSequencerExample.py")
