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
    meta(content='FilterPrototypes.x3d',name='title'),
    meta(content='Contains prototypes that filter multiple values/events to extract a single value/event.',name='description'),
    meta(content='Don Brutzman, James Harney, Jane Wu',name='creator'),
    meta(content='18 December 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='1.0',name='version'),
    meta(content='event filter',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/FilterPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='FilterBooleanPassTrueEvents',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='setBoolean',type='SFBool'),
        field(accessType='outputOnly',name='trueEventOut',type='SFBool'),
        field(accessType='outputOnly',name='trueEventTime',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='PassTrueScript',
          field=[
          field(accessType='inputOnly',name='setBoolean',type='SFBool'),
          field(accessType='outputOnly',name='trueEventOut',type='SFBool'),
          field(accessType='outputOnly',name='trueEventTime',type='SFTime')],
          IS=IS(
            connect=[
            connect(nodeField='setBoolean',protoField='setBoolean'),
            connect(nodeField='trueEventOut',protoField='trueEventOut'),
            connect(nodeField='trueEventTime',protoField='trueEventTime')]))])),
    ProtoDeclare(name='FilterBooleanPassFalseEvents',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='setBoolean',type='SFBool'),
        field(accessType='outputOnly',name='falseEventOut',type='SFBool'),
        field(accessType='outputOnly',name='falseEventTime',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='PassFalseScript',
          field=[
          field(accessType='inputOnly',name='setBoolean',type='SFBool'),
          field(accessType='outputOnly',name='falseEventOut',type='SFBool'),
          field(accessType='outputOnly',name='falseEventTime',type='SFTime')],
          IS=IS(
            connect=[
            connect(nodeField='setBoolean',protoField='setBoolean'),
            connect(nodeField='falseEventOut',protoField='falseEventOut'),
            connect(nodeField='falseEventTime',protoField='falseEventTime')]))])),
    ProtoDeclare(name='FilterIntegersPassSingleInteger',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Index of the integer in the integer array to be extracted. Defaulted to 0.',name='integerIndex',type='SFInt32',value=0),
        field(accessType='inputOnly',name='setIntegers',type='MFInt32'),
        field(accessType='outputOnly',name='integerOut',type='SFInt32'),
        field(accessType='outputOnly',name='integerOutTime',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='PassIntegerScript',
          field=[
          field(accessType='initializeOnly',name='integerIndex',type='SFInt32'),
          field(accessType='inputOnly',name='setIntegers',type='MFInt32'),
          field(accessType='outputOnly',name='integerOut',type='SFInt32'),
          field(accessType='outputOnly',name='integerOutTime',type='SFTime')],
          IS=IS(
            connect=[
            connect(nodeField='integerIndex',protoField='integerIndex'),
            connect(nodeField='setIntegers',protoField='setIntegers'),
            connect(nodeField='integerOut',protoField='integerOut'),
            connect(nodeField='integerOutTime',protoField='integerOutTime')]))])),
    ProtoDeclare(name='FilterFloatsPassSingleFloat',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Index of the float in the float array to be extracted. Defaulted to 0.',name='floatIndex',type='SFInt32',value=0),
        field(accessType='inputOnly',name='setFloats',type='MFFloat'),
        field(accessType='outputOnly',name='floatOut',type='SFFloat'),
        field(accessType='outputOnly',name='floatOutTime',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='PassFloatScript',
          field=[
          field(accessType='initializeOnly',name='floatIndex',type='SFInt32'),
          field(accessType='inputOnly',name='setFloats',type='MFFloat'),
          field(accessType='outputOnly',name='floatOut',type='SFFloat'),
          field(accessType='outputOnly',name='floatOutTime',type='SFTime')],
          IS=IS(
            connect=[
            connect(nodeField='floatIndex',protoField='floatIndex'),
            connect(nodeField='setFloats',protoField='setFloats'),
            connect(nodeField='floatOut',protoField='floatOut'),
            connect(nodeField='floatOutTime',protoField='floatOutTime')]))])),
    ProtoDeclare(name='FilterStringsPassSingleString',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Index of the string in the string array to be extracted. Defaulted to 0.',name='stringIndex',type='SFInt32',value=0),
        field(accessType='inputOnly',name='setStrings',type='MFString'),
        field(accessType='outputOnly',name='stringOut',type='SFString'),
        field(accessType='outputOnly',name='stringOutTime',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='PassStringScript',
          field=[
          field(accessType='initializeOnly',name='stringIndex',type='SFInt32'),
          field(accessType='inputOnly',name='setStrings',type='MFString'),
          field(accessType='outputOnly',name='stringOut',type='SFString'),
          field(accessType='outputOnly',name='stringOutTime',type='SFTime')],
          IS=IS(
            connect=[
            connect(nodeField='stringIndex',protoField='stringIndex'),
            connect(nodeField='setStrings',protoField='setStrings'),
            connect(nodeField='stringOut',protoField='stringOut'),
            connect(nodeField='stringOutTime',protoField='stringOutTime')]))])),
    #  ==================== 
    Anchor(description='FilterExamples',parameter=["target=_blank"],url=["FilterExamples.wrl","https://savage.nps.edu/Savage/Tools/Authoring/FilterExamples.wrl","FilterExamples.x3d","https://savage.nps.edu/Savage/Tools/Authoring/FilterExamples.x3d"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["FilterPrototypes.wrl","is a Prototype definition file.","","To see an example scene","using these new nodes","click this text and view","FilterExamples.wrl"],
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

print ("python x3d.py load successful for FilterPrototypes.py")
