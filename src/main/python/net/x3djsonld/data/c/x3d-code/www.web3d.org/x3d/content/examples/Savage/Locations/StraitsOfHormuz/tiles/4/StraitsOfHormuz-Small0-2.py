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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small0-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,55.42775814790765,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,1,1,3,0,4,3,0,-7,3,2,5,5,10,8,13,13,17,17,22,17,17,2,2,0,1,4,2,1,0,-14,4,1,3,2,2,7,8,10,12,14,18,14,19,0,3,2,0,4,4,3,6,0,1,3,3,0,3,5,7,8,14,21,16,16,23,1,2,3,0,0,5,1,-16,1,4,3,1,1,1,1,5,11,13,12,16,20,18,1,1,2,0,2,2,1,9,2,-6,4,1,3,-2,-1,3,2,7,11,15,15,15,0,4,2,4,3,0,3,4,7,5,-11,5,0,3,3,5,10,5,10,11,15,13,3,4,1,1,0,2,2,1,3,1,1,3,1,1,2,7,6,9,1,12,12,14,2,5,3,-1,2,4,2,4,0,0,5,4,2,3,2,4,0,6,9,10,5,10,1,1,4,3,1,1,2,2,3,5,1,1,3,3,8,1,1,3,9,12,5,7,3,3,2,1,0,1,1,0,5,2,5,3,3,9,11,1,1,1,2,2,4,8,3,3,2,2,3,4,2,2,4,2,2,3,5,4,7,0,2,0,0,2,3,9,2,3,5,1,3,0,2,3,4,4,3,5,4,2,4,1,0,2,2,2,1,4,3,1,5,4,1,3,2,1,4,1,3,3,2,2,0,2,1,3,1,0,1,3,5,2,4,5,0,3,1,1,0,1,3,3,2,1,4,4,1,2,1,2,1,3,2,3,2,1,2,2,2,1,2,2,1,7,3,3,2,0,1,0,0,2,1,3,4,3,4,3,3,2,4,3,4,3,3,2,3,3,6,-1,1,1,2,0,1,11,2,4,4,3,1,2,2,1,3,1,3,4,3,3,5,0,-1,2,0,3,0,2,3,1,4,3,3,4,1,1,1,5,3,5,3,0,5,3,0,0,0,5,0,1,2,1,4,0,6,1,2,2,2,2,2,4,1,3,3,3,0,2,0,-5,2,-1,2,4,1,4,5,1,3,2,2,0,4,2,4,1,3,3,1,0,8,5,1,0,1,2,1,5,3,2,1,6,5,5,3,4,4,4,4,1,1,1,1,2,5,0,3,3,2,5,4,1,0,3,2,2,2,6,2,4,7,5,6,0,2,5,2,0,3,3,2,5,5,2,1,3,2,2,3,4,3,6,9,5,6,0,3,5,2,0],
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
