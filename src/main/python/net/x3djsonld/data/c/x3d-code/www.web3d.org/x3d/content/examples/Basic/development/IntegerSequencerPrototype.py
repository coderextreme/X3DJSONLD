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
    meta(content='IntegerSequencerPrototype.x3d',name='title'),
    meta(content='This proto, modeled after a ScalarInterpolator, generates an array of integer values based on the input fraction and keys.',name='description'),
    meta(content='MFInt32 keyValue accessType is listed as initializeOnly/field, since inputOutput cannot be translated to exposedField in VRML97 scripting.',name='warning'),
    meta(content='Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu, Matthew Braun',name='creator'),
    meta(content='20 August 2001',name='created'),
    meta(content='21 January 2020',name='modified'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator',name='reference'),
    meta(content='integer sequencer',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IntegerSequencerPrototype.x3d'),
    ProtoDeclare(name='IntegerSequencer',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='Regular interpolator-style input, range [0..1]',name='set_fraction',type='SFFloat'),
        field(accessType='inputOnly',appinfo='Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.',name='set_key',type='MFFloat'),
        field(accessType='inputOutput',appinfo='Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.',name='key',type='MFFloat'),
        field(accessType='outputOnly',appinfo='Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.',name='key_changed',type='MFFloat'),
        field(accessType='inputOnly',appinfo='Array of integer values. Must have the same number of keys as keyValues.',name='set_keyValue',type='MFInt32'),
        field(accessType='initializeOnly',appinfo='Array of integer values. Must have the same number of keys as keyValues.',name='keyValue',type='MFInt32'),
        field(accessType='outputOnly',appinfo='Array of integer values. Must have the same number of keys as keyValues.',name='keyValue_changed',type='MFInt32'),
        field(accessType='outputOnly',appinfo='Regular interpolator-style input',name='value_changed',type='SFInt32'),
        field(accessType='inputOnly',appinfo='Utility method',name='previous',type='SFBool'),
        field(accessType='inputOnly',appinfo='Utility method',name='next',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Switch(whichChoice=-1,
            children=[
            ScalarInterpolator(DEF='KeyHolder',
              IS=IS(
                connect=[
                connect(nodeField='key',protoField='key')]))]),
          Script(DEF='SequencerScript',directOutput=True,
            #  Regular interpolator-style input 
            field=[
            field(accessType='inputOnly',appinfo='range [0..1]',name='set_fraction',type='SFFloat'),
            field(accessType='inputOnly',appinfo='Array sequentially increasing [0..1]. Must have the same number of keys as keyValues.',name='set_key',type='MFFloat'),
            field(accessType='initializeOnly',name='keyHolderNode',type='SFNode',
              children=[
              ScalarInterpolator(USE='KeyHolder')]),
            field(accessType='outputOnly',appinfo='Array sequentially increasing [0..1]. Must have the same number of keys as keyValues.',name='key_changed',type='MFFloat'),
            field(accessType='inputOnly',appinfo='Array of integer values. Must have the same number of keys as keyValues.',name='set_keyValue',type='MFInt32'),
            field(accessType='initializeOnly',name='keyValue',type='MFInt32'),
            field(accessType='outputOnly',appinfo='Array of integer values. Must have the same number of keys as keyValues.',name='keyValue_changed',type='MFInt32'),
            #  Regular interpolator-style output 
            field(accessType='outputOnly',name='value_changed',type='SFInt32'),
            #  Utility methods 
            field(accessType='inputOnly',name='previous',type='SFBool'),
            field(accessType='inputOnly',name='next',type='SFBool'),
            field(accessType='initializeOnly',appinfo='For development use only not for inclusion in specification implementations.',name='traceEnabled',type='SFBool',value=True),
            #  Script-specific interfaces, not needed for node definition 
            field(accessType='initializeOnly',name='previousFraction',type='SFFloat',value=0.0),
            field(accessType='initializeOnly',name='nextIndex',type='SFInt32',value=0),
            field(accessType='initializeOnly',name='isValid',type='SFBool',value=True),
            field(accessType='initializeOnly',name='recheckValidity',type='SFBool',value=False)],
            IS=IS(
              connect=[
              connect(nodeField='set_fraction',protoField='set_fraction'),
              connect(nodeField='set_key',protoField='set_key'),
              connect(nodeField='key_changed',protoField='key_changed'),
              connect(nodeField='set_keyValue',protoField='set_keyValue'),
              connect(nodeField='keyValue',protoField='keyValue'),
              connect(nodeField='keyValue_changed',protoField='keyValue_changed'),
              connect(nodeField='value_changed',protoField='value_changed'),
              connect(nodeField='previous',protoField='previous'),
              connect(nodeField='next',protoField='next')]))])])),
    #  ===============Example============== 
    Anchor(description='IntegerSequencerExample',parameter=["target=_blank"],url=["IntegerSequencerExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/IntegerSequencerExample.x3d","IntegerSequencerExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/IntegerSequencerExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["IntegerSequencerPrototype","defines a prototype","","Click text to see example scene","IntegerSequencerExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.9)),
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

print ("python x3d.py load successful for IntegerSequencerPrototype.py")
