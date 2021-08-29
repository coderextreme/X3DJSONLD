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
    meta(content='WhereAmIExample.x3d',name='title'),
    meta(content='Example use of prototype node for displaying current viewpoint location and orientation in the player console.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='28 March 2016',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='WhereAmIPrototype.x3d',name='reference'),
    meta(content='WhereAmIExample.console.txt',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    #  Only one copy of a given ExternProtoDeclare is needed in a scene. 
    children=[
    WorldInfo(title='WhereAmIExample.x3d'),
    ExternProtoDeclare(name='WhereAmI',url=["../Chapter14Prototypes/WhereAmIPrototype.x3d#WhereAmI","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d#WhereAmI","../Chapter14Prototypes/WhereAmIPrototype.wrl#WhereAmI","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmI.wrl#WhereAmI"]),
    ProtoInstance(name='WhereAmI'),
    #  ==================== 
    Viewpoint(description='WhereAmI prototype test'),
    Viewpoint(description='Viewpoint 2',orientation=(0,1,0,1.570796),position=(10,0,0)),
    Viewpoint(description='Viewpoint 3',orientation=(0,1,0,-3.141593),position=(0,0,-10)),
    Viewpoint(description='Viewpoint 4',orientation=(0,1,0,-1.570796),position=(-10,0,0)),
    Shape(
      geometry=Text(string=["Check X3D console","while navigating to see","current viewpoint values"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.9,spacing=0.9)),
      appearance=Appearance(
        material=Material(ambientIntensity=0.23,diffuseColor=(0.5,0.243312,0.127417),emissiveColor=(0.015957,0.015957,0.015957),shininess=0.03,specularColor=(0.276596,0.055086,0.01524)))),
    Shape(
      geometry=Box(size=(8.5,3,0.5)),
      appearance=Appearance(
        material=Material(diffuseColor=(0.9,0.9,0.9),transparency=0.8)))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WhereAmIExample.py")
