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
    meta(content='AmbientIntensity.x3d',name='title'),
    meta(content='This example illustrates the effect of an ambientIntensity field from a Sphere on a Cone. Note that navigation reports of user position and orientation from the WhereAmI prototype appear in the player console.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='2 February 2006',name='created'),
    meta(content='2 February 2006',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright (c) 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/AmbientIntensity.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='AmbientIntensity.x3d'),
    Viewpoint(description='Default Viewpoint',position=(0,0,10.00)),
    Viewpoint(description='Book Viewpoint',orientation=(-1.,0.04,0.008,0.2406),position=(-0.036,2.17,8.89)),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0),specularColor=(0,1,0),transparency=.8)),
        geometry=Cone(),)]),
    Transform(translation=(0,0,-6),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=.8,diffuseColor=(0,0,1))),
        geometry=Sphere(),)]),
    ExternProtoDeclare(name='WhereAmI',url=["../Chapter14Prototypes/WhereAmIPrototype.x3d#WhereAmI","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d#WhereAmI","../Chapter14Prototypes/WhereAmIPrototype.wrl#WhereAmI","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmI.wrl#WhereAmI"]),
    ProtoInstance(name='WhereAmI'),
    Background(skyColor=[(1,1,1)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AmbientIntensity.py")
