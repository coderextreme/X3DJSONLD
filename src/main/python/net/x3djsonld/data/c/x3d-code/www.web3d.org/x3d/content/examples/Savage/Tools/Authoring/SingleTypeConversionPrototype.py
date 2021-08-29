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
    meta(content='SingleTypeConversionPrototype.x3d',name='title'),
    meta(content='Converts from a single typed value to various other types of values.',name='description'),
    meta(content='Don Brutzman, Mike Hunsberger, Jane Wu',name='creator'),
    meta(content='15 June 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='type conversion',name='subject'),
    meta(content='http://www.cs.brown.edu/~gss/VRML98/paper.rev.html',name='reference'),
    meta(content='http://www.cs.brown.edu/~gss/vrml/hprotos.wrl',name='reference'),
    meta(content='http://www.cs.brown.edu/~gss/vrml/hotpot.zip',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='SingleTypeConversion converts from a single typed value to various other types of values',name='SingleTypeConversion',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='decimalPlaces is the number of significant digits after the decimal point, use -1 to indicate no round off',name='decimalPlaces',type='SFInt32',value=-1),
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
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='ConversionScript',
          field=[
          field(accessType='initializeOnly',name='decimalPlaces',type='SFInt32'),
          field(accessType='inputOnly',name='setDecimalPlaces',type='SFInt32'),
          field(accessType='inputOnly',name='SFBoolValue',type='SFBool'),
          field(accessType='inputOnly',name='SFFloatValue',type='SFFloat'),
          field(accessType='inputOnly',name='SFInt32Value',type='SFInt32'),
          field(accessType='inputOnly',name='SFTimeValue',type='SFTime'),
          field(accessType='outputOnly',name='SFBoolResult',type='SFBool'),
          field(accessType='outputOnly',name='SFInt32Result',type='SFInt32'),
          field(accessType='outputOnly',name='SFFloatResult',type='SFFloat'),
          field(accessType='outputOnly',name='SFTimeResult',type='SFTime'),
          field(accessType='outputOnly',name='SFStringResult',type='SFString'),
          field(accessType='outputOnly',name='MFStringResult',type='MFString'),
          field(accessType='initializeOnly',appinfo='local temporary variable',name='newIntegerValue',type='SFInt32',value=0),
          field(accessType='initializeOnly',appinfo='local temporary variable',name='newFloatValue',type='SFFloat',value=0.0),
          field(accessType='initializeOnly',appinfo='local temporary variable',name='newTimeValue',type='SFFloat',value=0.0),
          field(accessType='initializeOnly',appinfo='local variable defined as field for persistence',name='roundOffFactor',type='SFFloat',value=1)],
          IS=IS(
            connect=[
            connect(nodeField='decimalPlaces',protoField='decimalPlaces'),
            connect(nodeField='setDecimalPlaces',protoField='setDecimalPlaces'),
            connect(nodeField='SFBoolValue',protoField='BooleanValue'),
            connect(nodeField='SFFloatValue',protoField='FloatValue'),
            connect(nodeField='SFInt32Value',protoField='IntegerValue'),
            connect(nodeField='SFTimeValue',protoField='TimeValue'),
            connect(nodeField='SFBoolResult',protoField='BooleanResult'),
            connect(nodeField='SFInt32Result',protoField='IntegerResult'),
            connect(nodeField='SFFloatResult',protoField='FloatResult'),
            connect(nodeField='SFTimeResult',protoField='TimeResult'),
            connect(nodeField='SFStringResult',protoField='StringResult'),
            connect(nodeField='MFStringResult',protoField='StringsResult')]))])),
    #  ==================== 
    Anchor(description='SingleTypeConversion Example',url=["SingleTypeConversionExample.x3d","../../../Savage/Tools/Authoring/SingleTypeConversionExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionExample.x3d","SingleTypeConversionExample.wrl","../../../Savage/Tools/Authoring/SingleTypeConversionExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["SingleTypeConversionPrototype","is a Prototype definition file.","","To see an example scene","select this text and view","SingleTypeConversionExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SingleTypeConversionPrototype.py")
