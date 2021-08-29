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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small10-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.569849613744502,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[1,5,1,0,1,1,1,1,0,1,3,1,2,0,0,1,2,3,1,1,1,0,0,2,0,0,1,0,3,2,2,1,1,0,1,1,3,0,0,0,4,0,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,1,1,1,0,1,2,0,1,4,1,1,0,2,3,0,1,1,2,2,2,1,0,1,1,3,0,1,1,3,0,2,3,0,0,0,3,0,3,1,2,0,1,0,-1,0,1,0,1,2,0,2,1,1,2,0,1,2,1,2,2,3,2,1,1,1,1,1,0,1,0,0,0,1,2,2,1,3,1,4,2,3,2,3,1,0,0,0,0,0,0,0,2,3,3,1,3,0,2,3,-1,5,2,1,3,0,2,2,3,0,1,0,0,1,1,0,3,2,2,0,0,0,1,1,2,0,1,3,1,3,1,0,0,3,0,2,4,0,0,1,2,1,1,0,1,4,2,0,1,0,3,0,1,0,3,1,1,0,0,0,2,0,1,4,3,0,7,2,1,0,3,2,0,2,1,1,2,0,2,0,3,0,3,2,0,2,5,1,4,0,3,0,0,3,0,1,1,1,1,3,1,2,0,9,15,10,14,11,1,0,1,2,2,1,2,-1,1,0,3,2,0,1,1,1,1,13,22,23,32,41,0,4,0,0,2,2,1,0,2,1,2,1,2,0,0,2,2,21,39,40,45,52,1,1,2,0,0,-2,1,2,0,3,2,2,0,0,1,2,4,13,24,28,45,42,0,4,4,2,-1,0,0,0,0,1,1,4,0,0,1,5,1,6,16,27,31,31,4,2,2,4,0,1,1,1,1,0,3,1,4,0,3,0,1,1,7,26,37,36,3,3,2,1,2,0,5,2,2,2,0,3,2,1,0,-1,0,2,6,30,38,64,0,4,1,4,1,1,2,2,0,2,2,2,1,2,3,0,0,1,0,34,48,49,3,-1,3,3,1,1,0,1,3,3,-1,1,1,2,0,0,0,1,0,10,13,13,6,0,2,-1,1,2,5,5,0,0,-6,0,1,0,0,2,0,0,5,-1,7,20,4,5,4,1,0,5,3,0,1,-1,3,0,1,0,0,0,3,1,2,4,-1,16,4,3,5,0,0,5,3,0,2,1,4,0,0,0,0,0,3,1,2,1,-1,12],
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
