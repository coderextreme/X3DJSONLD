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
    meta(content='TextStringPrototype.x3d',name='title'),
    meta(content='Simple Prototype for the display of text strings, combining functionality of Text and FontStyle nodes.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='16 July 2006',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/TextStringPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TextStringPrototype.x3d'),
    ProtoDeclare(name='TextString',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='offset',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='string',type='MFString'),
        field(accessType='initializeOnly',name='size',type='SFFloat',value=1.0),
        field(accessType='inputOutput',name='color',type='SFColor',value=(0.2,0.6,1)),
        field(accessType='initializeOnly',name='justify',type='MFString',value=["MIDDLE","MIDDLE"]),
        field(accessType='initializeOnly',name='style',type='SFString',value='PLAIN'),
        field(accessType='initializeOnly',name='family',type='MFString',value=["SANS SERIF"])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='offset')]),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='color')]))),
            geometry=Text(
              IS=IS(
                connect=[
                connect(nodeField='string',protoField='string')]),
              fontStyle=FontStyle(
                IS=IS(
                  connect=[
                  connect(nodeField='family',protoField='family'),
                  connect(nodeField='justify',protoField='justify'),
                  connect(nodeField='size',protoField='size'),
                  connect(nodeField='style',protoField='style')]))))])])),
    ProtoInstance(DEF='MyTextStringInstance',name='TextString',
      fieldValue=[
      fieldValue(name='string',value=["This example TextString node","creates a prototype instance","that combines functionality","of Text and FontStyle nodes"]),
      fieldValue(name='size',value=0.8),
      fieldValue(name='style',value='BOLD')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TextStringPrototype.py")
