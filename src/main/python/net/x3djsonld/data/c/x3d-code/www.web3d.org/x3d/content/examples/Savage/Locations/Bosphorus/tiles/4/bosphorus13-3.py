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
        texture=ImageTexture(url=['../../images/4/bosphorus13-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.33559074013499,28.660044773738264,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[13,22,33,24,33,48,51,57,76,45,64,73,58,48,41,33,22,16,9,2,2,4,20,46,49,37,21,45,66,69,84,53,58,48,41,31,24,19,12,1,0,2,1,0,23,56,68,43,34,40,61,89,81,60,41,28,28,19,15,5,1,1,6,-1,-3,0,27,45,69,62,49,41,56,72,76,51,24,15,17,8,0,0,3,1,0,2,0,0,31,41,71,81,61,51,52,58,51,31,11,5,3,0,0,3,0,0,0,0,-1,-1,42,44,72,92,87,64,52,43,19,8,1,2,0,1,-2,0,0,0,3,0,0,0,50,39,56,80,87,65,54,36,5,3,-2,0,-2,0,0,-1,0,0,0,0,0,-1,63,54,50,47,26,21,57,8,2,3,1,-1,0,0,0,0,-1,1,1,0,0,0,67,38,10,7,8,1,48,12,2,0,1,0,0,-2,0,-1,0,0,0,-3,0,1,14,5,12,-1,0,-1,15,23,1,-2,1,-1,0,-1,0,0,0,1,1,-2,0,0,16,1,-1,1,1,1,2,7,4,0,1,2,0,0,0,0,-1,-1,-1,2,0,0,-2,-3,1,2,2,0,0,2,0,-2,-2,-2,0,0,-1,0,-2,0,1,0,0,0,-2,3,0,2,2,-5,2,2,-2,-1,0,-2,0,0,0,0,0,0,0,0,2,0,-2,0,-1,0,4,-1,0,0,0,0,0,1,0,0,0,0,0,0,3,1,0,3,0,0,1,0,-1,1,0,3,-1,1,-1,0,0,2,0,0,1,2,1,0,0,1,-2,0,0,0,1,0,0,0,3,1,0,0,0,0,-1,0,1,1,0,0,0,2,0,2,0,0,0,-1,0,0,0,0,-1,0,0,0,2,0,1,3,1,1,0,0,0,1,-2,-1,0,1,0,1,1,0,-2,0,-2,0,0,0,0,7,0,0,2,2,0,1,0,0,0,1,1,0,2,-3,0,4,0,0,0,1,2,0,2,1,2,0,0,0,-1,0,0,0,0,0,0,1,4,3,0,0,1,0,2,0,-2,-1,1,1,0,0,1,0,-1,-4,0,1,2,-1,2,5,3,2,-2,0,0,0,0,0,1,0,1,0,-3,-1,1,0,0,0,-1,0,2,0,0,0,1,1,0,3,0,0,1,1,-2,1,1,0,1,-2,2,0,-1,2,-3,3,1,-1,2,0,0,4,2,2,0,0,-2,0,0,0,0,-2,2,-1,0,2,-3,2,0,-2,1,1,0,2,1,1,0,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
