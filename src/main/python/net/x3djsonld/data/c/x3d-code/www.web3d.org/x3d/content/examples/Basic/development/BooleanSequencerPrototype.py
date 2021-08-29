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
    meta(content='BooleanSequencerPrototype.x3d',name='title'),
    meta(content='BooleanSequencer is modeled after ScalarInterpolator and generates true or false values.',name='description'),
    meta(content='Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu',name='creator'),
    meta(content='7 August 2001',name='created'),
    meta(content='20 January 2020',name='modified'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator',name='reference'),
    meta(content='boolean sequencer',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BooleanSequencerPrototype.x3d'),
    ProtoDeclare(name='BooleanSequencer',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='Regular interpolator-style input, typical range [0..1]',name='set_fraction',type='SFFloat'),
        field(accessType='inputOnly',name='set_key',type='MFFloat'),
        field(accessType='inputOutput',appinfo='Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.',name='key',type='MFFloat',
          #  NULL initialization value 
          ),
        field(accessType='outputOnly',name='key_changed',type='MFFloat'),
        field(accessType='inputOnly',name='set_keyValue',type='MFBool'),
        field(accessType='inputOutput',appinfo='Array of true|false values. Must have the same number of keys as keyValues.',name='keyValue',type='MFBool',
          #  NULL initialization value 
          ),
        field(accessType='outputOnly',appinfo='Regular interpolator-style input',name='keyValue_changed',type='MFBool'),
        field(accessType='outputOnly',appinfo='Regular interpolator-style input',name='value_changed',type='SFBool'),
        field(accessType='inputOnly',appinfo='Utility method',name='previous',type='SFBool'),
        field(accessType='inputOnly',appinfo='Utility method',name='next',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          ScalarInterpolator(DEF='KeyHolder',
            IS=IS(
              connect=[
              connect(nodeField='key',protoField='key')])),
          Anchor(DEF='KeyValueHolder',
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='keyValue')])),
          Script(DEF='SequencerScript',directOutput=True,
            #  Regular interpolator-style input 
            field=[
            field(accessType='inputOnly',appinfo='typical range [0..1]',name='set_fraction',type='SFFloat'),
            field(accessType='inputOnly',appinfo='Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.',name='set_key',type='MFFloat'),
            field(accessType='initializeOnly',name='keyHolderNode',type='SFNode',
              children=[
              ScalarInterpolator(USE='KeyHolder')]),
            field(accessType='outputOnly',name='key_changed',type='MFFloat'),
            field(accessType='inputOnly',appinfo='Array of true or false values. Must have the same number of keys as keyValues.',name='set_keyValue',type='MFBool'),
            field(accessType='initializeOnly',name='keyValueHolderNode',type='SFNode',
              children=[
              Anchor(USE='KeyValueHolder')]),
            field(accessType='outputOnly',name='keyValue_changed',type='MFBool'),
            #  Regular interpolator-style output 
            field(accessType='outputOnly',name='value_changed',type='SFBool'),
            #  Utility methods 
            field(accessType='inputOnly',name='previous',type='SFBool'),
            field(accessType='inputOnly',name='next',type='SFBool'),
            #  Script-specific interfaces, not needed for node definition 
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False),
            field(accessType='initializeOnly',name='keyValueArray',type='MFInt32',
              #  NULL initialization value 
              ),
            field(accessType='initializeOnly',name='previousFraction',type='SFFloat',value=0.0),
            field(accessType='initializeOnly',name='nextIndex',type='SFInt32',value=0),
            field(accessType='outputOnly',name='valid',type='SFBool',value=True),
            field(accessType='initializeOnly',name='recheckValidity',type='SFBool',value=False),
            field(accessType='initializeOnly',appinfo='leftToRight',name='forward',type='SFBool',value=True),
            field(accessType='inputOnly',name='key',type='MFFloat',
              #  NULL initialization value 
              ),
            field(accessType='inputOutput',name='keyValue',type='MFInt32',
              #  NULL initialization value 
              )],
            IS=IS(
              connect=[
              connect(nodeField='set_fraction',protoField='set_fraction'),
              connect(nodeField='set_key',protoField='set_key'),
              connect(nodeField='key_changed',protoField='key_changed'),
              connect(nodeField='set_keyValue',protoField='set_keyValue'),
              connect(nodeField='keyValue_changed',protoField='keyValue_changed'),
              connect(nodeField='value_changed',protoField='value_changed'),
              connect(nodeField='previous',protoField='previous'),
              connect(nodeField='next',protoField='next')]))])])),
    #  ===============Example============== 
    Anchor(description='BooleanSequencerExample',parameter=["target=_blank"],url=["BooleanSequencerExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d","BooleanSequencerExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["BooleanSequencerPrototype","defines a prototype","","Click on this text to see","BooleanSequencerExample"," scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BooleanSequencerPrototype.py")
