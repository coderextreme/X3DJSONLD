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
    meta(content='ColorSequencerPrototype.x3d',name='title'),
    meta(content='ColorSequencer outputs an individual SFColor without interpolation, in response to selecting an array value or simply sequencing next/previous.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 May 2003',name='created'),
    meta(content='1 November 2015',name='modified'),
    meta(content='http://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/BooleanSequencerPrototype.x3d',name='reference'),
    meta(content='ColorSequencerExample.x3d',name='reference'),
    meta(content='color sequencer',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/ColorSequencerPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='ColorSequencer outputs a single color value by selecting an array index or simply sequencing next/previous',name='ColorSequencer',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Whether or not this sequencer is active',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Initial index is array element 0. Setting index past colors[max] uses final color value setting, while index less than 0 uses colors[0] value.',name='index',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='Array of color values that are each the outputs of the sequencer. No interpolation occurs between values.',name='colors',type='MFColor'),
        field(accessType='outputOnly',appinfo='Current output color value of the sequencer corresponding to colors[index] value.',name='color_changed',type='SFColor'),
        #  Utility methods 
        field(accessType='inputOnly',appinfo='Trigger previous color value. Wrap around from zeroth color to final color if necessary. Only respond to true inputs.',name='previous',type='SFBool'),
        field(accessType='inputOnly',appinfo='Trigger next color value. Wrap around from final color to zeroth color if necessary. Only respond to true inputs.',name='next',type='SFBool'),
        field(accessType='initializeOnly',appinfo='Enable tracing of node operation on browser console',name='traceEnabled',type='SFBool',value=False)]
        #  <field accessType='inputOnly' appinfo='Change colors array' name='set_colors' type='MFColor'/> 
        #  <field accessType='inputOnly' appinfo='Change current colors index must be in range [0 .. colors.length-1]' name='set_index' type='SFInt32'/> 
        ),
      ProtoBody=ProtoBody(
        children=[
        Group(
          #  initial nodes are placeholders allowing inputOutput (exposedFIeld) VRML 97 Script interfaces 
          children=[
          Switch(DEF='IndexHolder',whichChoice=-1,
            IS=IS(
              connect=[
              connect(nodeField='whichChoice',protoField='index')]),
            children=[
            TouchSensor(DEF='EnabledHolder',description='placeholder node with no touch functionality',
              IS=IS(
                connect=[
                connect(nodeField='enabled',protoField='enabled')])),
            ColorInterpolator(DEF='ColorsHolder',
              IS=IS(
                connect=[
                connect(nodeField='keyValue',protoField='colors')]))]),
          #  Script node contains all essential functionality for this prototype node 
          Script(DEF='SequencerScript',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='enabledHolderNode',type='SFNode',
              children=[
              TouchSensor(USE='EnabledHolder')]),
            field(accessType='initializeOnly',name='indexHolderNode',type='SFNode',
              children=[
              Switch(USE='IndexHolder',whichChoice=-1)]),
            field(accessType='initializeOnly',name='colorsHolderNode',type='SFNode',
              children=[
              ColorInterpolator(USE='ColorsHolder')]),
            field(accessType='inputOnly',name='previous',type='SFBool'),
            field(accessType='inputOnly',name='next',type='SFBool'),
            field(accessType='inputOutput',name='index',type='SFInt32',value=0),
            field(accessType='inputOutput',name='colors',type='MFColor'),
            field(accessType='outputOnly',name='color_changed',type='SFColor'),
            field(accessType='initializeOnly',name='enabled',type='SFBool',value=True),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool')],
            #  <field accessType='inputOnly' name='set_colors' type='MFColor'/> 
            #  <field accessType='inputOnly' name='set_index' type='SFInt32'/> 
            IS=IS(
              connect=[
              connect(nodeField='previous',protoField='previous'),
              connect(nodeField='next',protoField='next'),
              connect(nodeField='index',protoField='index'),
              connect(nodeField='colors',protoField='colors'),
              connect(nodeField='color_changed',protoField='color_changed'),
              connect(nodeField='traceEnabled',protoField='traceEnabled')]
              #  <connect nodeField='set_colors' protoField='set_colors'/> 
              #  <connect nodeField='set_index' protoField='set_index'/> 
              ))])])),
    #  ===============Example============== 
    Background(skyAngle=[0.5,0.5,0.5],skyColor=[(0.5,0.5,0.5)]),
    Viewpoint(description='ColorSequencer prototype',position=(0,0,12)),
    Anchor(description='ColorSequencer Example',url=["ColorSequencerExample.x3d","../../../Savage/Tools/Animation/ColorSequencerExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/ColorSequencerExample.x3d","ColorSequencerExample.wrl","../../../Savage/Tools/Animation/ColorSequencerExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/ColorSequencerExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["ColorSequencerPrototype","defines a prototype declaration","","Click on this text to see scene","ColorSequencerExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2)))),
      Shape(
        geometry=Box(size=(11.2,5,0.1)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.5,0.5),transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ColorSequencerPrototype.py")
