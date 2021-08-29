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
        texture=ImageTexture(url=['../../images/5/newport19-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[50,51,51,50,48,45,41,32,19,4,0,0,0,0,0,0,0,0,0,0,0,0,54,53,51,50,47,43,39,31,18,3,0,0,0,0,0,0,0,0,0,0,0,0,56,53,52,50,46,42,38,30,19,5,0,0,0,0,0,0,0,0,0,0,0,0,55,52,51,49,45,40,36,29,18,4,0,0,0,0,0,0,0,0,0,0,0,0,55,52,49,46,43,39,31,23,13,3,0,0,0,0,0,0,0,0,0,0,0,0,55,51,49,44,40,35,32,26,13,2,0,0,0,0,0,0,0,0,0,0,0,0,56,52,49,45,41,37,32,23,10,2,0,0,0,0,0,0,0,0,0,0,0,0,57,53,49,43,37,32,27,18,7,2,1,0,0,0,0,0,0,0,0,0,0,0,56,51,47,42,34,29,22,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,55,51,46,39,33,25,18,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,53,50,43,33,28,22,15,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,52,45,36,27,21,14,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,52,43,33,22,10,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,39,28,16,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,47,34,23,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,29,16,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,26,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,24,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,21,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,19,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,20,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,18,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,17,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,16,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
