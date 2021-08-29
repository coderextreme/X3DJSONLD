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
        texture=ImageTexture(url=['../../images/5/newport20-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,13,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,19,15,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,21,19,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,26,21,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,32,26,19,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,42,29,22,18,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,49,43,32,24,22,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,48,39,32,25,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,52,43,33,26,18,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,53,47,32,27,23,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,56,46,37,33,24,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,57,58,47,38,29,22,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,52,47,37,31,20,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,43,41,33,26,20,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,41,37,34,28,20,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,44,38,34,34,28,20,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,36,36,35,28,18,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,40,32,39,29,20,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,33,34,35,30,19,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,33,35,33,29,18,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
