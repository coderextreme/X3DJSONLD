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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small0-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[127,50,57,18,77,0,1,0,2,1,2,-3,0,0,0,0,1,1,0,0,2,0,172,113,168,127,154,1,0,0,0,2,0,0,0,2,1,0,0,0,0,0,0,-1,180,189,416,312,106,0,1,-1,3,0,5,1,0,0,0,0,1,1,0,0,0,3,241,100,166,154,10,0,2,2,2,1,0,2,0,2,0,0,0,0,2,0,1,0,313,96,93,18,5,2,0,1,1,0,2,1,2,1,1,0,0,0,0,0,2,0,209,272,275,128,114,0,2,0,0,1,2,2,0,1,0,2,0,2,0,2,1,1,251,334,274,67,14,1,1,1,3,1,0,4,0,4,4,0,1,0,1,0,1,0,237,524,370,176,21,0,2,0,1,1,2,0,2,1,3,2,1,0,1,0,1,1,138,311,242,59,11,0,1,3,0,3,2,3,2,2,3,1,1,0,1,2,-1,0,93,178,334,55,8,0,4,1,4,3,2,4,6,0,3,2,0,2,0,0,0,0,73,69,150,228,33,3,2,0,1,2,1,5,1,2,1,3,0,0,0,0,0,-1,58,46,109,180,144,1,0,3,1,4,0,0,4,3,2,0,1,1,0,1,0,1,47,56,38,104,25,1,2,1,3,1,1,1,3,1,0,3,2,1,1,1,0,0,39,32,25,25,14,22,4,3,2,1,2,1,2,0,1,0,1,3,0,2,0,0,45,36,28,18,11,5,2,3,1,3,1,0,0,2,0,0,2,0,2,0,0,2,43,32,24,16,9,6,2,0,0,2,1,3,0,0,0,0,1,-1,0,2,0,2,33,32,21,14,10,1,0,1,3,3,1,1,0,2,0,0,1,0,3,3,0,0,38,26,18,10,5,2,3,3,2,2,2,0,0,3,1,2,3,0,0,0,0,0,37,25,18,10,2,2,6,0,0,0,0,1,2,1,0,0,2,0,1,0,0,0,41,32,15,10,1,1,2,1,0,2,1,2,1,0,0,2,0,4,0,0,0,4,145,106,12,7,0,2,1,3,1,3,0,1,0,0,3,4,3,3,3,-1,2,5,172,42,18,2,0,0,0,2,0,0,0,1,2,1,0,4,3,6,0,2,0,0,150,46,18,2,1,1,0,2,1,0,0,1,2,0,1,2,3,5,2,0,2,-7],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
