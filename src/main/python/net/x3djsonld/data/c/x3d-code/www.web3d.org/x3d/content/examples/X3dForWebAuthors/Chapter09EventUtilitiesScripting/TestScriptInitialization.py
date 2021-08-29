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
    meta(content='TestScriptInitialization.x3d',name='title'),
    meta(content='Test ability to perform Script initialize() method using ECMAsript',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='16 February 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/TestScriptInitialization.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestScriptInitialization.x3d'),
    Shape(
      geometry=Text(DEF='DisplayText',string=["waiting for","Script to initialize()..."],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
      appearance=Appearance(
        material=Material(ambientIntensity=0,diffuseColor=(0,0,0),emissiveColor=(0,0.398733,1),shininess=0.05,specularColor=(0.622449,0.622449,0.622449)))),
    Script(DEF='Initializer',
      field=[
      field(accessType='outputOnly',name='initializeResult',type='MFString')]),
    ROUTE(fromField='initializeResult',fromNode='Initializer',toField='string',toNode='DisplayText')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestScriptInitialization.py")
