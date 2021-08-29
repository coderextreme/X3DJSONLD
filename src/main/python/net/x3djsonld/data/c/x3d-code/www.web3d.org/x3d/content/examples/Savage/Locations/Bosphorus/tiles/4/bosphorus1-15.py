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
        texture=ImageTexture(url=['../../images/4/bosphorus1-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.679573392779616,29.55022386869132,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[51,76,62,56,60,73,121,143,100,109,133,101,150,148,115,89,175,187,185,219,229,239,28,28,29,33,40,36,65,80,95,85,107,81,121,119,90,63,105,125,157,161,181,183,15,9,12,8,6,7,12,24,44,51,70,85,86,81,59,50,77,97,86,120,138,135,9,8,6,2,0,0,4,6,14,13,25,54,57,52,37,50,56,72,59,85,88,90,9,4,5,10,6,2,0,2,4,2,2,5,6,25,30,25,29,25,41,44,47,51,5,4,4,3,4,1,3,-1,1,2,5,0,1,2,4,10,12,12,13,13,18,19,5,2,-2,3,3,2,1,0,0,2,1,-2,0,0,1,0,5,4,4,5,9,12,1,3,5,0,-5,2,0,0,0,-1,0,0,0,-1,0,0,-1,0,1,0,7,4,1,2,0,3,0,0,0,3,2,-2,1,1,1,-1,0,1,0,1,-1,-1,0,3,1,1,0,5,3,1,0,2,0,0,0,0,0,2,0,0,0,-2,0,-1,0,0,2,0,-1,0,0,-1,-1,0,1,0,1,0,0,0,1,1,1,0,0,-2,0,0,1,1,0,0,0,3,1,0,2,0,0,1,1,0,2,1,0,0,1,-1,0,0,0,0,0,0,1,2,1,1,0,0,1,-1,2,1,1,0,0,0,0,0,0,2,9,1,3,1,0,0,1,-1,0,1,1,0,1,0,0,0,2,-5,2,2,0,0,3,0,2,0,1,2,0,0,1,2,0,0,-2,2,2,2,4,0,1,2,1,2,0,0,0,0,0,1,1,0,0,0,1,-1,1,1,0,0,0,3,0,0,0,0,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,5,0,2,4,2,1,1,2,0,0,0,0,0,1,0,0,2,1,0,2,0,0,3,2,1,3,2,4,4,2,3,0,2,0,0,1,2,0,0,5,0,0,1,1,2,2,3,3,1,3,3,1,1,1,1,2,0,0,0,0,0,0,-1,2,2,2,2,3,1,6,1,3,2,0,0,1,1,2,0,0,2,1,0,2,1,0,3,0,1,3,1,1,5,0,0,0,2,1,2,0,0,1,3,0,0,0,1,2,4,2,3,3,1,4,4,4,6,1,2,0,3,2,0,2,2,1,0,0,1,1,3,0,4,4,1,4,1,2,3,1,2,0,2,1,0,4,2,1,0,0,2,2,3,1,1,4,0,5,1,2,3],
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
