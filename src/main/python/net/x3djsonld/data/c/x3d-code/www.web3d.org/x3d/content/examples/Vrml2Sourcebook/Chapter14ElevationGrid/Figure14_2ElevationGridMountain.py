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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='Figure14_2ElevationGridMountain.x3d',name='title'),
    meta(content='Figure 14.2, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch14/14fig02.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='19 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A mountain using a 9x9 ElevationGrid. Compare Figure14_2ElevationGridMountain.x3d, Figure16_7VertexColoredElevationGridMountain.x3d and Figure17_08bTexturedElevationGridMountain.x3d',name='description'),
    meta(content='../Chapter16Color/Figure16_7VertexColoredElevationGridMountain.x3d',name='reference'),
    meta(content='../Chapter17Textures/Figure17_08bTexturedElevationGridMountain.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter14ElevationGrid/Figure14_2ElevationGridMountain.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure14_2ElevationGridMountain.x3d'),
    Viewpoint(description='go tell it',orientation=(1,0,0,-0.3),position=(4,8,20)),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.4,0.1))),
      geometry=ElevationGrid(creaseAngle=1.57,height=[0.0,0.0,0.5,1.0,0.5,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2.5,0.5,0.0,0.0,0.0,0.0,0.0,0.5,0.5,3.0,1.0,0.5,0.0,1.0,0.0,0.0,0.5,2.0,4.5,2.5,1.0,1.5,0.5,1.0,2.5,3.0,4.5,5.5,3.5,3.0,1.0,0.0,0.5,2.0,2.0,2.5,3.5,4.0,2.0,0.5,0.0,0.0,0.0,0.5,1.5,1.0,2.0,3.0,1.5,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2.0,1.5,0.5,0.0,0.0,0.0,0.0,0.0,0.0,0.5,0.0,0.0],solid=False,xDimension=9,zDimension=9))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure14_2ElevationGridMountain.py")
