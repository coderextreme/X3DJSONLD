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
    meta(content='MetadataPrototypes.x3d',name='title'),
    meta(content='New X3D Metadata nodes in Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString) implemented as prototypes for backwards compatibility with VRML 97.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='17 November 2003',name='created'),
    meta(content='12 March 2021',name='modified'),
    meta(content='MetadataExamples.x3d',name='reference'),
    meta(content='Metadata nodes, X3D Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString)',name='subject'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    children=[
    ProtoDeclare(appinfo='MetadataBoolean contains a list of booleans in the value field.',name='MetadataBoolean',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',name='value',type='MFBool'),
        field(accessType='inputOutput',name='reference',type='SFString'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  initialization node (if any) goes here 
          )]),
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(info=["WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"]),
        Group(
          IS=IS(
            connect=[
            connect(nodeField='metadata',protoField='metadata')]),
          #  name holder 
          children=[
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='name')])),
          #  value holder; IS/connect possibilities are limited since no MFBool fields exist in other VRML/X3D nodes 
          #  Alternative: no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. 
          Script(url=["ignoreWarning.js","https://www.web3d.org/x3d/content/examples/Basic/development/ignoreWarning.js"],
            field=[
            field(accessType='inputOutput',name='booleanArray',type='MFBool')],
            IS=IS(
              connect=[
              connect(nodeField='booleanArray',protoField='value')])),
          #  reference holder 
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='reference')]))])])),
    #  ==================== 
    ProtoDeclare(appinfo='MetadataDouble contains a list of double-precision floating-point numbers in the value field.',name='MetadataDouble',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',name='value',type='MFDouble'),
        field(accessType='inputOutput',name='reference',type='SFString'),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(info=["WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"]),
        Group(
          IS=IS(
            connect=[
            connect(nodeField='metadata',protoField='metadata')]),
          #  name holder 
          children=[
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='name')])),
          #  value holder: X3D MFDouble maps to VRML 97MFFloat 
          Shape(
            geometry=Text(string=[""],
              IS=IS(
                connect=[
                connect(nodeField='length',protoField='value')])),
            appearance=Appearance(DEF='HideWarnings2',
              #  note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. 
              material=Material(),)),
          #  reference holder 
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='reference')]))]
          #  no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. 
          )])),
    #  ==================== 
    ProtoDeclare(appinfo='MetadataFloat contains a list of floating-point numbers in the value field.',name='MetadataFloat',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',name='value',type='MFFloat'),
        field(accessType='inputOutput',name='reference',type='SFString'),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(info=["WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"]),
        Group(
          IS=IS(
            connect=[
            connect(nodeField='metadata',protoField='metadata')]),
          #  name holder 
          children=[
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='name')])),
          #  value holder 
          Shape(
            geometry=Text(string=[""],
              IS=IS(
                connect=[
                connect(nodeField='length',protoField='value')])),
            appearance=Appearance(DEF='HideWarnings3',
              #  note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. 
              material=Material(),)),
          #  reference holder 
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='reference')]))]
          #  no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. 
          )])),
    #  ==================== 
    ProtoDeclare(appinfo='MetadataInteger contains a list of 32-bit integer numbers in the value field.',name='MetadataInteger',
      #  VRML 97 has no native exposedField MFInt32, and so must split value accessors to match available accessTypes. 
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='initializeOnly',name='value',type='MFInt32'),
        field(accessType='inputOnly',name='set_value',type='MFInt32'),
        field(accessType='inputOutput',name='reference',type='SFString'),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(info=["WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"]),
        Group(
          IS=IS(
            connect=[
            connect(nodeField='metadata',protoField='metadata')]),
          #  name holder 
          children=[
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='name')])),
          #  value holder 
          Shape(
            geometry=IndexedLineSet(
              IS=IS(
                connect=[
                connect(nodeField='colorIndex',protoField='value'),
                connect(nodeField='set_colorIndex',protoField='set_value')])),
            appearance=Appearance(DEF='HideWarnings4',
              #  note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. 
              material=Material(emissiveColor=(0.8,0.8,0.8)))),
          #  reference holder 
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='reference')]))]
          #  no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. 
          )])),
    #  ==================== 
    ProtoDeclare(appinfo='MetadataSet contains a list of Metadata nodes in the value field. MetadataSet can contain other MetadataSet nodes.',name='MetadataSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',name='value',type='MFNode',
          #  Specification initialization: NULL node 
          ),
        field(accessType='inputOutput',name='reference',type='SFString'),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(info=["WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"]),
        Group(
          IS=IS(
            connect=[
            connect(nodeField='metadata',protoField='metadata')]),
          #  name holder 
          children=[
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='name')])),
          #  value holder 
          Group(
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='value')])),
          #  reference holder 
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='reference')]))]
          #  no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. 
          )])),
    #  ==================== 
    ProtoDeclare(appinfo='MetadataString contains a list of strings in the value field.',name='MetadataString',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',name='value',type='MFString'),
        field(accessType='inputOutput',name='reference',type='SFString'),
        field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode',
          #  Specification initialization: NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(info=["WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"]),
        Group(
          IS=IS(
            connect=[
            connect(nodeField='metadata',protoField='metadata')]),
          #  name holder 
          children=[
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='name')])),
          #  value holder 
          Shape(
            geometry=Text(
              IS=IS(
                connect=[
                connect(nodeField='string',protoField='value')])),
            appearance=Appearance(DEF='HideWarnings5',
              #  note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. 
              material=Material(),)),
          #  reference holder 
          Viewpoint(
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='reference')]))]
          #  no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. 
          )])),
    #  ==================== 
    Background(groundColor=[(0.25,0.25,0.25)],skyColor=[(0.25,0.25,0.25)]),
    Anchor(DEF='LinkToExamples',description='link to examples',url=["MetadataExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d","MetadataExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.6,0.2))),
        geometry=Text(string=["MetadataPrototypes","is a developmental file.","Click this text to view","MetadataExamples"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.75)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MetadataPrototypes.py")
