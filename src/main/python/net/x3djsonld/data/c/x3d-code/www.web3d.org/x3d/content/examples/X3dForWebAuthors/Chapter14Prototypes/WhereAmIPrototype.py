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
    meta(content='WhereAmIPrototype.x3d',name='title'),
    meta(content='Prototype node declaration for displaying current viewpoint location and orientation in the player console.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='1 January 1999',name='created'),
    meta(content='5 May 2006',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='WhereAmIExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='Copyright 1999, 2006, Daly Realism, Inc.',name='rights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='WhereAmIPrototype.x3d'),
    ProtoDeclare(appinfo='Prototype node for displaying current viewpoint location and orientation',name='WhereAmI',
      #  No ProtoInterface fields are needed for this prototype 
      ProtoBody=ProtoBody(
        children=[
        ProximitySensor(DEF='WhereSensor',size=(100000,100000,100000)),
        #  no geometry is rendered in the current scene by the prototype 
        Script(DEF='WhereDump',url=["WhereAmIPrototypeScript.js","../Chapter14Prototypes/WhereAmIPrototypeScript.js","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototypeScript.js"],
          field=[
          field(accessType='inputOnly',name='position',type='SFVec3f'),
          field(accessType='inputOnly',name='orientation',type='SFRotation')]),
        ROUTE(fromField='orientation_changed',fromNode='WhereSensor',toField='orientation',toNode='WhereDump'),
        ROUTE(fromField='position_changed',fromNode='WhereSensor',toField='position',toNode='WhereDump')])),
    #  ProtoInstance instantiates (creates) a new node using the ProtoDeclare prototype definition 
    ProtoInstance(name='WhereAmI'),
    Viewpoint(description='WhereAmI prototype test'),
    Shape(
      geometry=Text(string=["Check X3D console","while navigating for","current viewpoint","position, orientation"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
      appearance=Appearance(
        material=Material(ambientIntensity=0.23,diffuseColor=(0.5,0.243312,0.127417),emissiveColor=(0.015957,0.015957,0.015957),shininess=0.03,specularColor=(0.276596,0.055086,0.01524))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WhereAmIPrototype.py")
