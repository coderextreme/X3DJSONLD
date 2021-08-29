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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='MetadataExamples.x3d',name='title'),
    meta(content='Examples showing use of new X3D Metadata nodes in Core component (MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString). Also provided: external prototype definitions for backwards compatibility with VRML 97.',name='description'),
    meta(content='Metadata nodes may be repositioned by a few lines if VRML97 parent node does not support the children field.',name='hint'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='17 November 2003',name='created'),
    meta(content='20 January 2020',name='modified'),
    meta(content='The external prototype declarations in this file are only intended for use with browsers that do not already support the Metadata nodes.',name='warning'),
    meta(content='MetadataPrototypes.x3d',name='reference'),
    meta(content='Metadata nodes, X3D Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString)',name='subject'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    #  Do not copy these ExternProtoDeclare statements, they are only included for preparation of X3dToVrml97.xslt stylesheet mappings for backwards compatibility. 
    #  ==================== 
    children=[
    ExternProtoDeclare(appinfo='MetadataBoolean contains a list of booleans in the value field.',name='MetadataBoolean',url=["MetadataPrototypes.x3d#MetadataBoolean","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataBoolean","MetadataPrototypes.wrl#MetadataBoolean","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataBoolean"],
      field=[
      field(accessType='inputOutput',appinfo='default value',name='name',type='SFString'),
      field(accessType='inputOutput',appinfo='default value',name='value',type='MFBool'),
      field(accessType='inputOutput',appinfo='default value',name='reference',type='SFString'),
      field(accessType='inputOutput',appinfo='Metadata node only',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='MetadataDouble contains a list of double-precision floating-point numbers in the value field.',name='MetadataDouble',url=["MetadataPrototypes.x3d#MetadataDouble","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataDouble","MetadataPrototypes.wrl#MetadataDouble","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataDouble"],
      field=[
      field(accessType='inputOutput',name='name',type='SFString'),
      field(accessType='inputOutput',name='value',type='MFDouble'),
      field(accessType='inputOutput',name='reference',type='SFString'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='MetadataFloat contains a list of floating-point numbers in the value field.',name='MetadataFloat',url=["MetadataPrototypes.x3d#MetadataFloat","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataFloat","MetadataPrototypes.wrl#MetadataFloat","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataFloat"],
      field=[
      field(accessType='inputOutput',name='name',type='SFString'),
      field(accessType='inputOutput',name='value',type='MFFloat'),
      field(accessType='inputOutput',name='reference',type='SFString'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='MetadataInteger contains a list of 32-bit integer numbers in the value field.',name='MetadataInteger',url=["MetadataPrototypes.x3d#MetadataInteger","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataInteger","MetadataPrototypes.wrl#MetadataInteger","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataInteger"],
      field=[
      field(accessType='inputOutput',name='name',type='SFString'),
      field(accessType='initializeOnly',name='value',type='MFInt32'),
      field(accessType='inputOnly',name='set_value',type='MFInt32'),
      field(accessType='inputOutput',name='reference',type='SFString'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='MetadataSet contains a list of nodes in the value field.',name='MetadataSet',url=["MetadataPrototypes.x3d#MetadataSet","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataSet","MetadataPrototypes.wrl#MetadataSet","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataSet"],
      field=[
      field(accessType='inputOutput',name='name',type='SFString'),
      field(accessType='inputOutput',name='value',type='MFNode'),
      field(accessType='inputOutput',name='reference',type='SFString'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    ExternProtoDeclare(appinfo='MetadataString contains a set of strings in the value field.',name='MetadataString',url=["MetadataPrototypes.x3d#MetadataString","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataString","MetadataPrototypes.wrl#MetadataString","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataString"],
      field=[
      field(accessType='inputOutput',name='name',type='SFString'),
      field(accessType='inputOutput',name='value',type='MFString'),
      field(accessType='inputOutput',name='reference',type='SFString'),
      field(accessType='inputOutput',name='metadata',type='SFNode')]),
    #  =========================== 
    #  Example Metadata node usage 
    #  =========================== 
    Group(
      metadata=MetadataBoolean(DEF='MetadataBooleanInstance',name='sample boolean data',reference='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataBoolean',value=[True,False,True]),
      children=[
      Transform(
        metadata=MetadataDouble(DEF='MetadataDoubleInstance',name='sample double data',reference='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataDouble',value=[1.0,2.0,3.0])),
      Transform(
        metadata=MetadataFloat(name='sample float data',reference='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataFloat',value=[1.0,2.0,3.0],
          metadata=MetadataDouble(USE='MetadataDoubleInstance'),
          #  metadata child of metadata node (also note nested PROTO here, when translated) 
          )),
      Transform(
        metadata=MetadataInteger(name='sample integer data',reference='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataInteger',value=[1,2,3])),
      Transform(
        metadata=MetadataSet(name='sample data',reference='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataSet',
          metadata=MetadataString(name='containerFieldDefaultTest',value=["This initial node is containerField=metadata on the MetadataSet, not part of the containerField=value set"]),
          #  be sure to set containerField='value' for all members of the contained set! 
          value=[
          MetadataBoolean(name='MetadataSetValue1',value=[True,False,True]),
          MetadataDouble(name='MetadataSetValue2',value=[0,1,2]),
          MetadataFloat(name='MetadataSetValue3',value=[3,4,5]),
          MetadataInteger(name='MetadataSetValue4',value=[6,7,8]),
          MetadataString(name='MetadataSetValue5',value=["string1","string2"])])),
      Transform(
        metadata=MetadataString(name='sample string data',reference='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataString',value=["one two three","four five six"])),
      Group(
        children=[
        WorldInfo(DEF='TestMetadataChild',
          metadata=MetadataString(name='Backwards compatibility note',value=["Metadata nodes are converted into comments when children [ ] field is not available in parent node"]))])]),
    #  ==================== 
    Anchor(DEF='LinkToExamples',description='link to examples',parameter=["target=_blank"],url=["MetadataExamples.html","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamplesIndex.html"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.6,0.2))),
        geometry=Text(string=["MetadataExamples is a developmental file to define","EXTERNPROTO signatures in VRML 97 syntax","Example usage of Metadata nodes also included.","","Click text to view source"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MetadataExamples.py")
